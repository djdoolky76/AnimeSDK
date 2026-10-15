#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNFBAGBGMGN;
namespace System { class Object; }

#define MNFBAGBGMGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA953C0)
#define MNFBAGBGMGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95400)
#define MNFBAGBGMGN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA95410)

inline static constexpr unsigned int MNFBAGBGMGN___c_TypeDefinitionIndex = 27710;

	class MNFBAGBGMGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNFBAGBGMGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN___C_CTOR_OFFSET))(this);
		}

		::MNFBAGBGMGN* __cctor_b__18_0()
		{
			return ((::MNFBAGBGMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

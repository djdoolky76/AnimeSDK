#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNCNGIAMLCA;
namespace System { class Object; }

#define PNCNGIAMLCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF86110)
#define PNCNGIAMLCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF86140)
#define PNCNGIAMLCA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF86150)

inline static constexpr unsigned int PNCNGIAMLCA___c_TypeDefinitionIndex = 27652;

	class PNCNGIAMLCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNCNGIAMLCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA___C_CTOR_OFFSET))(this);
		}

		::PNCNGIAMLCA* __cctor_b__33_0()
		{
			return ((::PNCNGIAMLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

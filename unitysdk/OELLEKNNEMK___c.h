#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELLEKNNEMK;
namespace System { class Object; }

#define OELLEKNNEMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D3040)
#define OELLEKNNEMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D3080)
#define OELLEKNNEMK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0D3090)

inline static constexpr unsigned int OELLEKNNEMK___c_TypeDefinitionIndex = 26415;

	class OELLEKNNEMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELLEKNNEMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK___C_CTOR_OFFSET))(this);
		}

		::OELLEKNNEMK* __cctor_b__28_0()
		{
			return ((::OELLEKNNEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

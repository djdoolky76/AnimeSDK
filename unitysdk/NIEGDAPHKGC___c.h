#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEGDAPHKGC;
namespace System { class Object; }

#define NIEGDAPHKGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0B30)
#define NIEGDAPHKGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0B70)
#define NIEGDAPHKGC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EAC0B80)

inline static constexpr unsigned int NIEGDAPHKGC___c_TypeDefinitionIndex = 26014;

	class NIEGDAPHKGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C_CTOR_OFFSET))(this);
		}

		::NIEGDAPHKGC* __cctor_b__53_0()
		{
			return ((::NIEGDAPHKGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

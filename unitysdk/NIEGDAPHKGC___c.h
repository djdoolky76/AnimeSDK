#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEGDAPHKGC;
namespace System { class Object; }

#define NIEGDAPHKGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFDC20)
#define NIEGDAPHKGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFDC60)
#define NIEGDAPHKGC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EAFDC70)

inline static constexpr unsigned int NIEGDAPHKGC___c_TypeDefinitionIndex = 25521;

	class NIEGDAPHKGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x652D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C_CTOR_OFFSET))(this);
		}

		::NIEGDAPHKGC* __cctor_b__48_0()
		{
			return ((::NIEGDAPHKGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEGDAPHKGC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};

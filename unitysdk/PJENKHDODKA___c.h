#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJENKHDODKA;
namespace System { class Object; }

#define PJENKHDODKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF760A0)
#define PJENKHDODKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF760E0)
#define PJENKHDODKA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF760F0)

inline static constexpr unsigned int PJENKHDODKA___c_TypeDefinitionIndex = 25079;

	class PJENKHDODKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJENKHDODKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJENKHDODKA___C_CTOR_OFFSET))(this);
		}

		::PJENKHDODKA* __cctor_b__38_0()
		{
			return ((::PJENKHDODKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJENKHDODKA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

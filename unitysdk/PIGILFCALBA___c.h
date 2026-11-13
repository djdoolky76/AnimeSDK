#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGILFCALBA;
namespace System { class Object; }

#define PIGILFCALBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2054D840)
#define PIGILFCALBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2054D880)
#define PIGILFCALBA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2054D890)

inline static constexpr unsigned int PIGILFCALBA___c_TypeDefinitionIndex = 28346;

	class PIGILFCALBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGILFCALBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA___C_CTOR_OFFSET))(this);
		}

		::PIGILFCALBA* __cctor_b__33_0()
		{
			return ((::PIGILFCALBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

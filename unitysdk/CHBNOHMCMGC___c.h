#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHBNOHMCMGC;
namespace System { class Object; }

#define CHBNOHMCMGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC0B0)
#define CHBNOHMCMGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC0F0)
#define CHBNOHMCMGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0BC100)

inline static constexpr unsigned int CHBNOHMCMGC___c_TypeDefinitionIndex = 28956;

	class CHBNOHMCMGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHBNOHMCMGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC___C_CTOR_OFFSET))(this);
		}

		::CHBNOHMCMGC* __cctor_b__28_0()
		{
			return ((::CHBNOHMCMGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

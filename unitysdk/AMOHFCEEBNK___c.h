#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMOHFCEEBNK;
namespace System { class Object; }

#define AMOHFCEEBNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F917510)
#define AMOHFCEEBNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F917550)
#define AMOHFCEEBNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F917560)

inline static constexpr unsigned int AMOHFCEEBNK___c_TypeDefinitionIndex = 34578;

	class AMOHFCEEBNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMOHFCEEBNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK___C_CTOR_OFFSET))(this);
		}

		::AMOHFCEEBNK* __cctor_b__23_0()
		{
			return ((::AMOHFCEEBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

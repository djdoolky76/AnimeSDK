#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPHJPOIBGLC;
namespace System { class Object; }

#define HPHJPOIBGLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F4D90)
#define HPHJPOIBGLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F4DD0)
#define HPHJPOIBGLC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8F4DE0)

inline static constexpr unsigned int HPHJPOIBGLC___c_TypeDefinitionIndex = 26090;

	class HPHJPOIBGLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x427C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHJPOIBGLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC___C_CTOR_OFFSET))(this);
		}

		::HPHJPOIBGLC* __cctor_b__33_0()
		{
			return ((::HPHJPOIBGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

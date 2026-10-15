#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPHJPOIBGLC;
namespace System { class Object; }

#define HPHJPOIBGLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA680)
#define HPHJPOIBGLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA6C0)
#define HPHJPOIBGLC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5CA6D0)

inline static constexpr unsigned int HPHJPOIBGLC___c_TypeDefinitionIndex = 25595;

	class HPHJPOIBGLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EDA0);
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

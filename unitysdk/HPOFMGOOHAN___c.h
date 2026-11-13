#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOFMGOOHAN;
namespace System { class Object; }

#define HPOFMGOOHAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20397590)
#define HPOFMGOOHAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203975D0)
#define HPOFMGOOHAN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203975E0)

inline static constexpr unsigned int HPOFMGOOHAN___c_TypeDefinitionIndex = 33174;

	class HPOFMGOOHAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x415A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPOFMGOOHAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN___C_CTOR_OFFSET))(this);
		}

		::HPOFMGOOHAN* __cctor_b__23_0()
		{
			return ((::HPOFMGOOHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

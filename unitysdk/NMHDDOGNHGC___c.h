#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHDDOGNHGC;
namespace System { class Object; }

#define NMHDDOGNHGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB48B10)
#define NMHDDOGNHGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB48B50)
#define NMHDDOGNHGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB48B60)

inline static constexpr unsigned int NMHDDOGNHGC___c_TypeDefinitionIndex = 28488;

	class NMHDDOGNHGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHDDOGNHGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC___C_CTOR_OFFSET))(this);
		}

		::NMHDDOGNHGC* __cctor_b__33_0()
		{
			return ((::NMHDDOGNHGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

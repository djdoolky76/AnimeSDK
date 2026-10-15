#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGCJMLFHCO;
namespace System { class Object; }

#define ACGCJMLFHCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDC8E0)
#define ACGCJMLFHCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDC920)
#define ACGCJMLFHCO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDDC930)

	class ACGCJMLFHCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGCJMLFHCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO___C_CTOR_OFFSET))(this);
		}

		::ACGCJMLFHCO* __cctor_b__38_0()
		{
			return ((::ACGCJMLFHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

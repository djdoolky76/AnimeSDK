#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJAPPADDIC;
namespace System { class Object; }

#define MNJAPPADDIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF01A70)
#define MNJAPPADDIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF01AB0)
#define MNJAPPADDIC___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1FF01AC0)

inline static constexpr unsigned int MNJAPPADDIC___c_TypeDefinitionIndex = 29725;

	class MNJAPPADDIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJAPPADDIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJAPPADDIC___C_CTOR_OFFSET))(this);
		}

		::MNJAPPADDIC* __cctor_b__32_0()
		{
			return ((::MNJAPPADDIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJAPPADDIC___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};

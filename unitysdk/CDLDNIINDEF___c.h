#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLDNIINDEF;
namespace System { class Object; }

#define CDLDNIINDEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204BE1C0)
#define CDLDNIINDEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204BE200)
#define CDLDNIINDEF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204BE210)

inline static constexpr unsigned int CDLDNIINDEF___c_TypeDefinitionIndex = 31323;

	class CDLDNIINDEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x622F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLDNIINDEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF___C_CTOR_OFFSET))(this);
		}

		::CDLDNIINDEF* __cctor_b__28_0()
		{
			return ((::CDLDNIINDEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

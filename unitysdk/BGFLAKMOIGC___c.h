#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFLAKMOIGC;
namespace System { class Object; }

#define BGFLAKMOIGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA48D70)
#define BGFLAKMOIGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA48DB0)
#define BGFLAKMOIGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA48DC0)

inline static constexpr unsigned int BGFLAKMOIGC___c_TypeDefinitionIndex = 33917;

	class BGFLAKMOIGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFLAKMOIGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC___C_CTOR_OFFSET))(this);
		}

		::BGFLAKMOIGC* __cctor_b__28_0()
		{
			return ((::BGFLAKMOIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

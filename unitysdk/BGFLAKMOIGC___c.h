#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFLAKMOIGC;
namespace System { class Object; }

#define BGFLAKMOIGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA76410)
#define BGFLAKMOIGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA76450)
#define BGFLAKMOIGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA76460)

inline static constexpr unsigned int BGFLAKMOIGC___c_TypeDefinitionIndex = 33917;

	class BGFLAKMOIGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42C80);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"

#define FGIBGCKPBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA40080)
#define FGIBGCKPBHP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA3FEA0)
#define FGIBGCKPBHP__UPDATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1CA40090)

inline static constexpr unsigned int FGIBGCKPBHP_TypeDefinitionIndex = 42204;

	class FGIBGCKPBHP : public ::CKFDNGOHNPC
	{
	public:
		::System::Boolean PINOPBHJIMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIBGCKPBHP_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGIBGCKPBHP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void _Update_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIBGCKPBHP__UPDATE_B__0_0_OFFSET))(this);
		}

	};

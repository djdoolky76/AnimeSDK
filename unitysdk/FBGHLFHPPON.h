#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FBGHLFHPPON;
class FCOEMCEDLNL;
namespace System { class String; }

#define FBGHLFHPPON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9C800)
#define FBGHLFHPPON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD9C810)
#define FBGHLFHPPON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD9C7C0)

inline static constexpr unsigned int FBGHLFHPPON_TypeDefinitionIndex = 24144;

	class FBGHLFHPPON : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IEABENMOPFF; // 0x18
		::System::Boolean AODGNFHAPBL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHLFHPPON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FBGHLFHPPON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBGHLFHPPON*))((::PBYTE)hIl2Cpp + FBGHLFHPPON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FBGHLFHPPON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBGHLFHPPON*))((::PBYTE)hIl2Cpp + FBGHLFHPPON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

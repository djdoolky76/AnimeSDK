#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLOPOIKJHBO_CLAFAKHIBPI_OFFSET UNITYSDK_OFFSET(0x15D69340)
#define HLOPOIKJHBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D69650)
#define HLOPOIKJHBO_MLCFAILEHMF_OFFSET UNITYSDK_OFFSET(0x15D69600)
#define HLOPOIKJHBO_NCKOFEKBHFE_OFFSET UNITYSDK_OFFSET(0x15D69520)
#define HLOPOIKJHBO_OOPFGPMAGLK_OFFSET UNITYSDK_OFFSET(0x15D695B0)

inline static constexpr unsigned int HLOPOIKJHBO_TypeDefinitionIndex = 54420;

	class HLOPOIKJHBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::FixPoint>* NJJLNIMFPBD; // 0x10
		::RPG::GameCore::FixPoint HKOJCEMPDGE; // 0x18
		::RPG::GameCore::FixPoint NJCODFBDLDD; // 0x20
		::System::Int32 DPLMENILLLL; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AMEPBNONNCL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOPOIKJHBO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint CLAFAKHIBPI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AttackDamageType a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOPOIKJHBO_CLAFAKHIBPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOPFGPMAGLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOPOIKJHBO_OOPFGPMAGLK_OFFSET))(this);
		}

		::System::Void MLCFAILEHMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOPOIKJHBO_MLCFAILEHMF_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NCKOFEKBHFE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HLOPOIKJHBO_NCKOFEKBHFE_OFFSET))(this, a1, a2);
		}

	};

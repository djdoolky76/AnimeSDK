#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Random; }

#define DEEJKBIMHAA_AAMJALGCCJK_OFFSET UNITYSDK_OFFSET(0xE506460)
#define DEEJKBIMHAA_BHIFOEKCEDM_OFFSET UNITYSDK_OFFSET(0xE5063E0)
#define DEEJKBIMHAA_CELJGLNDOHA_OFFSET UNITYSDK_OFFSET(0xE506840)
#define DEEJKBIMHAA_CTOR_OFFSET UNITYSDK_OFFSET(0xE5060D0)
#define DEEJKBIMHAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE506110)
#define DEEJKBIMHAA_EMHIPLMKHOL_OFFSET UNITYSDK_OFFSET(0xE5065A0)
#define DEEJKBIMHAA_GEGPHPGIAMI_OFFSET UNITYSDK_OFFSET(0xE506360)
#define DEEJKBIMHAA_GET_SEED_OFFSET UNITYSDK_OFFSET(0xE506820)
#define DEEJKBIMHAA_JILMGOOCIGN_OFFSET UNITYSDK_OFFSET(0xE5066F0)
#define DEEJKBIMHAA_MDFJMMIBNEJ_OFFSET UNITYSDK_OFFSET(0xE506160)
#define DEEJKBIMHAA_SET_SEED_OFFSET UNITYSDK_OFFSET(0xE506830)

inline static constexpr unsigned int DEEJKBIMHAA_TypeDefinitionIndex = 56182;

	class DEEJKBIMHAA : public ::System::Object
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x10
		::System::Int32 _Seed_k__BackingField; // 0x18
		::System::Int32 BKBMBPLKJEI; // 0x1C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MDFJMMIBNEJ()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_MDFJMMIBNEJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint BHIFOEKCEDM(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_BHIFOEKCEDM_OFFSET))(this, a1, a2);
		}

		::System::Int32 AAMJALGCCJK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_AAMJALGCCJK_OFFSET))(this, a1);
		}

		::System::Int32 EMHIPLMKHOL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_EMHIPLMKHOL_OFFSET))(this, a1, a2);
		}

		::System::Int32 JILMGOOCIGN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_JILMGOOCIGN_OFFSET))(this);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_GET_SEED_OFFSET))(this);
		}

		::System::Void set_Seed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_SET_SEED_OFFSET))(this, a1);
		}

		::System::Int32 CELJGLNDOHA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_CELJGLNDOHA_OFFSET))(this);
		}

		::System::Void GEGPHPGIAMI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEEJKBIMHAA_GEGPHPGIAMI_OFFSET))(this, a1);
		}

	};

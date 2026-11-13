#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Random; }

#define DEEJKBIMHAA_AAMJALGCCJK_OFFSET UNITYSDK_OFFSET(0x17765430)
#define DEEJKBIMHAA_BHIFOEKCEDM_OFFSET UNITYSDK_OFFSET(0x177653B0)
#define DEEJKBIMHAA_CELJGLNDOHA_OFFSET UNITYSDK_OFFSET(0x17765810)
#define DEEJKBIMHAA_CTOR_OFFSET UNITYSDK_OFFSET(0x177650A0)
#define DEEJKBIMHAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177650E0)
#define DEEJKBIMHAA_EMHIPLMKHOL_OFFSET UNITYSDK_OFFSET(0x17765570)
#define DEEJKBIMHAA_GEGPHPGIAMI_OFFSET UNITYSDK_OFFSET(0x17765330)
#define DEEJKBIMHAA_GET_SEED_OFFSET UNITYSDK_OFFSET(0x177657F0)
#define DEEJKBIMHAA_JILMGOOCIGN_OFFSET UNITYSDK_OFFSET(0x177656C0)
#define DEEJKBIMHAA_MDFJMMIBNEJ_OFFSET UNITYSDK_OFFSET(0x17765130)
#define DEEJKBIMHAA_SET_SEED_OFFSET UNITYSDK_OFFSET(0x17765800)

inline static constexpr unsigned int DEEJKBIMHAA_TypeDefinitionIndex = 57394;

	class DEEJKBIMHAA : public ::System::Object
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x10
		::System::Int32 BKBMBPLKJEI; // 0x18
		::System::Int32 _Seed_k__BackingField; // 0x1C
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

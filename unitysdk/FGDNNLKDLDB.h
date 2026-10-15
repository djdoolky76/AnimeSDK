#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/System/Object.h"
class CJECJOMDHKG;
namespace RPG::Client::PetMarble { class PetMarblePVEMatchContext; }
namespace RPG::Client::Promises { class Promise; }

#define FGDNNLKDLDB_ABFJJPIOCKF_OFFSET UNITYSDK_OFFSET(0x1574CEE0)
#define FGDNNLKDLDB_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1574C790)
#define FGDNNLKDLDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1574CF70)
#define FGDNNLKDLDB_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0x1574CD50)
#define FGDNNLKDLDB_HLCFJJBKGEM_OFFSET UNITYSDK_OFFSET(0x1574CEA0)
#define FGDNNLKDLDB_KGDCMHAJKHH_OFFSET UNITYSDK_OFFSET(0x1574CF20)
#define FGDNNLKDLDB_NHMNHBPKMGM_OFFSET UNITYSDK_OFFSET(0x1574C9F0)
#define FGDNNLKDLDB_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x1574CC80)
#define FGDNNLKDLDB_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1574C740)

inline static constexpr unsigned int FGDNNLKDLDB_TypeDefinitionIndex = 74712;

	class FGDNNLKDLDB : public ::System::Object
	{
	public:
		::RPG::Client::PetMarble::PetMarblePVEMatchContext* EEFMDEHLLFI; // 0x10
		::CJECJOMDHKG* CFKHNPGEAJA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_CTOR_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleMatchModeType OPGLAKFNMLD()
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_OPGLAKFNMLD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CLJEBKODGHK(::CJECJOMDHKG* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::CJECJOMDHKG*))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* NKNNIDKJKOJ()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_NKNNIDKJKOJ_OFFSET))(this);
		}

		::System::Void GMHFMPLLPDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_GMHFMPLLPDL_OFFSET))(this);
		}

		::System::Void HLCFJJBKGEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_HLCFJJBKGEM_OFFSET))(this);
		}

		::System::Void ABFJJPIOCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_ABFJJPIOCKF_OFFSET))(this);
		}

		::System::Void KGDCMHAJKHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_KGDCMHAJKHH_OFFSET))(this);
		}

		::System::UInt32 NHMNHBPKMGM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDNNLKDLDB_NHMNHBPKMGM_OFFSET))(this);
		}

	};

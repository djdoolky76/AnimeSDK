#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class DBMMJLEBNBC;
class GAHENGLADAH;
class LFGIBPHFIMF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define NKAGIILANBC_ADIKAEMJOJK_OFFSET UNITYSDK_OFFSET(0xBC26E50)
#define NKAGIILANBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC27410)
#define NKAGIILANBC_DBECAGKIBPJ_OFFSET UNITYSDK_OFFSET(0xBC27030)
#define NKAGIILANBC_HDCCPLOFFKM_OFFSET UNITYSDK_OFFSET(0xBC27400)
#define NKAGIILANBC_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xBC26E00)

inline static constexpr unsigned int NKAGIILANBC_TypeDefinitionIndex = 53747;

	class NKAGIILANBC : public ::GJPFGOGOLBI
	{
	public:
		::LFGIBPHFIMF* BPOEEEDGCCJ; // 0x18
		::RPG::GameCore::GameEntity* GGNHCMFOMBA; // 0x20
		::GAHENGLADAH* HCCOJKINEHH; // 0x28
		::DBMMJLEBNBC* JKDKDLIBEOC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAGIILANBC_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAGIILANBC_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DBECAGKIBPJ(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAttachTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + NKAGIILANBC_DBECAGKIBPJ_OFFSET))(this, a1, a2);
		}

		::System::Void ADIKAEMJOJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAGIILANBC_ADIKAEMJOJK_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HDCCPLOFFKM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAGIILANBC_HDCCPLOFFKM_OFFSET))(this);
		}

	};

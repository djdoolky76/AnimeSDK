#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class DBMMJLEBNBC;
class GAHENGLADAH;
class LFGIBPHFIMF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define NKAGIILANBC_ADIKAEMJOJK_OFFSET UNITYSDK_OFFSET(0xC510B70)
#define NKAGIILANBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC511140)
#define NKAGIILANBC_DBECAGKIBPJ_OFFSET UNITYSDK_OFFSET(0xC510D60)
#define NKAGIILANBC_HDCCPLOFFKM_OFFSET UNITYSDK_OFFSET(0xC511130)
#define NKAGIILANBC_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC510B20)

inline static constexpr unsigned int NKAGIILANBC_TypeDefinitionIndex = 54911;

	class NKAGIILANBC : public ::GJPFGOGOLBI
	{
	public:
		::LFGIBPHFIMF* BPOEEEDGCCJ; // 0x18
		::GAHENGLADAH* HCCOJKINEHH; // 0x20
		::RPG::GameCore::GameEntity* GGNHCMFOMBA; // 0x28
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

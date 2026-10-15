#pragma once
#include "unitysdk/unitysdk.h"
class NDAFKPJBGCE;
namespace RPG::GameCore { class LevelTurnBegin; }
namespace RPG::GameCore { class LevelTurnStateChanged; }
namespace System { class Object; }

#define NICKEDCDPBF_ACNFHKBCMKL_OFFSET UNITYSDK_OFFSET(0xBBD9240)
#define NICKEDCDPBF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBD96C0)
#define NICKEDCDPBF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBD97B0)
#define NICKEDCDPBF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD98A0)
#define NICKEDCDPBF_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBBD94C0)
#define NICKEDCDPBF_EIPBGHMCJFH_OFFSET UNITYSDK_OFFSET(0xBBD9120)
#define NICKEDCDPBF_GKJCAMIODBM_OFFSET UNITYSDK_OFFSET(0xBBD95A0)
#define NICKEDCDPBF_JLHGOJHAEPE_OFFSET UNITYSDK_OFFSET(0xBBD9660)
#define NICKEDCDPBF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBBD9160)
#define NICKEDCDPBF_MABDDEIGDMG_OFFSET UNITYSDK_OFFSET(0xBBD9530)
#define NICKEDCDPBF_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xBBD8D10)
#define NICKEDCDPBF_MGKFJBMABIL_OFFSET UNITYSDK_OFFSET(0xBBD90E0)
#define NICKEDCDPBF_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xBBD8F00)

inline static constexpr unsigned int NICKEDCDPBF_TypeDefinitionIndex = 61037;

	class NICKEDCDPBF
	{
	public:
		::NDAFKPJBGCE* NCABPAPLJCI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_CTOR_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_MEJPCPBPMNM_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void MGKFJBMABIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_MGKFJBMABIL_OFFSET))(this);
		}

		::System::Void EIPBGHMCJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_EIPBGHMCJFH_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NICKEDCDPBF_LCJLLGBJENF_OFFSET))(this, a1);
		}

		::System::Void ACNFHKBCMKL(::RPG::GameCore::LevelTurnBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnBegin*))((::PBYTE)hIl2Cpp + NICKEDCDPBF_ACNFHKBCMKL_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NICKEDCDPBF_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void MABDDEIGDMG(::RPG::GameCore::LevelTurnStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnStateChanged*))((::PBYTE)hIl2Cpp + NICKEDCDPBF_MABDDEIGDMG_OFFSET))(this, a1);
		}

		::System::Void GKJCAMIODBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NICKEDCDPBF_GKJCAMIODBM_OFFSET))(this, a1);
		}

		::System::Void JLHGOJHAEPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NICKEDCDPBF_JLHGOJHAEPE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICKEDCDPBF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

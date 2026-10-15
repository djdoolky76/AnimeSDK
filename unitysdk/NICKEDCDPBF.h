#pragma once
#include "unitysdk/unitysdk.h"
class NDAFKPJBGCE;
namespace RPG::GameCore { class LevelTurnBegin; }
namespace RPG::GameCore { class LevelTurnStateChanged; }
namespace System { class Object; }

#define NICKEDCDPBF_ACNFHKBCMKL_OFFSET UNITYSDK_OFFSET(0xBBDF500)
#define NICKEDCDPBF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBDF980)
#define NICKEDCDPBF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBDFA70)
#define NICKEDCDPBF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDFB60)
#define NICKEDCDPBF_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBBDF780)
#define NICKEDCDPBF_EIPBGHMCJFH_OFFSET UNITYSDK_OFFSET(0xBBDF3E0)
#define NICKEDCDPBF_GKJCAMIODBM_OFFSET UNITYSDK_OFFSET(0xBBDF860)
#define NICKEDCDPBF_JLHGOJHAEPE_OFFSET UNITYSDK_OFFSET(0xBBDF920)
#define NICKEDCDPBF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBBDF420)
#define NICKEDCDPBF_MABDDEIGDMG_OFFSET UNITYSDK_OFFSET(0xBBDF7F0)
#define NICKEDCDPBF_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xBBDEFD0)
#define NICKEDCDPBF_MGKFJBMABIL_OFFSET UNITYSDK_OFFSET(0xBBDF3A0)
#define NICKEDCDPBF_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xBBDF1C0)

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

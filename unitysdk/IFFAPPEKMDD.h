#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class MEJNENLIDDN;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace System { class Object; }

#define IFFAPPEKMDD_ABKLHGFANFF_OFFSET UNITYSDK_OFFSET(0x15F110E0)
#define IFFAPPEKMDD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F111A0)
#define IFFAPPEKMDD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15F11270)
#define IFFAPPEKMDD_BDPPJGIGBHP_OFFSET UNITYSDK_OFFSET(0x15F11090)
#define IFFAPPEKMDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15F11310)
#define IFFAPPEKMDD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15F10EA0)
#define IFFAPPEKMDD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15F10F00)
#define IFFAPPEKMDD_GJCEJCMHJBN_OFFSET UNITYSDK_OFFSET(0x15F10F50)

	class IFFAPPEKMDD : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleAvatarCustomData* JAILPDGOHJB; // 0x60
		::MEJNENLIDDN* OCODKEKPMHC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void BDPPJGIGBHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_BDPPJGIGBHP_OFFSET))(this);
		}

		::System::Void GJCEJCMHJBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_GJCEJCMHJBN_OFFSET))(this);
		}

		::System::Void ABKLHGFANFF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_ABKLHGFANFF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

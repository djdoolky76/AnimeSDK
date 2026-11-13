#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class MEJNENLIDDN;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace System { class Object; }

#define IFFAPPEKMDD_ABKLHGFANFF_OFFSET UNITYSDK_OFFSET(0x1BC0D050)
#define IFFAPPEKMDD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC0D110)
#define IFFAPPEKMDD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC0D1E0)
#define IFFAPPEKMDD_BDPPJGIGBHP_OFFSET UNITYSDK_OFFSET(0x1BC0D000)
#define IFFAPPEKMDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0D280)
#define IFFAPPEKMDD_GJCEJCMHJBN_OFFSET UNITYSDK_OFFSET(0x1BC0CEC0)
#define IFFAPPEKMDD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BC0CE10)
#define IFFAPPEKMDD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1BC0CE70)

inline static constexpr unsigned int IFFAPPEKMDD_TypeDefinitionIndex = 73436;

	class IFFAPPEKMDD : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleAvatarCustomData* JAILPDGOHJB; // 0x60
		::MEJNENLIDDN* OCODKEKPMHC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IFFAPPEKMDD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPPEKMDD__SETUPVIEW_OFFSET))(this);
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

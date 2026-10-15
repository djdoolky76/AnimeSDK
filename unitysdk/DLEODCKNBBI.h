#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHNMIKHFKAG.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }
namespace System { class Nullable; }

#define DLEODCKNBBI_BGDGALFBEJH_OFFSET UNITYSDK_OFFSET(0xF89B560)
#define DLEODCKNBBI_CTOR_OFFSET UNITYSDK_OFFSET(0xF89B380)
#define DLEODCKNBBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF89B410)
#define DLEODCKNBBI_ENKDLBCOFEF_OFFSET UNITYSDK_OFFSET(0xF89BB80)
#define DLEODCKNBBI_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0xF89BB40)
#define DLEODCKNBBI_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF89BB20)
#define DLEODCKNBBI_GET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xF89BB00)
#define DLEODCKNBBI_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0xF89B390)
#define DLEODCKNBBI_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0xF89B940)
#define DLEODCKNBBI_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xF89B5D0)
#define DLEODCKNBBI_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0xF89B460)
#define DLEODCKNBBI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xF89B690)
#define DLEODCKNBBI_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0xF89B780)
#define DLEODCKNBBI_PDFJGKLLJMD_OFFSET UNITYSDK_OFFSET(0xF89BB60)
#define DLEODCKNBBI_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF89BB30)
#define DLEODCKNBBI_SET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xF89BB10)

	class DLEODCKNBBI : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* IGHAHBNLIJA; // 0x10
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x18
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x20
		::LHNMIKHFKAG LIHGCCNODOP; // 0x28
		::LHNMIKHFKAG IPBKJBNIHHA; // 0x34
		::System::Boolean _IsRecoverying_k__BackingField; // 0x40
		::System::Boolean GGDBEOFLEPM; // 0x41
		::System::Boolean _IsFinish_k__BackingField; // 0x42
		::System::Boolean BJHEFAKMDAI; // 0x43
		::LHNMIKHFKAG DNPHGOELBMH; // 0x44
		::LHNMIKHFKAG EJNMGLJJEOO; // 0x50
		::LHNMIKHFKAG ACBGOJKPEEG; // 0x5C
		::System::Single GDAHOGKBPCP; // 0x68
		::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*))((::PBYTE)hIl2Cpp + DLEODCKNBBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_DISPOSE_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::LHNMIKHFKAG a1, ::System::Nullable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LHNMIKHFKAG, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEODCKNBBI_JKHOBGMGIHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGDGALFBEJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_BGDGALFBEJH_OFFSET))(this);
		}

		::LHNMIKHFKAG KFGJEKJHIMB(::System::Single a1)
		{
			return ((::LHNMIKHFKAG(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLEODCKNBBI_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void GFMPFDFLMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_GFMPFDFLMCD_OFFSET))(this);
		}

		::LHNMIKHFKAG JAMHIBAPEBG(::System::Single a1)
		{
			return ((::LHNMIKHFKAG(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLEODCKNBBI_JAMHIBAPEBG_OFFSET))(this, a1);
		}

		::LHNMIKHFKAG MAOFJHICOHP(::System::Single a1)
		{
			return ((::LHNMIKHFKAG(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLEODCKNBBI_MAOFJHICOHP_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_JEJLPHKIHLB_OFFSET))(this);
		}

		::System::Boolean get_IsRecoverying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_GET_ISRECOVERYING_OFFSET))(this);
		}

		::System::Void set_IsRecoverying(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEODCKNBBI_SET_ISRECOVERYING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEODCKNBBI_SET_ISFINISH_OFFSET))(this, a1);
		}

		::LHNMIKHFKAG FENOMPCEFII()
		{
			return ((::LHNMIKHFKAG(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_FENOMPCEFII_OFFSET))(this);
		}

		::LHNMIKHFKAG PDFJGKLLJMD()
		{
			return ((::LHNMIKHFKAG(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_PDFJGKLLJMD_OFFSET))(this);
		}

		::System::Boolean ENKDLBCOFEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_ENKDLBCOFEF_OFFSET))(this);
		}

	};

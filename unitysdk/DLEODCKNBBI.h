#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHNMIKHFKAG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }

#define DLEODCKNBBI_BGDGALFBEJH_OFFSET UNITYSDK_OFFSET(0xF895BB0)
#define DLEODCKNBBI_CTOR_OFFSET UNITYSDK_OFFSET(0xF8959C0)
#define DLEODCKNBBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF895A50)
#define DLEODCKNBBI_ENKDLBCOFEF_OFFSET UNITYSDK_OFFSET(0xF8961D0)
#define DLEODCKNBBI_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0xF896190)
#define DLEODCKNBBI_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF896170)
#define DLEODCKNBBI_GET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xF896150)
#define DLEODCKNBBI_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0xF8959D0)
#define DLEODCKNBBI_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0xF895F90)
#define DLEODCKNBBI_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xF895C20)
#define DLEODCKNBBI_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0xF895AA0)
#define DLEODCKNBBI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xF895CE0)
#define DLEODCKNBBI_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0xF895DD0)
#define DLEODCKNBBI_PDFJGKLLJMD_OFFSET UNITYSDK_OFFSET(0xF8961B0)
#define DLEODCKNBBI_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF896180)
#define DLEODCKNBBI_SET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xF896160)

inline static constexpr unsigned int DLEODCKNBBI_TypeDefinitionIndex = 69538;

	class DLEODCKNBBI : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x10
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x18
		::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* IGHAHBNLIJA; // 0x20
		::LHNMIKHFKAG ACBGOJKPEEG; // 0x28
		::LHNMIKHFKAG EJNMGLJJEOO; // 0x34
		::System::Single GDAHOGKBPCP; // 0x40
		::LHNMIKHFKAG IPBKJBNIHHA; // 0x44
		::LHNMIKHFKAG LIHGCCNODOP; // 0x50
		::System::Boolean _IsFinish_k__BackingField; // 0x5C
		::System::Boolean _IsRecoverying_k__BackingField; // 0x5D
		::System::Boolean GGDBEOFLEPM; // 0x5E
		::System::Boolean BJHEFAKMDAI; // 0x5F
		::LHNMIKHFKAG DNPHGOELBMH; // 0x60
		::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*))((::PBYTE)hIl2Cpp + DLEODCKNBBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEODCKNBBI_DISPOSE_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::LHNMIKHFKAG a1, ::System::Nullable_1<::LHNMIKHFKAG> a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LHNMIKHFKAG, ::System::Nullable_1<::LHNMIKHFKAG>, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEODCKNBBI_JKHOBGMGIHJ_OFFSET))(this, a1, a2, a3);
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

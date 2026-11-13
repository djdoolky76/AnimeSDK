#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFloatChangeParam; }

#define JAOHEHBCBGN_BEMELOPJLIK_OFFSET UNITYSDK_OFFSET(0x19A5E5B0)
#define JAOHEHBCBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x19A5DE10)
#define JAOHEHBCBGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A5DEF0)
#define JAOHEHBCBGN_EJOOBDPABHP_OFFSET UNITYSDK_OFFSET(0x19A5E080)
#define JAOHEHBCBGN_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x19A5E6F0)
#define JAOHEHBCBGN_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x19A5E680)
#define JAOHEHBCBGN_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x19A5E750)
#define JAOHEHBCBGN_GET_STATE_OFFSET UNITYSDK_OFFSET(0x19A5E660)
#define JAOHEHBCBGN_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x19A5E710)
#define JAOHEHBCBGN_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x19A5E730)
#define JAOHEHBCBGN_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0x19A5DE70)
#define JAOHEHBCBGN_GGHLLKBOMGL_OFFSET UNITYSDK_OFFSET(0x19A5E4A0)
#define JAOHEHBCBGN_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0x19A5E3A0)
#define JAOHEHBCBGN_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x19A5E500)
#define JAOHEHBCBGN_JGEILMMIEOA_OFFSET UNITYSDK_OFFSET(0x19A5E690)
#define JAOHEHBCBGN_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0x19A5DF40)
#define JAOHEHBCBGN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x19A5E0F0)
#define JAOHEHBCBGN_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0x19A5E2A0)
#define JAOHEHBCBGN_PDFJGKLLJMD_OFFSET UNITYSDK_OFFSET(0x19A5E700)
#define JAOHEHBCBGN_PEEKFCFKHPC_OFFSET UNITYSDK_OFFSET(0x19A5E060)
#define JAOHEHBCBGN_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x19A5E760)
#define JAOHEHBCBGN_SET_STATE_OFFSET UNITYSDK_OFFSET(0x19A5E670)
#define JAOHEHBCBGN_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x19A5E720)
#define JAOHEHBCBGN_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x19A5E740)

inline static constexpr unsigned int JAOHEHBCBGN_TypeDefinitionIndex = 71499;

	class JAOHEHBCBGN : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x10
		::RPG::GameCore::VCameraFloatChangeParam* IGHAHBNLIJA; // 0x18
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x20
		::System::Single ACBGOJKPEEG; // 0x28
		::System::Single _TransitInTime_k__BackingField; // 0x2C
		::System::Single _TransitOutTime_k__BackingField; // 0x30
		::System::Single _KeepDuration_k__BackingField; // 0x34
		::System::Single GDFKMHHCGMJ; // 0x38
		::System::Single EJNMGLJJEOO; // 0x3C
		::System::Single GDAHOGKBPCP; // 0x40
		::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x44
		::System::Single DNPHGOELBMH; // 0x48
		::System::Void _ctor(::RPG::GameCore::VCameraFloatChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFloatChangeParam*))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_DISPOSE_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::System::Single a1, ::System::Nullable_1<::System::Single> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_JKHOBGMGIHJ_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void BEMELOPJLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_BEMELOPJLIK_OFFSET))(this);
		}

		::System::Void EJOOBDPABHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_EJOOBDPABHP_OFFSET))(this, a1);
		}

		::System::Void GFMPFDFLMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GFMPFDFLMCD_OFFSET))(this);
		}

		::System::Void JAMHIBAPEBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_JAMHIBAPEBG_OFFSET))(this, a1);
		}

		::System::Void MAOFJHICOHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_MAOFJHICOHP_OFFSET))(this, a1);
		}

		::System::Void GGHLLKBOMGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GGHLLKBOMGL_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_JEJLPHKIHLB_OFFSET))(this);
		}

		::RPG::Client::VCameraChangeDataState get_State()
		{
			return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Boolean JGEILMMIEOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_JGEILMMIEOA_OFFSET))(this);
		}

		::System::Single FENOMPCEFII()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_FENOMPCEFII_OFFSET))(this);
		}

		::System::Single PDFJGKLLJMD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_PDFJGKLLJMD_OFFSET))(this);
		}

		::System::Single get_TransitInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GET_TRANSITINTIME_OFFSET))(this);
		}

		::System::Void set_TransitInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_SET_TRANSITINTIME_OFFSET))(this, a1);
		}

		::System::Single get_TransitOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GET_TRANSITOUTTIME_OFFSET))(this);
		}

		::System::Void set_TransitOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_SET_TRANSITOUTTIME_OFFSET))(this, a1);
		}

		::System::Single get_KeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_GET_KEEPDURATION_OFFSET))(this);
		}

		::System::Void set_KeepDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_SET_KEEPDURATION_OFFSET))(this, a1);
		}

		::System::Boolean PEEKFCFKHPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOHEHBCBGN_PEEKFCFKHPC_OFFSET))(this);
		}

	};

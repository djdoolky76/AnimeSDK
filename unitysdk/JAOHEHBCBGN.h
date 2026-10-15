#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFloatChangeParam; }

#define JAOHEHBCBGN_BEMELOPJLIK_OFFSET UNITYSDK_OFFSET(0x1654E6E0)
#define JAOHEHBCBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1654DF50)
#define JAOHEHBCBGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1654E020)
#define JAOHEHBCBGN_EJOOBDPABHP_OFFSET UNITYSDK_OFFSET(0x1654E1B0)
#define JAOHEHBCBGN_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x1654E820)
#define JAOHEHBCBGN_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1654E7B0)
#define JAOHEHBCBGN_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x1654E880)
#define JAOHEHBCBGN_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1654E790)
#define JAOHEHBCBGN_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x1654E840)
#define JAOHEHBCBGN_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x1654E860)
#define JAOHEHBCBGN_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0x1654DFA0)
#define JAOHEHBCBGN_GGHLLKBOMGL_OFFSET UNITYSDK_OFFSET(0x1654E5D0)
#define JAOHEHBCBGN_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0x1654E4D0)
#define JAOHEHBCBGN_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x1654E630)
#define JAOHEHBCBGN_JGEILMMIEOA_OFFSET UNITYSDK_OFFSET(0x1654E7C0)
#define JAOHEHBCBGN_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0x1654E070)
#define JAOHEHBCBGN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1654E220)
#define JAOHEHBCBGN_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0x1654E3D0)
#define JAOHEHBCBGN_PDFJGKLLJMD_OFFSET UNITYSDK_OFFSET(0x1654E830)
#define JAOHEHBCBGN_PEEKFCFKHPC_OFFSET UNITYSDK_OFFSET(0x1654E190)
#define JAOHEHBCBGN_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x1654E890)
#define JAOHEHBCBGN_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1654E7A0)
#define JAOHEHBCBGN_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x1654E850)
#define JAOHEHBCBGN_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x1654E870)

inline static constexpr unsigned int JAOHEHBCBGN_TypeDefinitionIndex = 69542;

	class JAOHEHBCBGN : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x10
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x18
		::RPG::GameCore::VCameraFloatChangeParam* IGHAHBNLIJA; // 0x20
		::System::Single ACBGOJKPEEG; // 0x28
		::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x2C
		::System::Single _KeepDuration_k__BackingField; // 0x30
		::System::Single _TransitInTime_k__BackingField; // 0x34
		::System::Single DNPHGOELBMH; // 0x38
		::System::Single EJNMGLJJEOO; // 0x3C
		::System::Single GDFKMHHCGMJ; // 0x40
		::System::Single _TransitOutTime_k__BackingField; // 0x44
		::System::Single GDAHOGKBPCP; // 0x48
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

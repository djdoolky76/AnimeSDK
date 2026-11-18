#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ALIAEDMOKLD.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"

class CFHOEGBMPKN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define FBPACJLAKEJ_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x116A3AA0)
#define FBPACJLAKEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116A3910)
#define FBPACJLAKEJ_FLBMABOKKPH_OFFSET UNITYSDK_OFFSET(0x116A3B60)
#define FBPACJLAKEJ_LHFCLDLINFE_OFFSET UNITYSDK_OFFSET(0x116A3B40)
#define FBPACJLAKEJ_MAKFEEODOPE_OFFSET UNITYSDK_OFFSET(0x116A3DD0)
#define FBPACJLAKEJ_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x116A3DE0)
#define FBPACJLAKEJ_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x116A3A50)
#define FBPACJLAKEJ_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x116A3DC0)
#define FBPACJLAKEJ_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x116A3B50)
#define FBPACJLAKEJ_PJLMJHJAHCB_OFFSET UNITYSDK_OFFSET(0x116A3B30)
#define FBPACJLAKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116A3620)

inline static constexpr unsigned int FBPACJLAKEJ_TypeDefinitionIndex = 74831;

class FBPACJLAKEJ : public ::System::Object
{
public:
	::System::String* IPJHFCPGNLC; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ADNPFJMKDNM; // 0x18
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x20
	::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* IDMIMLNBCAH; // 0x28
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x30
	::System::Int32 _MDJDPOFDJKH_k__BackingField; // 0x34
	::System::Int32 _GEPLLHPOMIG_k__BackingField; // 0x38
	::System::UInt32 PABNGBCCCML; // 0x3C

	::System::Void _ctor(::ALIAEDMOKLD LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALIAEDMOKLD))((::PBYTE)hIl2Cpp + FBPACJLAKEJ__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 MJIPDLBCHNH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_MJIPDLBCHNH_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::ALIAEDMOKLD LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALIAEDMOKLD))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_APPCLMIANHI_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void PJLMJHJAHCB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_PJLMJHJAHCB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LHFCLDLINFE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_LHFCLDLINFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::SceneConfigRuntimeDataArea FLBMABOKKPH()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_FLBMABOKKPH_OFFSET))(this);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_NLBOALNBODH_OFFSET))(this);
	}

	::System::Int32 MAKFEEODOPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_MAKFEEODOPE_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPACJLAKEJ_MDLLGIMAGCP_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE_FDJALILAEBD;
class IINELABCBHO;
namespace UnityEngine::Events { class UnityAction; }

#define AIKGHHJKNCE_EJLGMPAMPGB_ENHKJDDEGKM_OFFSET UNITYSDK_OFFSET(0x1647DDB0)
#define AIKGHHJKNCE_EJLGMPAMPGB_FBDCNBCAPON_OFFSET UNITYSDK_OFFSET(0x1647DC40)
#define AIKGHHJKNCE_EJLGMPAMPGB_MLDNAOCFNDO_OFFSET UNITYSDK_OFFSET(0x1647DC70)
#define AIKGHHJKNCE_EJLGMPAMPGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1647DC30)

inline static constexpr unsigned int AIKGHHJKNCE_EJLGMPAMPGB_TypeDefinitionIndex = 58239;

class AIKGHHJKNCE_EJLGMPAMPGB : public ::System::Object
{
public:
	::AIKGHHJKNCE_FDJALILAEBD* FGBNBFHOKAA; // 0x10
	::UnityEngine::Events::UnityAction* NPFIONPDFED; // 0x18
	::IINELABCBHO* CKADKPJFAHM; // 0x20
	::System::UInt32 ECCLDLFOKMF; // 0x28
	::System::Int32 PNPGNCBDHEE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EJLGMPAMPGB__CTOR_OFFSET))(this);
	}

	::System::Void FBDCNBCAPON(::System::Boolean AEBGBPDHAAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EJLGMPAMPGB_FBDCNBCAPON_OFFSET))(this, AEBGBPDHAAJ);
	}

	::System::Void MLDNAOCFNDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EJLGMPAMPGB_MLDNAOCFNDO_OFFSET))(this);
	}

	::System::Void ENHKJDDEGKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EJLGMPAMPGB_ENHKJDDEGKM_OFFSET))(this);
	}
};

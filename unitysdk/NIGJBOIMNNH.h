#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

#define NIGJBOIMNNH_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0xE75DFA0)
#define NIGJBOIMNNH_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0xE75DA40)
#define NIGJBOIMNNH_CLNKHGCCCME_OFFSET UNITYSDK_OFFSET(0xE75DBB0)
#define NIGJBOIMNNH_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xE75E030)
#define NIGJBOIMNNH_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE75DA00)
#define NIGJBOIMNNH_FIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0xE75D980)
#define NIGJBOIMNNH_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE75D940)
#define NIGJBOIMNNH_HACNOPKMIAP_OFFSET UNITYSDK_OFFSET(0xE75DC40)
#define NIGJBOIMNNH_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0xE75DF10)
#define NIGJBOIMNNH_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0xE75D8C0)
#define NIGJBOIMNNH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE75D880)
#define NIGJBOIMNNH_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0xE75DD60)
#define NIGJBOIMNNH_MFHAPEICPKL_OFFSET UNITYSDK_OFFSET(0xE75DCD0)
#define NIGJBOIMNNH_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0xE75DDF0)
#define NIGJBOIMNNH_NJCCGKBKICE_OFFSET UNITYSDK_OFFSET(0xE75DE80)
#define NIGJBOIMNNH_NNNJECDELMB_OFFSET UNITYSDK_OFFSET(0xE75DB20)
#define NIGJBOIMNNH_OVERRIDEFLAG_OFFSET UNITYSDK_OFFSET(0xE75DA80)
#define NIGJBOIMNNH_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE75D900)
#define NIGJBOIMNNH_UPDATE_OFFSET UNITYSDK_OFFSET(0xE75D840)
#define NIGJBOIMNNH_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE75D9C0)
#define NIGJBOIMNNH__CTOR_OFFSET UNITYSDK_OFFSET(0xE75DAD0)

inline static constexpr unsigned int NIGJBOIMNNH_TypeDefinitionIndex = 86802;

class NIGJBOIMNNH : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_LATEUPDATE_OFFSET))(this);
	}

	::System::Void LateUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_LATEUPDATEAGAIN_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_FIXEDUPDATEAGAIN_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void AnimIKPostUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_ANIMIKPOSTUPDATE_OFFSET))(this);
	}

	::System::Void OverrideFlag(::System::UInt32& IGKKDOHGMGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_OVERRIDEFLAG_OFFSET))(this, IGKKDOHGMGL);
	}

	::System::Void NNNJECDELMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_NNNJECDELMB_OFFSET))(this);
	}

	::System::Void CLNKHGCCCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_CLNKHGCCCME_OFFSET))(this);
	}

	::System::Void HACNOPKMIAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_HACNOPKMIAP_OFFSET))(this);
	}

	::System::Void MFHAPEICPKL(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_MFHAPEICPKL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_LDCJONOBGEB_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void NJCCGKBKICE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_NJCCGKBKICE_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_INEGOEGIOKM_OFFSET))(this);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_AHDLBAAJCCC_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJBOIMNNH_CMFOMGGDPPA_OFFSET))(this);
	}
};

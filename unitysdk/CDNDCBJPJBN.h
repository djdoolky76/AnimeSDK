#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHMCDMMOJK.h"
#include "unitysdk/DDDAHJHLPJM.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDNDCBJPJBN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x128DCF00)
#define CDNDCBJPJBN_DPFDEJGFGLH_OFFSET UNITYSDK_OFFSET(0x128DD3F0)
#define CDNDCBJPJBN_EGMNHBBPJDE_OFFSET UNITYSDK_OFFSET(0x128DD240)
#define CDNDCBJPJBN_FCLCNLPGMCL_OFFSET UNITYSDK_OFFSET(0x128DD230)
#define CDNDCBJPJBN_GIMJLEILDPF_OFFSET UNITYSDK_OFFSET(0x128DD190)
#define CDNDCBJPJBN_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x128DD090)
#define CDNDCBJPJBN_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x128DCFA0)
#define CDNDCBJPJBN_KALLHNFLIIL_OFFSET UNITYSDK_OFFSET(0x128DD350)
#define CDNDCBJPJBN_MBOFCAJPJKA_OFFSET UNITYSDK_OFFSET(0x128DD130)
#define CDNDCBJPJBN_MDOMBGFNNOD_OFFSET UNITYSDK_OFFSET(0x128DD1A0)
#define CDNDCBJPJBN_OHGNLHNKBGG_OFFSET UNITYSDK_OFFSET(0x128DD360)
#define CDNDCBJPJBN_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x128DD040)
#define CDNDCBJPJBN__CTOR_OFFSET UNITYSDK_OFFSET(0x128DD180)

inline static constexpr unsigned int CDNDCBJPJBN_TypeDefinitionIndex = 76539;

class CDNDCBJPJBN : public ::DDDAHJHLPJM
{
public:
	::System::Collections::Generic::List_1<::CKHMCDMMOJK>* PNCJPENFEIH; // 0x38
	::DDDAHJHLPJM* IPFLKFOCOIN; // 0x40
	::System::Boolean _ABPLJBCNENE_k__BackingField; // 0x48
	::System::Boolean _PCHJFDIPNOK_k__BackingField; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Cinemachine::CinemachineVirtualCameraBase* IELDDKLOELC, ::DDDAHJHLPJM* CDIEGGCKLCP, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::DDDAHJHLPJM*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_BBOMJDBNHIC_OFFSET))(this, IELDDKLOELC, CDIEGGCKLCP, LJBPECKCCEA);
	}

	::System::Void JINCFIGEAKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_JINCFIGEAKM_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Void MBOFCAJPJKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_MBOFCAJPJKA_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_OKMEFGGMPFG_OFFSET))(this, DEBGKPLOPCG);
	}

	::System::Void GIMJLEILDPF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_GIMJLEILDPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MDOMBGFNNOD(::CKHMCDMMOJK BLLEBKEADAO)
	{
		return ((::System::Void(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_MDOMBGFNNOD_OFFSET))(this, BLLEBKEADAO);
	}

	::System::Void FCLCNLPGMCL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_FCLCNLPGMCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGMNHBBPJDE(::CKHMCDMMOJK BLLEBKEADAO)
	{
		return ((::System::Void(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_EGMNHBBPJDE_OFFSET))(this, BLLEBKEADAO);
	}

	::System::Boolean KALLHNFLIIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_KALLHNFLIIL_OFFSET))(this);
	}

	::System::Boolean OHGNLHNKBGG(::CKHMCDMMOJK BLLEBKEADAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_OHGNLHNKBGG_OFFSET))(this, BLLEBKEADAO);
	}

	::System::Boolean DPFDEJGFGLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNDCBJPJBN_DPFDEJGFGLH_OFFSET))(this);
	}
};

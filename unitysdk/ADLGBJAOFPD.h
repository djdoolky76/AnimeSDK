#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DHLCCHNLPIC;
class DNBDPIOLLHH;
class MADHNHEMBOJ;
class PNADGAFDGPL;

#define ADLGBJAOFPD_AILOCJBLOHC_OFFSET UNITYSDK_OFFSET(0x182B36A0)
#define ADLGBJAOFPD_BJBBNNEHOKP_OFFSET UNITYSDK_OFFSET(0x182B32C0)
#define ADLGBJAOFPD_CIOBEHNGGMA_OFFSET UNITYSDK_OFFSET(0x182B3790)
#define ADLGBJAOFPD_CTOR_OFFSET UNITYSDK_OFFSET(0x182B38C0)
#define ADLGBJAOFPD_DENLOJJCEHE_OFFSET UNITYSDK_OFFSET(0x182B34C0)
#define ADLGBJAOFPD_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x182B3000)
#define ADLGBJAOFPD_EJNKDDFOMOK_OFFSET UNITYSDK_OFFSET(0x182B3730)
#define ADLGBJAOFPD_GNKOKMLHCFA_OFFSET UNITYSDK_OFFSET(0x182B35D0)
#define ADLGBJAOFPD_ILMHFNPICLB_OFFSET UNITYSDK_OFFSET(0x182B3320)
#define ADLGBJAOFPD_LGGHPHPLIPN_OFFSET UNITYSDK_OFFSET(0x182B3080)
#define ADLGBJAOFPD_LJKCNPHHKGN_OFFSET UNITYSDK_OFFSET(0x182B2F40)
#define ADLGBJAOFPD_LJLJJOBDGDO_OFFSET UNITYSDK_OFFSET(0x182B2FC0)
#define ADLGBJAOFPD_MNBCJOMABHK_OFFSET UNITYSDK_OFFSET(0x182B3040)
#define ADLGBJAOFPD_MNNKJAMHCMC_OFFSET UNITYSDK_OFFSET(0x182B3870)
#define ADLGBJAOFPD_NDOANFBMLOH_OFFSET UNITYSDK_OFFSET(0x182B2EF0)
#define ADLGBJAOFPD_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x182B2CB0)
#define ADLGBJAOFPD_OMKFDBAKPEK_OFFSET UNITYSDK_OFFSET(0x182B3260)
#define ADLGBJAOFPD_PAGKBOCIIIC_OFFSET UNITYSDK_OFFSET(0x182B3820)
#define ADLGBJAOFPD_PJPIKDDPPJA_OFFSET UNITYSDK_OFFSET(0x182B3450)
#define ADLGBJAOFPD__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x182B2950)
#define ADLGBJAOFPD__ONBIND_OFFSET UNITYSDK_OFFSET(0x182B2AE0)
#define ADLGBJAOFPD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x182B2880)
#define ADLGBJAOFPD__ONTICK_OFFSET UNITYSDK_OFFSET(0x182B2D50)
#define ADLGBJAOFPD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x182B2B70)

inline static constexpr unsigned int ADLGBJAOFPD_TypeDefinitionIndex = 73195;

	class ADLGBJAOFPD : public ::FMPCODLIOLG
	{
	public:
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x60
		::DHLCCHNLPIC* GNEENKCPHNL; // 0x68
		::PNADGAFDGPL* NPAAOEPEOGH; // 0x70
		::DNBDPIOLLHH* EPJJGFNHKEM; // 0x78
		::System::Single LPGOJCCOGMI; // 0x80
		::System::Boolean HAECKDHIFMM; // 0x84
		::System::Boolean EIJLLGCIKPD; // 0x85
		::System::Boolean PBKHCBIFGON; // 0x86
		::System::Byte _padding0[0x1];
		::System::Single IKGIOLOEDEP; // 0x88
		// static const ::System::Object HGLEIKCEGBI; // 0x0
		// static const ::System::Object HPKPMOFCGFA; // 0x0
		// static const ::System::Object INFKMDKOEKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADLGBJAOFPD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADLGBJAOFPD__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LJLJJOBDGDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_LJLJJOBDGDO_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_DOEDECKEMEF_OFFSET))(this);
		}

		::System::Void MNBCJOMABHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_MNBCJOMABHK_OFFSET))(this);
		}

		::System::Void LGGHPHPLIPN(::DNBDPIOLLHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNBDPIOLLHH*))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_LGGHPHPLIPN_OFFSET))(this, a1);
		}

		::System::Void ILMHFNPICLB(::PNADGAFDGPL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNADGAFDGPL*, ::System::Single))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_ILMHFNPICLB_OFFSET))(this, a1, a2);
		}

		::System::Void PJPIKDDPPJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_PJPIKDDPPJA_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void DENLOJJCEHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_DENLOJJCEHE_OFFSET))(this, a1);
		}

		::System::Void GNKOKMLHCFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_GNKOKMLHCFA_OFFSET))(this);
		}

		::System::Void AILOCJBLOHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_AILOCJBLOHC_OFFSET))(this);
		}

		::System::Void EJNKDDFOMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_EJNKDDFOMOK_OFFSET))(this);
		}

		::UnityEngine::Vector2 CIOBEHNGGMA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_CIOBEHNGGMA_OFFSET))(this);
		}

		::System::Void LJKCNPHHKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_LJKCNPHHKGN_OFFSET))(this);
		}

		::System::Void BJBBNNEHOKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_BJBBNNEHOKP_OFFSET))(this);
		}

		::System::Boolean NDOANFBMLOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_NDOANFBMLOH_OFFSET))(this);
		}

		::System::Void OMKFDBAKPEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_OMKFDBAKPEK_OFFSET))(this, a1);
		}

		::System::Boolean PAGKBOCIIIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_PAGKBOCIIIC_OFFSET))(this);
		}

		::System::UInt32 MNNKJAMHCMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLGBJAOFPD_MNNKJAMHCMC_OFFSET))(this);
		}

	};

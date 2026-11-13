#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/KNGADCOOODI_TweenAnimState.h"
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class SmoothMask; }

#define KNGADCOOODI_CMMDKAMBJMJ_OFFSET UNITYSDK_OFFSET(0x18FA44B0)
#define KNGADCOOODI_CTOR_OFFSET UNITYSDK_OFFSET(0x18FA4F00)
#define KNGADCOOODI_DJDOMDEFOML_OFFSET UNITYSDK_OFFSET(0x18FA46F0)
#define KNGADCOOODI_DPFNKADDIJM_OFFSET UNITYSDK_OFFSET(0x18FA41D0)
#define KNGADCOOODI_EDCJFGHCCGO_OFFSET UNITYSDK_OFFSET(0x18FA4690)
#define KNGADCOOODI_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x18FA4070)
#define KNGADCOOODI_HADKHLGBFLK_OFFSET UNITYSDK_OFFSET(0x18FA4510)
#define KNGADCOOODI_HKLKCOAKNIM_OFFSET UNITYSDK_OFFSET(0x18FA4DD0)
#define KNGADCOOODI_ILPMNJHBPEG_OFFSET UNITYSDK_OFFSET(0x18FA42D0)
#define KNGADCOOODI_JDOELEIHMBN_OFFSET UNITYSDK_OFFSET(0x18FA4A60)
#define KNGADCOOODI_KPLOILLLDBK_OFFSET UNITYSDK_OFFSET(0x18FA4280)
#define KNGADCOOODI_MGPENENAEPH_OFFSET UNITYSDK_OFFSET(0x18FA4E90)
#define KNGADCOOODI_MIGDDBLJFMD_OFFSET UNITYSDK_OFFSET(0x18FA4120)
#define KNGADCOOODI_MMECAADJFOM_OFFSET UNITYSDK_OFFSET(0x18FA4440)
#define KNGADCOOODI_OIJJFFDOMBP_OFFSET UNITYSDK_OFFSET(0x18FA4BD0)
#define KNGADCOOODI_OKKEAAIBMCF_OFFSET UNITYSDK_OFFSET(0x18FA4390)
#define KNGADCOOODI_ONEOFIGFEPK_OFFSET UNITYSDK_OFFSET(0x18FA4E20)
#define KNGADCOOODI_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x18FA4C20)
#define KNGADCOOODI__ONBIND_OFFSET UNITYSDK_OFFSET(0x18FA4850)
#define KNGADCOOODI__ONTICK_OFFSET UNITYSDK_OFFSET(0x18FA4B30)
#define KNGADCOOODI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18FA4A00)

inline static constexpr unsigned int KNGADCOOODI_TypeDefinitionIndex = 73699;

	class KNGADCOOODI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x60
		::UnityEngine::UI::SmoothMask* NNOOOFELINL; // 0x68
		::UnityEngine::UI::SmoothMask* KOAFNLBBFEM; // 0x70
		::System::Single BOEIAMPJKAC; // 0x78
		::System::Single BFKCADADNCA; // 0x7C
		::System::Boolean HAFCOEMEHNH; // 0x80
		::System::Boolean BNMJLLCPLJC; // 0x81
		::System::Byte _padding0[0x2];
		::System::Single PINIPLMPALI; // 0x84
		::System::Single FGDOBHBCCOB; // 0x88
		::System::Single GHJJJLNJBJL; // 0x8C
		::System::Single MOBANLDKIIA; // 0x90
		::System::Single EJNMGLJJEOO; // 0x94
		::KNGADCOOODI_TweenAnimState ALIOKKHBIIK; // 0x98
		// static const ::System::Object IJBGNHNDOKN; // 0x0
		// static const ::System::Object KJOIAIOKMKP; // 0x0
		// static const ::System::Object IKCNNCIEMDO; // 0x0
		// static const ::System::Object OHDKLNONACJ; // 0x0
		// static const ::System::Object OOIJGBAEOBC; // 0x0
		// static const ::System::Object PFGCLABNLAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_CTOR_OFFSET))(this);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNGADCOOODI_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Void ILPMNJHBPEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNGADCOOODI_ILPMNJHBPEG_OFFSET))(this, a1);
		}

		::System::Void MMECAADJFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_MMECAADJFOM_OFFSET))(this);
		}

		::System::Void CMMDKAMBJMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_CMMDKAMBJMJ_OFFSET))(this);
		}

		::System::Void EDCJFGHCCGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNGADCOOODI_EDCJFGHCCGO_OFFSET))(this, a1);
		}

		::System::Void DPFNKADDIJM(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KNGADCOOODI_DPFNKADDIJM_OFFSET))(this, a1, a2);
		}

		::System::Void MIGDDBLJFMD(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KNGADCOOODI_MIGDDBLJFMD_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNGADCOOODI__ONTICK_OFFSET))(this, a1);
		}

		::System::Boolean OIJJFFDOMBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_OIJJFFDOMBP_OFFSET))(this);
		}

		::System::Void OPCDEPOJOAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_OPCDEPOJOAL_OFFSET))(this);
		}

		::System::Void OKKEAAIBMCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNGADCOOODI_OKKEAAIBMCF_OFFSET))(this, a1);
		}

		::System::Void KPLOILLLDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_KPLOILLLDBK_OFFSET))(this);
		}

		::System::Single ONEOFIGFEPK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_ONEOFIGFEPK_OFFSET))(this);
		}

		::System::Single MGPENENAEPH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_MGPENENAEPH_OFFSET))(this);
		}

		::System::Single HKLKCOAKNIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_HKLKCOAKNIM_OFFSET))(this);
		}

		::System::Void HADKHLGBFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_HADKHLGBFLK_OFFSET))(this);
		}

		::System::Single DJDOMDEFOML(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNGADCOOODI_DJDOMDEFOML_OFFSET))(this, a1);
		}

		::System::Void JDOELEIHMBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGADCOOODI_JDOELEIHMBN_OFFSET))(this);
		}

	};

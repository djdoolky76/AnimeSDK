#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
class EHCCNDPHPBC;
class FLDLEHLKHMB;
class HDEPIHNOOHF;
class MOGBCMFMAGC;
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define MOGBCMFMAGC_AJFBIIELPJN_OFFSET UNITYSDK_OFFSET(0x1B212250)
#define MOGBCMFMAGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B211EB0)
#define MOGBCMFMAGC_GET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x1B211E90)
#define MOGBCMFMAGC_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0x1B2127A0)
#define MOGBCMFMAGC_LPIJEAEFOJH_OFFSET UNITYSDK_OFFSET(0x1B2124D0)
#define MOGBCMFMAGC_MLBLDFJAJEH_OFFSET UNITYSDK_OFFSET(0x1B212DA0)
#define MOGBCMFMAGC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1B212C40)
#define MOGBCMFMAGC_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x1B212730)
#define MOGBCMFMAGC_OICHBKFOPKO_OFFSET UNITYSDK_OFFSET(0x1B211FB0)
#define MOGBCMFMAGC_OJPBPPDFHEB_OFFSET UNITYSDK_OFFSET(0x1B212E10)
#define MOGBCMFMAGC_OLBJCOJOEKI_OFFSET UNITYSDK_OFFSET(0x1B212590)
#define MOGBCMFMAGC_PGKGDHAHAID_OFFSET UNITYSDK_OFFSET(0x1B212380)
#define MOGBCMFMAGC_PMGBJNPCGCH_OFFSET UNITYSDK_OFFSET(0x1B212520)
#define MOGBCMFMAGC_SET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x1B211EA0)
#define MOGBCMFMAGC__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B212A80)
#define MOGBCMFMAGC__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B212800)
#define MOGBCMFMAGC__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1B212CD0)
#define MOGBCMFMAGC__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B212BC0)
#define MOGBCMFMAGC__SETASFIRSTSIBLING_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B212E60)
#define MOGBCMFMAGC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B212A20)
#define MOGBCMFMAGC__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B212B20)

inline static constexpr unsigned int MOGBCMFMAGC_TypeDefinitionIndex = 74864;

	class MOGBCMFMAGC : public ::RPG::Client::UIController
	{
	public:
		::EHCCNDPHPBC* DHBOABGBEBA; // 0x190
		::HDEPIHNOOHF* BPLIGGFCPLI; // 0x198
		::System::Boolean JCOAADLMLAA; // 0x1A0
		::System::Byte _padding0[0x3];
		::System::Int32 GLHFPIGMBLN; // 0x1A4
		static ::MOGBCMFMAGC** StaticGet__ActivePage_k__BackingField()
		{
			return (::MOGBCMFMAGC**)UnitySDK::FromName("", "MOGBCMFMAGC")->GetStaticField(0xD250);
		}

		// static const ::System::Object GNDFCNPGHEE; // 0x0
		::System::Void _ctor(::RPG::Client::UILayer a1, ::RPG::CustomRP::FrameCapture_CaptureType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer, ::RPG::CustomRP::FrameCapture_CaptureType))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::MOGBCMFMAGC* get_ActivePage()
		{
			return ((::MOGBCMFMAGC*(*)())((::PBYTE)hIl2Cpp + MOGBCMFMAGC_GET_ACTIVEPAGE_OFFSET))();
		}

		static ::System::Void set_ActivePage(::MOGBCMFMAGC* a1)
		{
			return ((::System::Void(*)(::MOGBCMFMAGC*))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_SET_ACTIVEPAGE_OFFSET))(a1);
		}

		::System::Void AJFBIIELPJN(::System::Single a1, ::System::Single a2, ::RPG::GameCore::FrameCaptureFadeoutType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_AJFBIIELPJN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPIJEAEFOJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_LPIJEAEFOJH_OFFSET))(this);
		}

		::System::Void PMGBJNPCGCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_PMGBJNPCGCH_OFFSET))(this);
		}

		::System::Void OLBJCOJOEKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_OLBJCOJOEKI_OFFSET))(this);
		}

		::System::Boolean GPMDFFNHGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_GPMDFFNHGPB_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void PGKGDHAHAID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_PGKGDHAHAID_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* OICHBKFOPKO(::RPG::CustomRP::FrameCapture_CaptureType a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_OICHBKFOPKO_OFFSET))(this, a1);
		}

		::System::Single MLBLDFJAJEH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_MLBLDFJAJEH_OFFSET))(this);
		}

		::System::Void OJPBPPDFHEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_OJPBPPDFHEB_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_NMPLHCJKEOI_OFFSET))(this);
		}

		::FLDLEHLKHMB* OICGPNAMNAI()
		{
			return ((::FLDLEHLKHMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_OICGPNAMNAI_OFFSET))(this);
		}

		::System::Void _SetAsFirstSibling_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC__SETASFIRSTSIBLING_B__8_0_OFFSET))(this);
		}

	};

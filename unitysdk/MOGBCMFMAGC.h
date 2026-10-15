#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
class EHCCNDPHPBC;
class FLDLEHLKHMB;
class HDEPIHNOOHF;
class MOGBCMFMAGC;
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define MOGBCMFMAGC_AJFBIIELPJN_OFFSET UNITYSDK_OFFSET(0xBA2AA00)
#define MOGBCMFMAGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2A650)
#define MOGBCMFMAGC_GET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0xBA2A630)
#define MOGBCMFMAGC_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0xBA2AD30)
#define MOGBCMFMAGC_LFAFKCPFIEG_OFFSET UNITYSDK_OFFSET(0xBA2A760)
#define MOGBCMFMAGC_LPIJEAEFOJH_OFFSET UNITYSDK_OFFSET(0xBA2AC70)
#define MOGBCMFMAGC_MLBLDFJAJEH_OFFSET UNITYSDK_OFFSET(0xBA2B3B0)
#define MOGBCMFMAGC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xBA2B250)
#define MOGBCMFMAGC_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0xBA2AFC0)
#define MOGBCMFMAGC_OJPBPPDFHEB_OFFSET UNITYSDK_OFFSET(0xBA2B420)
#define MOGBCMFMAGC_PGKGDHAHAID_OFFSET UNITYSDK_OFFSET(0xBA2AB30)
#define MOGBCMFMAGC_PMGBJNPCGCH_OFFSET UNITYSDK_OFFSET(0xBA2ACC0)
#define MOGBCMFMAGC_SET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0xBA2A640)
#define MOGBCMFMAGC__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA2B090)
#define MOGBCMFMAGC__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA2AD90)
#define MOGBCMFMAGC__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBA2B2E0)
#define MOGBCMFMAGC__ONTICK_OFFSET UNITYSDK_OFFSET(0xBA2B1D0)
#define MOGBCMFMAGC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBA2B030)
#define MOGBCMFMAGC__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA2B130)

inline static constexpr unsigned int MOGBCMFMAGC_TypeDefinitionIndex = 72786;

	class MOGBCMFMAGC : public ::RPG::Client::UIController
	{
	public:
		::HDEPIHNOOHF* BPLIGGFCPLI; // 0x190
		::EHCCNDPHPBC* DHBOABGBEBA; // 0x198
		::System::Boolean JCOAADLMLAA; // 0x1A0
		::System::Byte _padding0[0x3];
		::System::Int32 GLHFPIGMBLN; // 0x1A4
		static ::MOGBCMFMAGC** StaticGet__ActivePage_k__BackingField()
		{
			return (::MOGBCMFMAGC**)UnitySDK::FromName("", "MOGBCMFMAGC")->GetStaticField(0x11D70);
		}

		// static const ::System::Object GNDFCNPGHEE; // 0x0
		::System::Void _ctor(::RPG::Client::UILayer a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_CTOR_OFFSET))(this, a1, a2);
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

		::UnityEngine::RenderTexture* LFAFKCPFIEG()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBCMFMAGC_LFAFKCPFIEG_OFFSET))(this);
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

	};

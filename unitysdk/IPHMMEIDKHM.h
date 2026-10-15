#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BundleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GPGOJLCDIHD.h"
#include "unitysdk/IPKGHGJPNKB.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class AGKEILLNKIC;
class DFBAHCICJNE;
class DIBNHEICGAF;
class HJEIEIFLDGN;
class OBPJIBCAKEK;
namespace RPG::Client { class DesignDataMgr; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }

#define IPHMMEIDKHM_AILNFIAIAGI_OFFSET UNITYSDK_OFFSET(0x1C4A3AB0)
#define IPHMMEIDKHM_CJAFMHMDKKO_1_OFFSET UNITYSDK_OFFSET(0x1C4A41F0)
#define IPHMMEIDKHM_CJAFMHMDKKO_OFFSET UNITYSDK_OFFSET(0x1C4A4140)
#define IPHMMEIDKHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3700)
#define IPHMMEIDKHM_DHIPKICHJLA_OFFSET UNITYSDK_OFFSET(0x1C4A4260)
#define IPHMMEIDKHM_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x1C4A3AD0)
#define IPHMMEIDKHM_DNCHCHDOOFB_1_OFFSET UNITYSDK_OFFSET(0x1C4A4610)
#define IPHMMEIDKHM_DNCHCHDOOFB_OFFSET UNITYSDK_OFFSET(0x1C4A4590)
#define IPHMMEIDKHM_DNDINDJGAKB_1_OFFSET UNITYSDK_OFFSET(0x1C4A47D0)
#define IPHMMEIDKHM_DNDINDJGAKB_OFFSET UNITYSDK_OFFSET(0x1C4A4680)
#define IPHMMEIDKHM_EDIJNGAHDOM_OFFSET UNITYSDK_OFFSET(0x1C4A3FF0)
#define IPHMMEIDKHM_FMCLIHBMOGM_OFFSET UNITYSDK_OFFSET(0x1C4A3AC0)
#define IPHMMEIDKHM_GJEKIPADCLH_OFFSET UNITYSDK_OFFSET(0x1C4A4520)
#define IPHMMEIDKHM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C4A39C0)
#define IPHMMEIDKHM_HHPMEJLCAPC_OFFSET UNITYSDK_OFFSET(0x1C4A3B50)
#define IPHMMEIDKHM_JFBKICMDADL_OFFSET UNITYSDK_OFFSET(0x1C4A3A50)
#define IPHMMEIDKHM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C4A37A0)
#define IPHMMEIDKHM_LALMAOLJDLM_OFFSET UNITYSDK_OFFSET(0x1C4A4D80)
#define IPHMMEIDKHM_MOEALGALDLJ_OFFSET UNITYSDK_OFFSET(0x1C4A4C40)
#define IPHMMEIDKHM_PODLKOGHGMA_1_OFFSET UNITYSDK_OFFSET(0x1C4A43B0)
#define IPHMMEIDKHM_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C4A4320)

	class IPHMMEIDKHM : public ::System::Object
	{
	public:
		::System::String* OBCKMCGGNHA; // 0x10
		::AGKEILLNKIC* FLPCIGCKBKH; // 0x18
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x20
		::System::String* LLFLALPJGOO; // 0x28
		::HJEIEIFLDGN* CEKPAHMJFEJ; // 0x30
		::OBPJIBCAKEK* PDJDHNDNDAD; // 0x38
		::RPG::Client::BundleType KNHBEPNHANB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JFBKICMDADL(::RPG::Client::DesignDataMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataMgr*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_JFBKICMDADL_OFFSET))(this, a1);
		}

		::System::Void AILNFIAIAGI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_AILNFIAIAGI_OFFSET))(this, a1);
		}

		::System::Void FMCLIHBMOGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_FMCLIHBMOGM_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DJJBNDDBKIH_OFFSET))(this, a1);
		}

		::GPGOJLCDIHD EDIJNGAHDOM(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::GPGOJLCDIHD(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_EDIJNGAHDOM_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* CJAFMHMDKKO(::System::String* a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_CJAFMHMDKKO_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* CJAFMHMDKKO_1(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_CJAFMHMDKKO_1_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* DHIPKICHJLA(::DFBAHCICJNE* a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::DFBAHCICJNE*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DHIPKICHJLA_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* PODLKOGHGMA(::System::String* a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_PODLKOGHGMA_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* PODLKOGHGMA_1(::RPG::Client::DesignDataShortNameHash a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_PODLKOGHGMA_1_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* DNCHCHDOOFB(::System::String* a1, ::DIBNHEICGAF* a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DNCHCHDOOFB_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* DNCHCHDOOFB_1(::RPG::Client::DesignDataShortNameHash a1, ::DIBNHEICGAF* a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DNCHCHDOOFB_1_OFFSET))(this, a1, a2);
		}

		::System::Void DNDINDJGAKB(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DNDINDJGAKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNDINDJGAKB_1(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_DNDINDJGAKB_1_OFFSET))(this, a1, a2, a3);
		}

		::DFBAHCICJNE* GJEKIPADCLH(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::DFBAHCICJNE*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_GJEKIPADCLH_OFFSET))(this, a1);
		}

		::RPG::Client::DesignDataShortNameHash HHPMEJLCAPC(::System::String* a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_HHPMEJLCAPC_OFFSET))(this, a1);
		}

		::System::Boolean MOEALGALDLJ(::HJEIEIFLDGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJEIEIFLDGN*))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_MOEALGALDLJ_OFFSET))(this, a1);
		}

		::System::Boolean LALMAOLJDLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHMMEIDKHM_LALMAOLJDLM_OFFSET))(this);
		}

	};

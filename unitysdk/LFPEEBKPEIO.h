#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IPKGHGJPNKB.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class DIBNHEICGAF;
class JPALBBKCNHE;
namespace RPG::Client { class DesignDataMgr; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }

#define LFPEEBKPEIO_CJAFMHMDKKO_1_OFFSET UNITYSDK_OFFSET(0x1C47F8C0)
#define LFPEEBKPEIO_CJAFMHMDKKO_OFFSET UNITYSDK_OFFSET(0x1C47F830)
#define LFPEEBKPEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47F690)
#define LFPEEBKPEIO_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x1C47F9A0)
#define LFPEEBKPEIO_DNCHCHDOOFB_1_OFFSET UNITYSDK_OFFSET(0x1C47FEC0)
#define LFPEEBKPEIO_DNCHCHDOOFB_OFFSET UNITYSDK_OFFSET(0x1C47FE10)
#define LFPEEBKPEIO_DNDINDJGAKB_OFFSET UNITYSDK_OFFSET(0x1C47FF30)
#define LFPEEBKPEIO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C47F740)
#define LFPEEBKPEIO_JFBKICMDADL_OFFSET UNITYSDK_OFFSET(0x1C47F7D0)
#define LFPEEBKPEIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C47F6D0)
#define LFPEEBKPEIO_PODLKOGHGMA_1_OFFSET UNITYSDK_OFFSET(0x1C47FD80)
#define LFPEEBKPEIO_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C47FC60)

inline static constexpr unsigned int LFPEEBKPEIO_TypeDefinitionIndex = 41418;

	class LFPEEBKPEIO : public ::System::Object
	{
	public:
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x10
		::JPALBBKCNHE* CKAHBFPDPMK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JFBKICMDADL(::RPG::Client::DesignDataMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataMgr*))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_JFBKICMDADL_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* CJAFMHMDKKO(::System::String* a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_CJAFMHMDKKO_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* CJAFMHMDKKO_1(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_CJAFMHMDKKO_1_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_DJJBNDDBKIH_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* PODLKOGHGMA(::System::String* a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_PODLKOGHGMA_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* PODLKOGHGMA_1(::RPG::Client::DesignDataShortNameHash a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_PODLKOGHGMA_1_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* DNCHCHDOOFB(::System::String* a1, ::DIBNHEICGAF* a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_DNCHCHDOOFB_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* DNCHCHDOOFB_1(::RPG::Client::DesignDataShortNameHash a1, ::DIBNHEICGAF* a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_DNCHCHDOOFB_1_OFFSET))(this, a1, a2);
		}

		::System::Void DNDINDJGAKB(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPEEBKPEIO_DNDINDJGAKB_OFFSET))(this, a1, a2, a3);
		}

	};

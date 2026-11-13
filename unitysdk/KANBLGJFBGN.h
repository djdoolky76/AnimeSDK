#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MMENAAHCEIJ.h"
class ACBDGIHICCD;
class MJNGFEGNCOA;
class PCBAEKICFEB;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KANBLGJFBGN_AFFDMECIKIA_OFFSET UNITYSDK_OFFSET(0x19DB5D00)
#define KANBLGJFBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB60A0)
#define KANBLGJFBGN_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x19DB5EB0)
#define KANBLGJFBGN_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x19DB59A0)
#define KANBLGJFBGN_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x19DB5AE0)

inline static constexpr unsigned int KANBLGJFBGN_TypeDefinitionIndex = 55272;

	class KANBLGJFBGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PCBAEKICFEB*>* GJPJJJJOHML; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::ACBDGIHICCD* PJKNMFIDFLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANBLGJFBGN_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + KANBLGJFBGN_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANBLGJFBGN_ONPLUGINUNINIT_OFFSET))(this);
		}

		::PCBAEKICFEB* AFFDMECIKIA(::MMENAAHCEIJ a1)
		{
			return ((::PCBAEKICFEB*(*)(::PVOID, ::MMENAAHCEIJ))((::PBYTE)hIl2Cpp + KANBLGJFBGN_AFFDMECIKIA_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + KANBLGJFBGN_KCKGCEBBCIE_OFFSET))(this, a1);
		}

	};

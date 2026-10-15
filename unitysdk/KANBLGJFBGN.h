#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MMENAAHCEIJ.h"
class ACBDGIHICCD;
class MJNGFEGNCOA;
class PCBAEKICFEB;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KANBLGJFBGN_AFFDMECIKIA_OFFSET UNITYSDK_OFFSET(0xB2D85D0)
#define KANBLGJFBGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D8970)
#define KANBLGJFBGN_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB2D8780)
#define KANBLGJFBGN_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB2D8270)
#define KANBLGJFBGN_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB2D83B0)

inline static constexpr unsigned int KANBLGJFBGN_TypeDefinitionIndex = 54108;

	class KANBLGJFBGN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::ACBDGIHICCD* PJKNMFIDFLF; // 0x18
		::System::Collections::Generic::List_1<::PCBAEKICFEB*>* GJPJJJJOHML; // 0x20
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

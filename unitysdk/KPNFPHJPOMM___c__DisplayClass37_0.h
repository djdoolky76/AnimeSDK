#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNFPHJPOMM;
class KPNFPHJPOMM_BNODLLNHEME;
namespace RPG::Client { class IAssetOperation; }

#define KPNFPHJPOMM___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9E00)
#define KPNFPHJPOMM___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xB5CD190)

	class KPNFPHJPOMM___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::KPNFPHJPOMM* __4__this; // 0x10
		::KPNFPHJPOMM_BNODLLNHEME* cb; // 0x18
		::System::Int32 blockId; // 0x20
		::System::Boolean finished; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadDataBlock_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET))(this, a1);
		}

	};

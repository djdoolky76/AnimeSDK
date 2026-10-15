#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPDICFCDFCF_ICHMEPEKPKE.h"
class NEOBJJIOBFP;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define LPDICFCDFCF_DCCLLKFABBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB81BCC0)
#define LPDICFCDFCF_DCCLLKFABBC_DFMOKEDHBGO_OFFSET UNITYSDK_OFFSET(0xB81BEE0)
#define LPDICFCDFCF_DCCLLKFABBC_LHGBNJGEHKO_OFFSET UNITYSDK_OFFSET(0xB81DEA0)

	class LPDICFCDFCF_DCCLLKFABBC : public ::LPDICFCDFCF_ICHMEPEKPKE
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::NEOBJJIOBFP* a3, ::RPG::GameCore::GameWorld* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::NEOBJJIOBFP*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DCCLLKFABBC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFMOKEDHBGO(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DCCLLKFABBC_DFMOKEDHBGO_OFFSET))(this, a1);
		}

		::System::Void LHGBNJGEHKO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_DCCLLKFABBC_LHGBNJGEHKO_OFFSET))(this, a1, a2);
		}

	};

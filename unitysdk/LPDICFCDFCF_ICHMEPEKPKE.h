#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOBJJIOBFP;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define LPDICFCDFCF_ICHMEPEKPKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB81DCF0)
#define LPDICFCDFCF_ICHMEPEKPKE_DFMOKEDHBGO_OFFSET UNITYSDK_OFFSET(0xB81D860)
#define LPDICFCDFCF_ICHMEPEKPKE_KDJPPMKIJDD_OFFSET UNITYSDK_OFFSET(0xB81D780)
#define LPDICFCDFCF_ICHMEPEKPKE_LHGBNJGEHKO_OFFSET UNITYSDK_OFFSET(0xB81DF10)

	class LPDICFCDFCF_ICHMEPEKPKE : public ::System::Object
	{
	public:
		::RPG::GameCore::AnchorInfo* GOGCKONMFBM; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::NEOBJJIOBFP* NFMKOFNEKLA; // 0x20
		::System::Boolean IOBJFEJFLJP; // 0x28
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::NEOBJJIOBFP* a3, ::RPG::GameCore::GameWorld* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::NEOBJJIOBFP*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_ICHMEPEKPKE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFMOKEDHBGO(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_ICHMEPEKPKE_DFMOKEDHBGO_OFFSET))(this, a1);
		}

		::System::Void KDJPPMKIJDD(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_ICHMEPEKPKE_KDJPPMKIJDD_OFFSET))(this, a1);
		}

		::System::Void LHGBNJGEHKO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_ICHMEPEKPKE_LHGBNJGEHKO_OFFSET))(this, a1, a2);
		}

	};

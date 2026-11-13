#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJHMMJGOAAF_CTOR_OFFSET UNITYSDK_OFFSET(0x19F18980)
#define KJHMMJGOAAF_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x19F18900)

inline static constexpr unsigned int KJHMMJGOAAF_TypeDefinitionIndex = 80409;

	class KJHMMJGOAAF : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelCreateChimeraNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x18
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* KLDACNEKNGF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMMJGOAAF_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + KJHMMJGOAAF_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

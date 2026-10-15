#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuItem; }

#define HINLEDPNGCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CECA90)
#define HINLEDPNGCI_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15CEC940)

inline static constexpr unsigned int HINLEDPNGCI_TypeDefinitionIndex = 68944;

	class HINLEDPNGCI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HINLEDPNGCI_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::MonoDanmuItem* a1, ::MFLJIEBFMOF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + HINLEDPNGCI_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIBMCPDOEG;
class FFOAFCPMFCA;
class OLKIGNMJDMA;
namespace RPG::Client::ComicDessert { class ComicDessertUpgradeViewModel; }

#define NLBGDDGDEGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC545130)
#define NLBGDDGDEGE_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0xC5451B0)

inline static constexpr unsigned int NLBGDDGDEGE_TypeDefinitionIndex = 77107;

	class NLBGDDGDEGE : public ::System::Object
	{
	public:
		::CIIBMCPDOEG* JAIBNHJHJIO; // 0x10
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x18
		::OLKIGNMJDMA* NAOOPJJJDJL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBGDDGDEGE_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertUpgradeViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertUpgradeViewModel*))((::PBYTE)hIl2Cpp + NLBGDDGDEGE_JMAEMEFEPHB_OFFSET))(this, a1);
		}

	};

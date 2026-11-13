#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFOAFCPMFCA;
class GJIPEHCDIBP;
class HJEGNHEENDL;
class NGLADGNHAML;
namespace RPG::Client::ComicDessert { class ComicDessertPictureGuidePageViewModel; }
namespace RPG::Client::ComicDessert::Service { class ComicDessertWindowService; }

#define CCCPKKBGMAK_CTOR_OFFSET UNITYSDK_OFFSET(0x18FF5680)
#define CCCPKKBGMAK_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0x18FF5720)

inline static constexpr unsigned int CCCPKKBGMAK_TypeDefinitionIndex = 77105;

	class CCCPKKBGMAK : public ::System::Object
	{
	public:
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x10
		::HJEGNHEENDL* NBKMFHFDNOJ; // 0x18
		::NGLADGNHAML* DFGOELKDBAF; // 0x20
		::GJIPEHCDIBP* MNNCCGEEKGA; // 0x28
		::RPG::Client::ComicDessert::Service::ComicDessertWindowService* MPFFGNPIDOA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCPKKBGMAK_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertPictureGuidePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertPictureGuidePageViewModel*))((::PBYTE)hIl2Cpp + CCCPKKBGMAK_JMAEMEFEPHB_OFFSET))(this, a1);
		}

	};

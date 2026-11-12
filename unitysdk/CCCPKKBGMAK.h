#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFOAFCPMFCA;
class GJIPEHCDIBP;
class HJEGNHEENDL;
class NGLADGNHAML;
namespace RPG::Client::ComicDessert { class ComicDessertPictureGuidePageViewModel; }
namespace RPG::Client::ComicDessert::Service { class ComicDessertWindowService; }

#define CCCPKKBGMAK_CTOR_OFFSET UNITYSDK_OFFSET(0xCE285C0)
#define CCCPKKBGMAK_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0xCE28650)

inline static constexpr unsigned int CCCPKKBGMAK_TypeDefinitionIndex = 77106;

	class CCCPKKBGMAK : public ::System::Object
	{
	public:
		::RPG::Client::ComicDessert::Service::ComicDessertWindowService* MPFFGNPIDOA; // 0x10
		::NGLADGNHAML* DFGOELKDBAF; // 0x18
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x20
		::HJEGNHEENDL* NBKMFHFDNOJ; // 0x28
		::GJIPEHCDIBP* MNNCCGEEKGA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCPKKBGMAK_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertPictureGuidePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertPictureGuidePageViewModel*))((::PBYTE)hIl2Cpp + CCCPKKBGMAK_JMAEMEFEPHB_OFFSET))(this, a1);
		}

	};

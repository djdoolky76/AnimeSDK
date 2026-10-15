#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DKGMHFOKNOJ_DGCBAFHIIPO_OFFSET UNITYSDK_OFFSET(0xF87B730)
#define DKGMHFOKNOJ_FMEDGNOKIEC_OFFSET UNITYSDK_OFFSET(0xF87B860)

	class DKGMHFOKNOJ : public ::System::Object
	{
	public:
		// static const ::System::String* KEAAIIBNEKG; // 0x0
		// static const ::System::String* BEAIEINFDOM; // 0x0
		// static const ::System::String* OJFJFCIKLOK; // 0x0
		// static const ::System::String* LGMOEEMHNFA; // 0x0
		// static const ::System::String* OJBJFIAIOKN; // 0x0
		// static const ::System::String* JAJEHNFIIFC; // 0x0
		// static const ::System::String* JINMEDNCACA; // 0x0
		static ::System::String* DGCBAFHIIPO(::RPG::GameCore::E_PakType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + DKGMHFOKNOJ_DGCBAFHIIPO_OFFSET))(a1);
		}

		static ::RPG::GameCore::E_PakType FMEDGNOKIEC(::System::String* a1)
		{
			return ((::RPG::GameCore::E_PakType(*)(::System::String*))((::PBYTE)hIl2Cpp + DKGMHFOKNOJ_FMEDGNOKIEC_OFFSET))(a1);
		}

	};

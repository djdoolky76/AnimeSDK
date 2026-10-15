#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimMusicInfo; }
namespace System { class String; }

#define GFIMNLJALNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73920)

inline static constexpr unsigned int GFIMNLJALNN_TypeDefinitionIndex = 43637;

	class GFIMNLJALNN : public ::System::Object
	{
	public:
		::System::String* HNKGENHMPGH; // 0x10
		::System::String* BGEHFMADMJH; // 0x18
		::System::Single PNOPJBELEDM; // 0x20
		::System::Single IFEPJHGNCOI; // 0x24
		::System::Single JBCFPAEELBL; // 0x28
		::System::Single DIFPNCHMJBG; // 0x2C
		::System::Void _ctor(::RPG::GameCore::FiveDimMusicInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + GFIMNLJALNN_CTOR_OFFSET))(this, a1);
		}

	};

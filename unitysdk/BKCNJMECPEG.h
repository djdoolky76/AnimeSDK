#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BKCNJMECPEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A8CF0)

inline static constexpr unsigned int BKCNJMECPEG_TypeDefinitionIndex = 71225;

	class BKCNJMECPEG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint CGLEPDDLJDE; // 0x10
		::RPG::GameCore::FixPoint JHFIMKNMGED; // 0x18
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCNJMECPEG_CTOR_OFFSET))(this);
		}

	};

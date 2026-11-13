#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BIBPEJPAMFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA3800)

inline static constexpr unsigned int BIBPEJPAMFP_TypeDefinitionIndex = 56791;

	class BIBPEJPAMFP : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x10
		::System::Boolean NNDBCGMAEFP; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint FEGAGJHIKLO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBPEJPAMFP_CTOR_OFFSET))(this);
		}

	};

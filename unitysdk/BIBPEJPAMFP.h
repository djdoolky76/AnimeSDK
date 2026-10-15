#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BIBPEJPAMFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB4950C0)

inline static constexpr unsigned int BIBPEJPAMFP_TypeDefinitionIndex = 55595;

	class BIBPEJPAMFP : public ::System::Object
	{
	public:
		::System::Boolean NNDBCGMAEFP; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint FEGAGJHIKLO; // 0x18
		::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBPEJPAMFP_CTOR_OFFSET))(this);
		}

	};

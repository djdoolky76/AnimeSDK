#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CONDBHNGCNA.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class Object; }

#define BEBMFHAGBLK_CTOR_OFFSET UNITYSDK_OFFSET(0x162FFCE0)
#define BEBMFHAGBLK_FNLKLLKLMBO_OFFSET UNITYSDK_OFFSET(0x162FFD90)
#define BEBMFHAGBLK_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x162FFCF0)

inline static constexpr unsigned int BEBMFHAGBLK_TypeDefinitionIndex = 67249;

	class BEBMFHAGBLK : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* KLFDBDLDGNE; // 0x10
		::CONDBHNGCNA LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::CONDBHNGCNA a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONDBHNGCNA))((::PBYTE)hIl2Cpp + BEBMFHAGBLK_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBMFHAGBLK_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueMagicScepterDataItem* FNLKLLKLMBO()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBMFHAGBLK_FNLKLLKLMBO_OFFSET))(this);
		}

	};

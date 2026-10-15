#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDialogueType.h"
#include "unitysdk/System/Object.h"
class OCJPAHFOIGD;
class OJFHLDGCFOD;
namespace RPG::GameCore { class RogueNPCConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define OCJPAHFOIGD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD679C0)
#define OCJPAHFOIGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD675F0)
#define OCJPAHFOIGD_HHCCENGCMMN_OFFSET UNITYSDK_OFFSET(0xBD67CD0)
#define OCJPAHFOIGD_HIMJHKLMOFO_OFFSET UNITYSDK_OFFSET(0xBD67D30)
#define OCJPAHFOIGD_MLGDOCLAKEO_OFFSET UNITYSDK_OFFSET(0xBD67E60)
#define OCJPAHFOIGD_PHBBLFOICJJ_OFFSET UNITYSDK_OFFSET(0xBD67BB0)

inline static constexpr unsigned int OCJPAHFOIGD_TypeDefinitionIndex = 67296;

	class OCJPAHFOIGD : public ::System::Object
	{
	public:
		::OJFHLDGCFOD* IBPBJBOKKMF; // 0x10
		::RPG::GameCore::RogueNPCConfig* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::OJFHLDGCFOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJFHLDGCFOD*))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_CTOR_OFFSET))(this, a1);
		}

		static ::OCJPAHFOIGD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::OCJPAHFOIGD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::RogueNPCDialogueConfig* PHBBLFOICJJ(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_PHBBLFOICJJ_OFFSET))(this, a1);
		}

		::System::UInt32 HIMJHKLMOFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_HIMJHKLMOFO_OFFSET))(this);
		}

		::RPG::GameCore::RogueDialogueType MLGDOCLAKEO()
		{
			return ((::RPG::GameCore::RogueDialogueType(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_MLGDOCLAKEO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>* HHCCENGCMMN()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAHFOIGD_HHCCENGCMMN_OFFSET))(this);
		}

	};

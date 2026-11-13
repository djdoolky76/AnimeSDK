#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace RPG::Client { class GridFightStageNode; }

#define AHGNGHLMBHP_BJAJEPILEKL_OFFSET UNITYSDK_OFFSET(0x19B21B80)
#define AHGNGHLMBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x19B21BF0)
#define AHGNGHLMBHP_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B21B60)
#define AHGNGHLMBHP_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B21B70)

inline static constexpr unsigned int AHGNGHLMBHP_TypeDefinitionIndex = 66650;

	class AHGNGHLMBHP : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::UInt32 _ShowType_k__BackingField; // 0x28
		::System::UInt32 ALLNJPLFNAA; // 0x2C
		::System::UInt32 BNMDOMNCOEN; // 0x30
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + AHGNGHLMBHP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShowType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNGHLMBHP_GET_SHOWTYPE_OFFSET))(this);
		}

		::System::Void set_ShowType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHGNGHLMBHP_SET_SHOWTYPE_OFFSET))(this, a1);
		}

		::System::Boolean BJAJEPILEKL(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + AHGNGHLMBHP_BJAJEPILEKL_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
class BKIBJOEMJLC;
namespace RPG::Client { class GridFightStageNode; }

#define BKIBJOEMJLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A664FB0)
#define BKIBJOEMJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A664F70)
#define BKIBJOEMJLC_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x1A664D10)
#define BKIBJOEMJLC_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1A665050)
#define BKIBJOEMJLC_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A6650D0)
#define BKIBJOEMJLC_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1A665090)
#define BKIBJOEMJLC_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1A665070)
#define BKIBJOEMJLC_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A6650B0)
#define BKIBJOEMJLC_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1A665060)
#define BKIBJOEMJLC_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A6650E0)
#define BKIBJOEMJLC_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1A6650A0)
#define BKIBJOEMJLC_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1A665080)
#define BKIBJOEMJLC_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A6650C0)

inline static constexpr unsigned int BKIBJOEMJLC_TypeDefinitionIndex = 67006;

	class BKIBJOEMJLC : public ::System::Object
	{
	public:
		::System::UInt32 _SectionID_k__BackingField; // 0x10
		::System::UInt32 _ChapterID_k__BackingField; // 0x14
		::System::UInt32 _RouteID_k__BackingField; // 0x18
		::System::UInt32 _StageID_k__BackingField; // 0x1C
		::RPG::GameCore::GridFightNodeType _NodeType_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightStageNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::BKIBJOEMJLC* FLFLCMEJEPM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::BKIBJOEMJLC*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_FLFLCMEJEPM_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_SET_CHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_SET_SECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::GameCore::GridFightNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_SET_NODETYPE_OFFSET))(this, a1);
		}

	};

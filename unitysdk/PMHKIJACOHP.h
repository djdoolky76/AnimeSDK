#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKINHDIFEBD.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparer; }

#define PMHKIJACOHP_CTOR_OFFSET UNITYSDK_OFFSET(0xC31D620)
#define PMHKIJACOHP_DDAIPDEDJBK_OFFSET UNITYSDK_OFFSET(0xC31D650)

inline static constexpr unsigned int PMHKIJACOHP_TypeDefinitionIndex = 77442;

	class PMHKIJACOHP : public ::MKINHDIFEBD
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType JLDGIKMAPGK; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityAttributeComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*))((::PBYTE)hIl2Cpp + PMHKIJACOHP_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 DDAIPDEDJBK(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + PMHKIJACOHP_DDAIPDEDJBK_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRoleSkillDetail; }

#define BAAMFMGDFGC_AAKNNKHCLMA_OFFSET UNITYSDK_OFFSET(0x15BCC6B0)
#define BAAMFMGDFGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCC6A0)

inline static constexpr unsigned int BAAMFMGDFGC_TypeDefinitionIndex = 65289;

	class BAAMFMGDFGC : public ::System::Object
	{
	public:
		::RPG::Client::GridFightCyreneModifyConfig* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightCyreneModifyConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + BAAMFMGDFGC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean AAKNNKHCLMA(::RPG::Client::GridFightRoleSkillDetail* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifyCalcOpType a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*, ::System::UInt32, ::RPG::GameCore::ModifyCalcOpType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BAAMFMGDFGC_AAKNNKHCLMA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

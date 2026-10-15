#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class HLJHGONOFIH;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }

#define AHADFGFJDLG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB78D60)
#define AHADFGFJDLG_HKELDKHOPGM_OFFSET UNITYSDK_OFFSET(0xEB79270)
#define AHADFGFJDLG_JPHMMEHDLLA_OFFSET UNITYSDK_OFFSET(0xEB78D70)

	class AHADFGFJDLG : public ::HMDKMIJLJFH
	{
	public:
		::HLJHGONOFIH* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::HLJHGONOFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJHGONOFIH*))((::PBYTE)hIl2Cpp + AHADFGFJDLG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JPHMMEHDLLA(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + AHADFGFJDLG_JPHMMEHDLLA_OFFSET))(this, a1);
		}

		::System::Boolean HKELDKHOPGM(::RPG::GameCore::ChimeraDuelBranchNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + AHADFGFJDLG_HKELDKHOPGM_OFFSET))(this, a1);
		}

	};

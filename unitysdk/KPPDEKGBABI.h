#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class OPMNMIEBEKI;
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelHysilensEffectNode; }
namespace RPG::GameCore { class ChimeraDuelReorderChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelSetChimeraLightWeightActiveNode; }
namespace RPG::GameCore { class ChimeraDuelSummonNode; }
namespace RPG::GameCore { class ChimeraDuelUIMoveToSummonQueueNode; }

#define KPPDEKGBABI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4530)
#define KPPDEKGBABI_EJDCAOKOMNG_OFFSET UNITYSDK_OFFSET(0xB5D46A0)
#define KPPDEKGBABI_LCJILKAHEGN_OFFSET UNITYSDK_OFFSET(0xB5D49D0)
#define KPPDEKGBABI_MHPFAEGKDGG_OFFSET UNITYSDK_OFFSET(0xB5D48A0)
#define KPPDEKGBABI_MLCNIILCMKE_OFFSET UNITYSDK_OFFSET(0xB5D4540)
#define KPPDEKGBABI_MPDEDENADJH_OFFSET UNITYSDK_OFFSET(0xB5D45F0)
#define KPPDEKGBABI_MPHHNKLDHFJ_OFFSET UNITYSDK_OFFSET(0xB5D4790)

	class KPPDEKGBABI : public ::HMDKMIJLJFH
	{
	public:
		::OPMNMIEBEKI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::OPMNMIEBEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPMNMIEBEKI*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MLCNIILCMKE(::RPG::GameCore::ChimeraDuelSummonNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_MLCNIILCMKE_OFFSET))(this, a1);
		}

		::System::Boolean MPDEDENADJH(::RPG::GameCore::ChimeraDuelHysilensEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_MPDEDENADJH_OFFSET))(this, a1);
		}

		::System::Boolean EJDCAOKOMNG(::RPG::GameCore::ChimeraDuelCreateChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_EJDCAOKOMNG_OFFSET))(this, a1);
		}

		::System::Boolean MPHHNKLDHFJ(::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_MPHHNKLDHFJ_OFFSET))(this, a1);
		}

		::System::Boolean MHPFAEGKDGG(::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_MHPFAEGKDGG_OFFSET))(this, a1);
		}

		::System::Boolean LCJILKAHEGN(::RPG::GameCore::ChimeraDuelReorderChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + KPPDEKGBABI_LCJILKAHEGN_OFFSET))(this, a1);
		}

	};

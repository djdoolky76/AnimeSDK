#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class ChimeraEvaluationManager; }
namespace RPG::Client { class ChimeraModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define GEJKIKIKHFK_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0x159DB130)
#define GEJKIKIKHFK_CIJOCBKIPAI_OFFSET UNITYSDK_OFFSET(0x159DB480)
#define GEJKIKIKHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x159DB120)
#define GEJKIKIKHFK_FGCMFDHNDBP_OFFSET UNITYSDK_OFFSET(0x159DB430)
#define GEJKIKIKHFK_GJMOEDGAJCB_OFFSET UNITYSDK_OFFSET(0x159DB360)
#define GEJKIKIKHFK_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x159DB170)
#define GEJKIKIKHFK_MMOFFFCEOIC_OFFSET UNITYSDK_OFFSET(0x159DB220)
#define GEJKIKIKHFK_NIPDCHOJNHJ_OFFSET UNITYSDK_OFFSET(0x159DB2D0)

inline static constexpr unsigned int GEJKIKIKHFK_TypeDefinitionIndex = 63486;

	class GEJKIKIKHFK : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraEvaluationCondition* OLPNJHPNJNG; // 0x10
		::System::UInt32 HHOBHLKDPEM; // 0x18
		::System::UInt32 FNKHKLGGHIB; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_AMPLNFFNNJI_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_MJEGFOMAOFH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* MMOFFFCEOIC()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_MMOFFFCEOIC_OFFSET))(this);
		}

		::RPG::Client::ChimeraModule* NIPDCHOJNHJ()
		{
			return ((::RPG::Client::ChimeraModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_NIPDCHOJNHJ_OFFSET))(this);
		}

		::RPG::Client::ChimeraEvaluationManager* GJMOEDGAJCB()
		{
			return ((::RPG::Client::ChimeraEvaluationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_GJMOEDGAJCB_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* FGCMFDHNDBP()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_FGCMFDHNDBP_OFFSET))(this);
		}

		::System::UInt32 CIJOCBKIPAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJKIKIKHFK_CIJOCBKIPAI_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCMFIOAJPLA;
namespace RPG::Client { class ChimeraEvaluationData; }

#define MCHDFGLEMCD___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8773A0)
#define MCHDFGLEMCD___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xB877410)

inline static constexpr unsigned int MCHDFGLEMCD___c__DisplayClass7_0_TypeDefinitionIndex = 63495;

	class MCHDFGLEMCD___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraEvaluationData* evaluationData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHDFGLEMCD___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RandomChooseEvaluationInSameGroup_b__0(::OCMFIOAJPLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCMFIOAJPLA*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET))(this, a1);
		}

	};

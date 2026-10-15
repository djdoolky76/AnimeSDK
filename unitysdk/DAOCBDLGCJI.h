#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartMarblePVEChallengeMatch; }
namespace RPG::GameCore { class TaskContext; }

#define DAOCBDLGCJI_BBLFMIHBLAB_OFFSET UNITYSDK_OFFSET(0xDFBC8E0)
#define DAOCBDLGCJI_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBC6E0)
#define DAOCBDLGCJI_GFIAFECIBJL_OFFSET UNITYSDK_OFFSET(0xDFBCB70)
#define DAOCBDLGCJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFBC710)

inline static constexpr unsigned int DAOCBDLGCJI_TypeDefinitionIndex = 52309;

	class DAOCBDLGCJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + DAOCBDLGCJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOCBDLGCJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BBLFMIHBLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOCBDLGCJI_BBLFMIHBLAB_OFFSET))(this);
		}

		::System::Void GFIAFECIBJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAOCBDLGCJI_GFIAFECIBJL_OFFSET))(this, a1);
		}

	};

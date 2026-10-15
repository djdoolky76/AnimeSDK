#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define IDBPANIOMLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C8E0)
#define IDBPANIOMLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E5C910)

inline static constexpr unsigned int IDBPANIOMLJ_TypeDefinitionIndex = 55876;

	class IDBPANIOMLJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableEmotion*))((::PBYTE)hIl2Cpp + IDBPANIOMLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBPANIOMLJ_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class BLPDNBMFBDH;
namespace RPG::GameCore { class TaskContext; }

#define JCBMGHDOEME_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B42E0)
#define JCBMGHDOEME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8B4310)

inline static constexpr unsigned int JCBMGHDOEME_TypeDefinitionIndex = 54040;

	class JCBMGHDOEME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BLPDNBMFBDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BLPDNBMFBDH*))((::PBYTE)hIl2Cpp + JCBMGHDOEME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBMGHDOEME_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class BLPDNBMFBDH;
namespace RPG::GameCore { class TaskContext; }

#define JCBMGHDOEME_CTOR_OFFSET UNITYSDK_OFFSET(0x1657B000)
#define JCBMGHDOEME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1657B030)

inline static constexpr unsigned int JCBMGHDOEME_TypeDefinitionIndex = 52884;

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

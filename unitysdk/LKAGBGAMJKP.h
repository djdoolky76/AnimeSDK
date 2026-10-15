#pragma once
#include "unitysdk/unitysdk.h"
class GACAILJLLEH;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define LKAGBGAMJKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB721620)
#define LKAGBGAMJKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7217B0)
#define LKAGBGAMJKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7216A0)
#define LKAGBGAMJKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB721760)
#define LKAGBGAMJKP__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7217F0)

inline static constexpr unsigned int LKAGBGAMJKP_TypeDefinitionIndex = 52669;

	class LKAGBGAMJKP
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GACAILJLLEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GACAILJLLEH*))((::PBYTE)hIl2Cpp + LKAGBGAMJKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAGBGAMJKP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAGBGAMJKP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAGBGAMJKP_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAGBGAMJKP__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
class LKENCEGEOHA;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }

#define HHFLJFMHBEK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C18140)
#define HHFLJFMHBEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C18170)
#define HHFLJFMHBEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C181B0)

inline static constexpr unsigned int HHFLJFMHBEK_TypeDefinitionIndex = 55065;

	class HHFLJFMHBEK
	{
	public:
		::RPG::GameCore::ArrayPoolWrapper_1<::MNBNFBAMKKI*> HEJKAKEJCMP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LKENCEGEOHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LKENCEGEOHA*))((::PBYTE)hIl2Cpp + HHFLJFMHBEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFLJFMHBEK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFLJFMHBEK_ONTASKBEGIN_OFFSET))(this);
		}

	};

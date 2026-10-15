#pragma once
#include "unitysdk/unitysdk.h"
class IKAHOOLKHDN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EHKBCCHHBDF_CTOR_OFFSET UNITYSDK_OFFSET(0x154A1370)
#define EHKBCCHHBDF_JJNLKPGLJHF_OFFSET UNITYSDK_OFFSET(0x154A1620)
#define EHKBCCHHBDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154A13A0)

inline static constexpr unsigned int EHKBCCHHBDF_TypeDefinitionIndex = 58716;

	class EHKBCCHHBDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IKAHOOLKHDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IKAHOOLKHDN*))((::PBYTE)hIl2Cpp + EHKBCCHHBDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKBCCHHBDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* JJNLKPGLJHF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EHKBCCHHBDF_JJNLKPGLJHF_OFFSET))(this, a1);
		}

	};

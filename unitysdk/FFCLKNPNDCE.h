#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class GELIALJDFBL;
namespace RPG::GameCore { class SetDynamicValueByCharacterCount; }
namespace RPG::GameCore { class TaskContext; }

#define FFCLKNPNDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15726B10)
#define FFCLKNPNDCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157270B0)
#define FFCLKNPNDCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15726C80)

inline static constexpr unsigned int FFCLKNPNDCE_TypeDefinitionIndex = 55420;

	class FFCLKNPNDCE
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCharacterCount*))((::PBYTE)hIl2Cpp + FFCLKNPNDCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCLKNPNDCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCLKNPNDCE_DISPOSE_OFFSET))(this);
		}

	};

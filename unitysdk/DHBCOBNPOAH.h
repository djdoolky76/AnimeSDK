#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class MICBPNMPEFP;
namespace RPG::GameCore { class TaskContext; }

#define DHBCOBNPOAH_CTOR_OFFSET UNITYSDK_OFFSET(0xF435150)
#define DHBCOBNPOAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF435230)

inline static constexpr unsigned int DHBCOBNPOAH_TypeDefinitionIndex = 55039;

	class DHBCOBNPOAH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MICBPNMPEFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MICBPNMPEFP*))((::PBYTE)hIl2Cpp + DHBCOBNPOAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBCOBNPOAH_ONTASKBEGIN_OFFSET))(this);
		}

	};

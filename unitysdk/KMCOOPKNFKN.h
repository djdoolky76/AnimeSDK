#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RtCreateTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define KMCOOPKNFKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB53FB80)
#define KMCOOPKNFKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB53FC20)
#define KMCOOPKNFKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB53FCF0)

inline static constexpr unsigned int KMCOOPKNFKN_TypeDefinitionIndex = 53832;

	class KMCOOPKNFKN
	{
	public:
		::KFELGAIGHAP* OODBJDPKKKF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtCreateTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtCreateTrigger*))((::PBYTE)hIl2Cpp + KMCOOPKNFKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCOOPKNFKN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCOOPKNFKN_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class MHBOBKKNBAP;
namespace RPG::GameCore { class TaskContext; }

#define NFCHBMFDNMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC454080)
#define NFCHBMFDNMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4540B0)

inline static constexpr unsigned int NFCHBMFDNMK_TypeDefinitionIndex = 59933;

	class NFCHBMFDNMK
	{
	public:
		// static const ::System::String* NMCJLMAIEFA; // 0x0
		// static const ::System::String* FGNMDDCHKIN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MHBOBKKNBAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MHBOBKKNBAP*))((::PBYTE)hIl2Cpp + NFCHBMFDNMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCHBMFDNMK_ONTASKBEGIN_OFFSET))(this);
		}

	};

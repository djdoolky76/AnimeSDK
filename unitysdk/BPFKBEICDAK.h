#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BPFKBEICDAK;
class FCOEMCEDLNL;

#define BPFKBEICDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC4640)
#define BPFKBEICDAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBC4650)
#define BPFKBEICDAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBC4600)

inline static constexpr unsigned int BPFKBEICDAK_TypeDefinitionIndex = 23687;

	class BPFKBEICDAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 AALPICLABCO; // 0x1C
		::RPG::Client::TextID PJHMJKEIGOA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFKBEICDAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPFKBEICDAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPFKBEICDAK*))((::PBYTE)hIl2Cpp + BPFKBEICDAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BPFKBEICDAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPFKBEICDAK*))((::PBYTE)hIl2Cpp + BPFKBEICDAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BPFKBEICDAK;
class FCOEMCEDLNL;

#define BPFKBEICDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC290)
#define BPFKBEICDAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9CC2A0)
#define BPFKBEICDAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CC250)

inline static constexpr unsigned int BPFKBEICDAK_TypeDefinitionIndex = 23247;

	class BPFKBEICDAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID PJHMJKEIGOA; // 0x18
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 AALPICLABCO; // 0x2C
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

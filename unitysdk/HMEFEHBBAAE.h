#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HMEFEHBBAAE;

#define HMEFEHBBAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE94B30)
#define HMEFEHBBAAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE94B40)
#define HMEFEHBBAAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE94B00)

inline static constexpr unsigned int HMEFEHBBAAE_TypeDefinitionIndex = 10230;

	class HMEFEHBBAAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DMKJAJLNEBK; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DKPOHCDMHBF; // 0x1C
		::System::UInt32 IHALCLABNOJ; // 0x20
		::System::UInt32 DFFLADLLADD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEFEHBBAAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HMEFEHBBAAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMEFEHBBAAE*))((::PBYTE)hIl2Cpp + HMEFEHBBAAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HMEFEHBBAAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMEFEHBBAAE*))((::PBYTE)hIl2Cpp + HMEFEHBBAAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

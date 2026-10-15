#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FKMKAAOPIKF;
namespace System { class String; }

#define FKMKAAOPIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD12B0)
#define FKMKAAOPIKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDD10F0)

inline static constexpr unsigned int FKMKAAOPIKF_TypeDefinitionIndex = 11643;

	class FKMKAAOPIKF : public ::System::Object
	{
	public:
		::System::String* BLKFELPDINH; // 0x10
		::System::UInt32 IHDKMCABFBO; // 0x18
		::System::UInt32 LLGEOLMFMAB; // 0x1C
		::RPG::GameCore::HipplenMiniGameType GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMKAAOPIKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FKMKAAOPIKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FKMKAAOPIKF*))((::PBYTE)hIl2Cpp + FKMKAAOPIKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

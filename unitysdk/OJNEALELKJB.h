#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OJNEALELKJB;

#define OJNEALELKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E491EE0)
#define OJNEALELKJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E491C50)

inline static constexpr unsigned int OJNEALELKJB_TypeDefinitionIndex = 12546;

	class OJNEALELKJB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x10
		::RPG::Client::TextID NMAHGFAPENI; // 0x18
		::System::Boolean GNLGHALIPLD; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x2C
		::RPG::GameCore::TeamTowersStatisticType GMPGDEINODK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNEALELKJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OJNEALELKJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OJNEALELKJB*))((::PBYTE)hIl2Cpp + OJNEALELKJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

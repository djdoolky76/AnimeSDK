#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MCMGOPIDDMJ;
namespace System { class String; }

#define MCMGOPIDDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D110E40)
#define MCMGOPIDDMJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D110B20)

inline static constexpr unsigned int MCMGOPIDDMJ_TypeDefinitionIndex = 11498;

	class MCMGOPIDDMJ : public ::System::Object
	{
	public:
		::System::String* KILFKBDMJGI; // 0x10
		::System::String* FLLGGNAPJOI; // 0x18
		::System::String* HOGDKNENKMB; // 0x20
		::System::UInt32 EMFGEFNHOIB; // 0x28
		::System::UInt32 DOBKKDIECDO; // 0x2C
		::RPG::GameCore::FateClazzType BKKAOIBLCJG; // 0x30
		::System::UInt32 KJKMDFEJIJJ; // 0x34
		::RPG::Client::TextID PMGABBELKNG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMGOPIDDMJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCMGOPIDDMJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCMGOPIDDMJ*))((::PBYTE)hIl2Cpp + MCMGOPIDDMJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

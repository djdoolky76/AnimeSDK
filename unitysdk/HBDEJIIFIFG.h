#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HBDEJIIFIFG;

#define HBDEJIIFIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E060C90)
#define HBDEJIIFIFG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E060A90)

inline static constexpr unsigned int HBDEJIIFIFG_TypeDefinitionIndex = 14081;

	class HBDEJIIFIFG : public ::System::Object
	{
	public:
		::System::UInt32 JAKLCIIEDON; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DNJCIDFBHPC; // 0x18
		::System::UInt32 HFFBGDNDBHC; // 0x28
		::System::UInt32 AHCGOKDLKHM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDEJIIFIFG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HBDEJIIFIFG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBDEJIIFIFG*))((::PBYTE)hIl2Cpp + HBDEJIIFIFG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

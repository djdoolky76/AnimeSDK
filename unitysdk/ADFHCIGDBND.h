#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define ADFHCIGDBND_BPMOHECPBON_OFFSET UNITYSDK_OFFSET(0xB136000)
#define ADFHCIGDBND_CTOR_OFFSET UNITYSDK_OFFSET(0xB135F50)
#define ADFHCIGDBND_DGFJLJPLKKC_OFFSET UNITYSDK_OFFSET(0xB136050)
#define ADFHCIGDBND_ELJIIKJFGCI_OFFSET UNITYSDK_OFFSET(0xB1360F0)
#define ADFHCIGDBND_FHPCJAEOMJG_OFFSET UNITYSDK_OFFSET(0xB136280)
#define ADFHCIGDBND_GAFENHHEBPG_OFFSET UNITYSDK_OFFSET(0xB135FB0)
#define ADFHCIGDBND_GCNDKHEPBCE_OFFSET UNITYSDK_OFFSET(0xB135F60)
#define ADFHCIGDBND_IPACCGINEAG_OFFSET UNITYSDK_OFFSET(0xB1360A0)
#define ADFHCIGDBND_JMKOAHBFANB_OFFSET UNITYSDK_OFFSET(0xB1361D0)
#define ADFHCIGDBND_MMNELBFMJOF_OFFSET UNITYSDK_OFFSET(0xB119CE0)

inline static constexpr unsigned int ADFHCIGDBND_TypeDefinitionIndex = 76535;

	class ADFHCIGDBND : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HEEPMBBDEAO; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ADFHCIGDBND_CTOR_OFFSET))(this, a1);
		}

		::System::Single GCNDKHEPBCE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_GCNDKHEPBCE_OFFSET))(this);
		}

		::System::Single GAFENHHEBPG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_GAFENHHEBPG_OFFSET))(this);
		}

		::System::Single BPMOHECPBON()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_BPMOHECPBON_OFFSET))(this);
		}

		::System::Single MMNELBFMJOF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_MMNELBFMJOF_OFFSET))(this);
		}

		::System::Single DGFJLJPLKKC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_DGFJLJPLKKC_OFFSET))(this);
		}

		::System::Single IPACCGINEAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_IPACCGINEAG_OFFSET))(this);
		}

		::System::UInt32 ELJIIKJFGCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_ELJIIKJFGCI_OFFSET))(this);
		}

		::System::UInt64 JMKOAHBFANB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_JMKOAHBFANB_OFFSET))(this);
		}

		::System::Single FHPCJAEOMJG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHCIGDBND_FHPCJAEOMJG_OFFSET))(this);
		}

	};

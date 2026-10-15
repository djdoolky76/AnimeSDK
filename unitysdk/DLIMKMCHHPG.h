#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraShowJumpText; }

#define DLIMKMCHHPG_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A09D0)
#define DLIMKMCHHPG_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xF8A0A10)
#define DLIMKMCHHPG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xF8A0A50)

inline static constexpr unsigned int DLIMKMCHHPG_TypeDefinitionIndex = 78418;

	class DLIMKMCHHPG : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::GameCore::ChimeraShowJumpText* IGHAHBNLIJA; // 0x18
		::System::UInt32 AJLJMGEEKOJ; // 0x20
		::System::UInt32 NCBAPGKFFJA; // 0x24
		::System::Void _ctor(::RPG::GameCore::ChimeraShowJumpText* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraShowJumpText*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLIMKMCHHPG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIMKMCHHPG_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIMKMCHHPG_NPAFMEBNFOB_OFFSET))(this);
		}

	};

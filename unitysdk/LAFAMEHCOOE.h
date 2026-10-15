#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class DHOKPKHPKCH;
class LAFAMEHCOOE;

#define LAFAMEHCOOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5DD940)
#define LAFAMEHCOOE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5DD9B0)
#define LAFAMEHCOOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DDB80)
#define LAFAMEHCOOE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB5DDA00)

inline static constexpr unsigned int LAFAMEHCOOE_TypeDefinitionIndex = 65876;

	class LAFAMEHCOOE : public ::MLKDDLHNNHH
	{
	public:
		::DHOKPKHPKCH* MJKBBDNJFDN; // 0x20
		::System::UInt32 IGDOFKLAILH; // 0x28
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x2C
		::System::Boolean DKKJNPPHDPM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFAMEHCOOE_CTOR_OFFSET))(this);
		}

		static ::LAFAMEHCOOE* BPLPBPMEODA()
		{
			return ((::LAFAMEHCOOE*(*)())((::PBYTE)hIl2Cpp + LAFAMEHCOOE_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFAMEHCOOE_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFAMEHCOOE_ONEXECUTE_OFFSET))(this);
		}

	};

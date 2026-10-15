#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class DHOKPKHPKCH;
class LAFAMEHCOOE;

#define LAFAMEHCOOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5D6FC0)
#define LAFAMEHCOOE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5D7030)
#define LAFAMEHCOOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D7210)
#define LAFAMEHCOOE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB5D7090)

inline static constexpr unsigned int LAFAMEHCOOE_TypeDefinitionIndex = 65876;

	class LAFAMEHCOOE : public ::MLKDDLHNNHH
	{
	public:
		::DHOKPKHPKCH* MJKBBDNJFDN; // 0x20
		::System::Boolean DKKJNPPHDPM; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x2C
		::System::UInt32 IGDOFKLAILH; // 0x30
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

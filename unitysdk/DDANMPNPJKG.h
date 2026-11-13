#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class DDANMPNPJKG;

#define DDANMPNPJKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17729BA0)
#define DDANMPNPJKG_CLEAR_OFFSET UNITYSDK_OFFSET(0x17729C10)
#define DDANMPNPJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x17729EF0)
#define DDANMPNPJKG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17729C70)

inline static constexpr unsigned int DDANMPNPJKG_TypeDefinitionIndex = 67810;

	class DDANMPNPJKG : public ::MLKDDLHNNHH
	{
	public:
		::System::Boolean BCDBBCEILIC; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x24
		::System::UInt32 CMNNGJKFIOM; // 0x28
		::System::UInt32 GACEMBBAGMP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDANMPNPJKG_CTOR_OFFSET))(this);
		}

		static ::DDANMPNPJKG* BPLPBPMEODA()
		{
			return ((::DDANMPNPJKG*(*)())((::PBYTE)hIl2Cpp + DDANMPNPJKG_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDANMPNPJKG_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDANMPNPJKG_ONEXECUTE_OFFSET))(this);
		}

	};

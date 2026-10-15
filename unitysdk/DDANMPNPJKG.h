#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class DDANMPNPJKG;

#define DDANMPNPJKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE2572E0)
#define DDANMPNPJKG_CLEAR_OFFSET UNITYSDK_OFFSET(0xE257350)
#define DDANMPNPJKG_CTOR_OFFSET UNITYSDK_OFFSET(0xE257630)
#define DDANMPNPJKG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE2573B0)

inline static constexpr unsigned int DDANMPNPJKG_TypeDefinitionIndex = 65878;

	class DDANMPNPJKG : public ::MLKDDLHNNHH
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x20
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x24
		::System::UInt32 CMNNGJKFIOM; // 0x28
		::System::Boolean BCDBBCEILIC; // 0x2C
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

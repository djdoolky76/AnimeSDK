#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFDICJPCHG.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class Object; }

#define NHINAMJJABO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC5C80)
#define NHINAMJJABO_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xBBC5C90)
#define NHINAMJJABO_KADGJPFHBCC_OFFSET UNITYSDK_OFFSET(0xBBC5D30)

inline static constexpr unsigned int NHINAMJJABO_TypeDefinitionIndex = 67250;

	class NHINAMJJABO : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* DJBJGPGCGBC; // 0x10
		::BNFDICJPCHG LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::BNFDICJPCHG a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFDICJPCHG))((::PBYTE)hIl2Cpp + NHINAMJJABO_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHINAMJJABO_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueMagicUnitDataItem* KADGJPFHBCC()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHINAMJJABO_KADGJPFHBCC_OFFSET))(this);
		}

	};

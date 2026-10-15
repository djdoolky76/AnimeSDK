#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJOLMBPBPC;
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }

#define LEJOLMBPBPC_ABIKAJFPHPO_OFFSET UNITYSDK_OFFSET(0xB651AB0)
#define LEJOLMBPBPC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB651B00)
#define LEJOLMBPBPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB651C30)
#define LEJOLMBPBPC_IHEFFDKFAOA_OFFSET UNITYSDK_OFFSET(0xB6519F0)

inline static constexpr unsigned int LEJOLMBPBPC_TypeDefinitionIndex = 74421;

	class LEJOLMBPBPC : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicSetConfigRow* NFMNGLLACDK; // 0x10
		::RPG::Client::ItemData* KPFKDKLCFKG; // 0x18
		::System::Void _ctor(::RPG::GameCore::RelicSetConfigRow* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicSetConfigRow*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + LEJOLMBPBPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* IHEFFDKFAOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJOLMBPBPC_IHEFFDKFAOA_OFFSET))(this);
		}

		::System::UInt32 ABIKAJFPHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJOLMBPBPC_ABIKAJFPHPO_OFFSET))(this);
		}

		static ::LEJOLMBPBPC* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::LEJOLMBPBPC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LEJOLMBPBPC_BPLPBPMEODA_OFFSET))(a1);
		}

	};

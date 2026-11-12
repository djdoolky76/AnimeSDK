#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueMagicOptionalLayerGate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AOHCOJBNAHP_AKBFGAMFKFB_OFFSET UNITYSDK_OFFSET(0x16724220)
#define AOHCOJBNAHP_CTOR_OFFSET UNITYSDK_OFFSET(0x16723B30)
#define AOHCOJBNAHP_DAAHFEAMMKK_OFFSET UNITYSDK_OFFSET(0x16724060)
#define AOHCOJBNAHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16724170)
#define AOHCOJBNAHP_JNHALNIKMEB_OFFSET UNITYSDK_OFFSET(0x167241C0)
#define AOHCOJBNAHP_KHNLNNPJLDE_OFFSET UNITYSDK_OFFSET(0x16724270)
#define AOHCOJBNAHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16723BA0)
#define AOHCOJBNAHP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16724120)
#define AOHCOJBNAHP_TICK_OFFSET UNITYSDK_OFFSET(0x16723B40)

inline static constexpr unsigned int AOHCOJBNAHP_TypeDefinitionIndex = 59725;

	class AOHCOJBNAHP : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicOptionalLayerGate*))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_DISPOSE_OFFSET))(this);
		}

		::System::Void JNHALNIKMEB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_JNHALNIKMEB_OFFSET))(this, a1, a2);
		}

		::System::Void DAAHFEAMMKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_DAAHFEAMMKK_OFFSET))(this);
		}

		::System::Void AKBFGAMFKFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_AKBFGAMFKFB_OFFSET))(this);
		}

		::System::UInt32 KHNLNNPJLDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHCOJBNAHP_KHNLNNPJLDE_OFFSET))(this);
		}

	};

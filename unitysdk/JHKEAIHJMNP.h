#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"
class FMPCODLIOLG;
class JHKEAIHJMNP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JHKEAIHJMNP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1B9EE0)
#define JHKEAIHJMNP_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0xB1BA640)
#define JHKEAIHJMNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1BA0B0)
#define JHKEAIHJMNP_DBJIDJAMDHD_OFFSET UNITYSDK_OFFSET(0xB1BA230)
#define JHKEAIHJMNP_GPIDBEDJJBB_OFFSET UNITYSDK_OFFSET(0xB1BA370)
#define JHKEAIHJMNP_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB1BA310)
#define JHKEAIHJMNP_KLGAGBMENLB_OFFSET UNITYSDK_OFFSET(0xB1BA500)
#define JHKEAIHJMNP_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB1BA410)

inline static constexpr unsigned int JHKEAIHJMNP_TypeDefinitionIndex = 71655;

	class JHKEAIHJMNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::FMPCODLIOLG*>* GANFMEPNBJK; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* MGCLEGKHOCB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_CTOR_OFFSET))(this);
		}

		static ::JHKEAIHJMNP* BPLPBPMEODA(::RPG::GameCore::BattleUIPanelType a1)
		{
			return ((::JHKEAIHJMNP*(*)(::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DBJIDJAMDHD(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_DBJIDJAMDHD_OFFSET))(this, a1);
		}

		::System::Void GPIDBEDJJBB(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_GPIDBEDJJBB_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_NJOBMENFBFJ_OFFSET))(this, a1, a2);
		}

		::System::Void BPMMEHNOOFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_BPMMEHNOOFG_OFFSET))(this);
		}

		::System::Void KLGAGBMENLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_KLGAGBMENLB_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEAIHJMNP_JKEONEEPIHH_OFFSET))(this);
		}

	};

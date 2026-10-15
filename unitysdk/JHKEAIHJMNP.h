#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"
class FMPCODLIOLG;
class JHKEAIHJMNP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JHKEAIHJMNP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1B3B30)
#define JHKEAIHJMNP_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0xB1B4290)
#define JHKEAIHJMNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B3D00)
#define JHKEAIHJMNP_DBJIDJAMDHD_OFFSET UNITYSDK_OFFSET(0xB1B3E80)
#define JHKEAIHJMNP_GPIDBEDJJBB_OFFSET UNITYSDK_OFFSET(0xB1B3FC0)
#define JHKEAIHJMNP_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB1B3F60)
#define JHKEAIHJMNP_KLGAGBMENLB_OFFSET UNITYSDK_OFFSET(0xB1B4150)
#define JHKEAIHJMNP_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB1B4060)

inline static constexpr unsigned int JHKEAIHJMNP_TypeDefinitionIndex = 71654;

	class JHKEAIHJMNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* MGCLEGKHOCB; // 0x10
		::System::Collections::Generic::HashSet_1<::FMPCODLIOLG*>* GANFMEPNBJK; // 0x18
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

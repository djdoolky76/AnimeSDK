#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"
class AFOPMEOBPCM;
class FMPCODLIOLG;
class JHKEAIHJMNP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFOPMEOBPCM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF1D470)
#define AFOPMEOBPCM_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0xCF1DA80)
#define AFOPMEOBPCM_CIEMJNMCKBL_OFFSET UNITYSDK_OFFSET(0xCF1D8B0)
#define AFOPMEOBPCM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1D520)
#define AFOPMEOBPCM_DBJIDJAMDHD_OFFSET UNITYSDK_OFFSET(0xCF1D5A0)
#define AFOPMEOBPCM_GPIDBEDJJBB_OFFSET UNITYSDK_OFFSET(0xCF1D6F0)
#define AFOPMEOBPCM_IGCKNBMHNGI_OFFSET UNITYSDK_OFFSET(0xCF1DCA0)
#define AFOPMEOBPCM_IJIFLAMHLLG_OFFSET UNITYSDK_OFFSET(0xCF1D7C0)

	class AFOPMEOBPCM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleUIPanelType, ::JHKEAIHJMNP*>* DDBEJLMCKHH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_CTOR_OFFSET))(this);
		}

		static ::AFOPMEOBPCM* BPLPBPMEODA()
		{
			return ((::AFOPMEOBPCM*(*)())((::PBYTE)hIl2Cpp + AFOPMEOBPCM_BPLPBPMEODA_OFFSET))();
		}

		::System::Void DBJIDJAMDHD(::RPG::GameCore::BattleUIPanelType a1, ::FMPCODLIOLG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_DBJIDJAMDHD_OFFSET))(this, a1, a2);
		}

		::System::Void GPIDBEDJJBB(::RPG::GameCore::BattleUIPanelType a1, ::FMPCODLIOLG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_GPIDBEDJJBB_OFFSET))(this, a1, a2);
		}

		::System::Void IJIFLAMHLLG(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_IJIFLAMHLLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CIEMJNMCKBL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_CIEMJNMCKBL_OFFSET))(this, a1);
		}

		::System::Void BPMMEHNOOFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_BPMMEHNOOFG_OFFSET))(this);
		}

		::System::Boolean IGCKNBMHNGI(::RPG::GameCore::BattleUIPanelType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + AFOPMEOBPCM_IGCKNBMHNGI_OFFSET))(this, a1);
		}

	};

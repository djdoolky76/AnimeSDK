#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"
class AFOPMEOBPCM;
class FMPCODLIOLG;
class JHKEAIHJMNP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFOPMEOBPCM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF16060)
#define AFOPMEOBPCM_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0xCF16670)
#define AFOPMEOBPCM_CIEMJNMCKBL_OFFSET UNITYSDK_OFFSET(0xCF164A0)
#define AFOPMEOBPCM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF16110)
#define AFOPMEOBPCM_DBJIDJAMDHD_OFFSET UNITYSDK_OFFSET(0xCF16190)
#define AFOPMEOBPCM_GPIDBEDJJBB_OFFSET UNITYSDK_OFFSET(0xCF162E0)
#define AFOPMEOBPCM_IGCKNBMHNGI_OFFSET UNITYSDK_OFFSET(0xCF16890)
#define AFOPMEOBPCM_IJIFLAMHLLG_OFFSET UNITYSDK_OFFSET(0xCF163B0)

inline static constexpr unsigned int AFOPMEOBPCM_TypeDefinitionIndex = 71653;

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

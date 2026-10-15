#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOJOAHKGOBI;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define DMMEEFLCJEN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xFEBEF30)
#define DMMEEFLCJEN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xFEBED20)
#define DMMEEFLCJEN_CEOCLJDDFAB_OFFSET UNITYSDK_OFFSET(0xFEBF280)
#define DMMEEFLCJEN_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBF5F0)
#define DMMEEFLCJEN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xFEBF170)
#define DMMEEFLCJEN_KIFCPJNJLDA_OFFSET UNITYSDK_OFFSET(0xFEBF2E0)
#define DMMEEFLCJEN_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xFEBEE80)
#define DMMEEFLCJEN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xFEBEFD0)

inline static constexpr unsigned int DMMEEFLCJEN_TypeDefinitionIndex = 71637;

	class DMMEEFLCJEN : public ::System::Object
	{
	public:
		::OOJOAHKGOBI* NHNHKBJJKPP; // 0x10
		::System::String* FADILKPGCEM; // 0x18
		::RPG::Client::UIController* CFKHNPGEAJA; // 0x20
		::RPG::Client::IAssetOperation* DKCONOOEOBK; // 0x28
		::System::String* MGFNJPADMPO; // 0x30
		::System::String* ENLGFOEJAJE; // 0x38
		::System::String* GLGOFGALBHP; // 0x40
		::System::Boolean BPDHNDFMINI; // 0x48
		::System::Boolean FIOCJFMLCIB; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_CTOR_OFFSET))(this);
		}

		::System::Void BPLPBPMEODA(::RPG::Client::UIController* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void CEOCLJDDFAB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_CEOCLJDDFAB_OFFSET))(this, a1);
		}

		::System::Boolean KIFCPJNJLDA(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_KIFCPJNJLDA_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMEEFLCJEN_KANMCJHEFJJ_OFFSET))(this);
		}

	};

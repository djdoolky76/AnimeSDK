#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class IAPDBOKPNGL;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHOLJJOHPDN_AEOAJANLCMF_OFFSET UNITYSDK_OFFSET(0xB1C8BF0)
#define JHOLJJOHPDN_AHJNNFOCAFA_OFFSET UNITYSDK_OFFSET(0xB1C8C00)
#define JHOLJJOHPDN_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0xB1C8CB0)
#define JHOLJJOHPDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C8EF0)
#define JHOLJJOHPDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1C8B40)
#define JHOLJJOHPDN_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0xB1C8E00)
#define JHOLJJOHPDN_IHPDHGJDNNL_OFFSET UNITYSDK_OFFSET(0xB1C8E90)
#define JHOLJJOHPDN_KCECPFHECDA_OFFSET UNITYSDK_OFFSET(0xB1C8C10)
#define JHOLJJOHPDN_PCLBMKDPCON_OFFSET UNITYSDK_OFFSET(0xB1C8C60)

	class JHOLJJOHPDN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::IAPDBOKPNGL*>* ECFJGIDAMMC; // 0x18
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AEOAJANLCMF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_AEOAJANLCMF_OFFSET))(this);
		}

		::System::Void AHJNNFOCAFA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_AHJNNFOCAFA_OFFSET))(this, a1);
		}

		::System::Void KCECPFHECDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_KCECPFHECDA_OFFSET))(this, a1);
		}

		::System::Void PCLBMKDPCON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_PCLBMKDPCON_OFFSET))(this);
		}

		::System::Void AIEHMLPBHCG(::IAPDBOKPNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAPDBOKPNGL*))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_AIEHMLPBHCG_OFFSET))(this, a1);
		}

		::System::Void FEADNMNABOL(::IAPDBOKPNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAPDBOKPNGL*))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_FEADNMNABOL_OFFSET))(this, a1);
		}

		::System::Boolean IHPDHGJDNNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLJJOHPDN_IHPDHGJDNNL_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CKODJIFHIPI;
class KILLLKIAIDO;
namespace RPG::Client { class BattleMonsterCustomizedWeaknessSource; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDOPGBJHDKF_CKCJMAHPDCK_OFFSET UNITYSDK_OFFSET(0xB7BC250)
#define BDOPGBJHDKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BC3B0)
#define BDOPGBJHDKF_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB7BBFB0)
#define BDOPGBJHDKF_PACMHPGMNAM_OFFSET UNITYSDK_OFFSET(0xB7BC050)
#define BDOPGBJHDKF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7BC190)
#define BDOPGBJHDKF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7BC1F0)

inline static constexpr unsigned int BDOPGBJHDKF_TypeDefinitionIndex = 73792;

	class BDOPGBJHDKF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleMonsterCustomizedWeaknessSource* BPKKKMOCFIP; // 0x60
		::RPG::Client::NodeListViewPanel_1<::CKODJIFHIPI*>* HLMNPOPCCAG; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOPGBJHDKF_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::BattleMonsterCustomizedWeaknessSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleMonsterCustomizedWeaknessSource*))((::PBYTE)hIl2Cpp + BDOPGBJHDKF_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOPGBJHDKF__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOPGBJHDKF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PACMHPGMNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOPGBJHDKF_PACMHPGMNAM_OFFSET))(this);
		}

		static ::System::Boolean CKCJMAHPDCK(::KILLLKIAIDO* a1, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>* a2)
		{
			return ((::System::Boolean(*)(::KILLLKIAIDO*, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>*))((::PBYTE)hIl2Cpp + BDOPGBJHDKF_CKCJMAHPDCK_OFFSET))(a1, a2);
		}

	};

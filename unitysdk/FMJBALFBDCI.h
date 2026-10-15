#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
class KPCDEJGJHBK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FMJBALFBDCI_AJCPJODNBNI_OFFSET UNITYSDK_OFFSET(0x15851D10)
#define FMJBALFBDCI_AKBEIDBENGE_OFFSET UNITYSDK_OFFSET(0x15851360)
#define FMJBALFBDCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x158537E0)
#define FMJBALFBDCI_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0x15851720)
#define FMJBALFBDCI_CMOHHNBILEG_OFFSET UNITYSDK_OFFSET(0x15852420)
#define FMJBALFBDCI_CTOR_OFFSET UNITYSDK_OFFSET(0x158537D0)
#define FMJBALFBDCI_FOLONILFHDA_OFFSET UNITYSDK_OFFSET(0x15851B10)
#define FMJBALFBDCI_GEKDIBHPALM_OFFSET UNITYSDK_OFFSET(0x158530B0)
#define FMJBALFBDCI_GGHBPHDFFKM_OFFSET UNITYSDK_OFFSET(0x15852D80)
#define FMJBALFBDCI_GNHJBHHHNPA_OFFSET UNITYSDK_OFFSET(0x15853630)
#define FMJBALFBDCI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x158534B0)
#define FMJBALFBDCI_IGAPAICGEKN_OFFSET UNITYSDK_OFFSET(0x15852310)
#define FMJBALFBDCI_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0x15850E50)
#define FMJBALFBDCI_IKCKFKPPBPK_OFFSET UNITYSDK_OFFSET(0x158532D0)
#define FMJBALFBDCI_JHMGDOGHGDO_OFFSET UNITYSDK_OFFSET(0x158527F0)
#define FMJBALFBDCI_JONDDCEHAAJ_OFFSET UNITYSDK_OFFSET(0x15851530)
#define FMJBALFBDCI_KOJKDBKGKDM_OFFSET UNITYSDK_OFFSET(0x15853060)
#define FMJBALFBDCI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x158512C0)
#define FMJBALFBDCI_MDLBJJCNMMH_OFFSET UNITYSDK_OFFSET(0x158519A0)
#define FMJBALFBDCI_ODECMFPPJNE_OFFSET UNITYSDK_OFFSET(0x158533C0)
#define FMJBALFBDCI_OGKCIENPDME_OFFSET UNITYSDK_OFFSET(0x15852D20)
#define FMJBALFBDCI_PIGLEIKPIBG_OFFSET UNITYSDK_OFFSET(0x15852370)
#define FMJBALFBDCI_PIOGNBDJOAM_OFFSET UNITYSDK_OFFSET(0x158511F0)

inline static constexpr unsigned int FMJBALFBDCI_TypeDefinitionIndex = 79122;

	class FMJBALFBDCI : public ::MKHNMHOHEAK
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EBENFPDMCEI; // 0x18
		::FiveDimRenderingPanelRuntime* JHBKPBHIJPM; // 0x20
		::KPCDEJGJHBK* EKKFNDCBGHE; // 0x28
		::Il2CppArray<::FiveDimRenderingItem*>* HCMPGFIMIFH; // 0x30
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* EPJNGDLFCMF; // 0x38
		::RPG::GameCore::FDRIStateMaskEnum LLBADFLDEIA; // 0x40
		::System::Boolean BPBMPCPDPNJ; // 0x44
		::System::Boolean ENNIAANJOFD; // 0x45
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType OHMCFMNMCEJ; // 0x46
		::System::Single PCOMMLHHNOA; // 0x48
		static ::System::Int32* StaticGet_JLOOPJJPBLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMJBALFBDCI")->GetStaticField(0x120A0);
		}

		// static const ::System::Object OLEIDKBKEOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJBALFBDCI_CCTOR_OFFSET))();
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + FMJBALFBDCI_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::KPCDEJGJHBK* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*, ::System::Single))((::PBYTE)hIl2Cpp + FMJBALFBDCI_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + FMJBALFBDCI_CGNOBOOCGNB_OFFSET))(this, a1);
		}

		::System::Void AJCPJODNBNI(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJBALFBDCI_AJCPJODNBNI_OFFSET))(this, a1, a2);
		}

		::System::Void OGKCIENPDME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_OGKCIENPDME_OFFSET))(this);
		}

		::System::Void KOJKDBKGKDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_KOJKDBKGKDM_OFFSET))(this);
		}

		::System::Void JHMGDOGHGDO(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJBALFBDCI_JHMGDOGHGDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMOHHNBILEG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJBALFBDCI_CMOHHNBILEG_OFFSET))(this, a1);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void GNHJBHHHNPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_GNHJBHHHNPA_OFFSET))(this);
		}

		::System::Void GGHBPHDFFKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJBALFBDCI_GGHBPHDFFKM_OFFSET))(this, a1);
		}

		::System::Void GEKDIBHPALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_GEKDIBHPALM_OFFSET))(this);
		}

		::System::Void ODECMFPPJNE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FMJBALFBDCI_ODECMFPPJNE_OFFSET))(this, a1);
		}

		::Il2CppArray<::FiveDimRenderingItem*>* PIOGNBDJOAM()
		{
			return ((::Il2CppArray<::FiveDimRenderingItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_PIOGNBDJOAM_OFFSET))(this);
		}

		::System::Void IKCKFKPPBPK(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FMJBALFBDCI_IKCKFKPPBPK_OFFSET))(this, a1);
		}

		::System::Void MDLBJJCNMMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_MDLBJJCNMMH_OFFSET))(this);
		}

		::System::Void FOLONILFHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_FOLONILFHDA_OFFSET))(this);
		}

		::System::Void PIGLEIKPIBG(::RPG::GameCore::FDRIStateMaskEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FDRIStateMaskEnum))((::PBYTE)hIl2Cpp + FMJBALFBDCI_PIGLEIKPIBG_OFFSET))(this, a1);
		}

		::System::Boolean IGAPAICGEKN(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + FMJBALFBDCI_IGAPAICGEKN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AKBEIDBENGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJBALFBDCI_AKBEIDBENGE_OFFSET))(this);
		}

		::System::Void JONDDCEHAAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJBALFBDCI_JONDDCEHAAJ_OFFSET))(this, a1);
		}

	};

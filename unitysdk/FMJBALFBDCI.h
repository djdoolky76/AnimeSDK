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

#define FMJBALFBDCI_AJCPJODNBNI_OFFSET UNITYSDK_OFFSET(0x1585DA80)
#define FMJBALFBDCI_AKBEIDBENGE_OFFSET UNITYSDK_OFFSET(0x1585D0D0)
#define FMJBALFBDCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1585F550)
#define FMJBALFBDCI_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0x1585D490)
#define FMJBALFBDCI_CMOHHNBILEG_OFFSET UNITYSDK_OFFSET(0x1585E190)
#define FMJBALFBDCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1585F540)
#define FMJBALFBDCI_FOLONILFHDA_OFFSET UNITYSDK_OFFSET(0x1585D880)
#define FMJBALFBDCI_GEKDIBHPALM_OFFSET UNITYSDK_OFFSET(0x1585EE20)
#define FMJBALFBDCI_GGHBPHDFFKM_OFFSET UNITYSDK_OFFSET(0x1585EAF0)
#define FMJBALFBDCI_GNHJBHHHNPA_OFFSET UNITYSDK_OFFSET(0x1585F3A0)
#define FMJBALFBDCI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1585F220)
#define FMJBALFBDCI_IGAPAICGEKN_OFFSET UNITYSDK_OFFSET(0x1585E080)
#define FMJBALFBDCI_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0x1585CBC0)
#define FMJBALFBDCI_IKCKFKPPBPK_OFFSET UNITYSDK_OFFSET(0x1585F040)
#define FMJBALFBDCI_JHMGDOGHGDO_OFFSET UNITYSDK_OFFSET(0x1585E560)
#define FMJBALFBDCI_JONDDCEHAAJ_OFFSET UNITYSDK_OFFSET(0x1585D2A0)
#define FMJBALFBDCI_KOJKDBKGKDM_OFFSET UNITYSDK_OFFSET(0x1585EDD0)
#define FMJBALFBDCI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1585D030)
#define FMJBALFBDCI_MDLBJJCNMMH_OFFSET UNITYSDK_OFFSET(0x1585D710)
#define FMJBALFBDCI_ODECMFPPJNE_OFFSET UNITYSDK_OFFSET(0x1585F130)
#define FMJBALFBDCI_OGKCIENPDME_OFFSET UNITYSDK_OFFSET(0x1585EA90)
#define FMJBALFBDCI_PIGLEIKPIBG_OFFSET UNITYSDK_OFFSET(0x1585E0E0)
#define FMJBALFBDCI_PIOGNBDJOAM_OFFSET UNITYSDK_OFFSET(0x1585CF60)

	class FMJBALFBDCI : public ::MKHNMHOHEAK
	{
	public:
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* EPJNGDLFCMF; // 0x18
		::FiveDimRenderingPanelRuntime* JHBKPBHIJPM; // 0x20
		::Il2CppArray<::FiveDimRenderingItem*>* HCMPGFIMIFH; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EBENFPDMCEI; // 0x30
		::KPCDEJGJHBK* EKKFNDCBGHE; // 0x38
		::System::Single PCOMMLHHNOA; // 0x40
		::System::Boolean ENNIAANJOFD; // 0x44
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType OHMCFMNMCEJ; // 0x45
		::System::Boolean BPBMPCPDPNJ; // 0x46
		::System::Byte _padding0[0x1];
		::RPG::GameCore::FDRIStateMaskEnum LLBADFLDEIA; // 0x48
		static ::System::Int32* StaticGet_JLOOPJJPBLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMJBALFBDCI")->GetStaticField(0x13420);
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

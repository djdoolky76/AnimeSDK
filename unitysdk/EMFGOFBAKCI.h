#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFNBLNHMHGO;
class NNMCPNJFPJE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define EMFGOFBAKCI_AFGMDEIOALL_OFFSET UNITYSDK_OFFSET(0x1647FAD0)
#define EMFGOFBAKCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1647EC40)
#define EMFGOFBAKCI_DDAAGEDOEFO_OFFSET UNITYSDK_OFFSET(0x16480790)
#define EMFGOFBAKCI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1647EC50)
#define EMFGOFBAKCI_EAAMOBBKNKP_OFFSET UNITYSDK_OFFSET(0x1647FEE0)
#define EMFGOFBAKCI_ENTER_OFFSET UNITYSDK_OFFSET(0x1647F000)
#define EMFGOFBAKCI_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1647FA80)
#define EMFGOFBAKCI_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x16480D30)
#define EMFGOFBAKCI_IBADDOANBOL_OFFSET UNITYSDK_OFFSET(0x164802F0)
#define EMFGOFBAKCI_JBNHADDJMHK_OFFSET UNITYSDK_OFFSET(0x1647F930)
#define EMFGOFBAKCI_KPKLEJFGPHO_OFFSET UNITYSDK_OFFSET(0x16480450)
#define EMFGOFBAKCI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1647F870)
#define EMFGOFBAKCI_LEAVE_OFFSET UNITYSDK_OFFSET(0x1647F8D0)
#define EMFGOFBAKCI_LIDNMEKODDJ_OFFSET UNITYSDK_OFFSET(0x16480040)
#define EMFGOFBAKCI_LJNHGNIODAN_OFFSET UNITYSDK_OFFSET(0x16480BD0)
#define EMFGOFBAKCI_NANHLLEMMEB_OFFSET UNITYSDK_OFFSET(0x16480910)
#define EMFGOFBAKCI_NFCHIJLOLGB_OFFSET UNITYSDK_OFFSET(0x164808B0)
#define EMFGOFBAKCI_OHNIGCLLONB_OFFSET UNITYSDK_OFFSET(0x1647FC30)
#define EMFGOFBAKCI_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x16480D40)
#define EMFGOFBAKCI_TICK_OFFSET UNITYSDK_OFFSET(0x1647F810)

inline static constexpr unsigned int EMFGOFBAKCI_TypeDefinitionIndex = 62332;

	class EMFGOFBAKCI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* FEFANNGMKDO; // 0x10
		::UnityEngine::Object* DCIIKEDBOKO; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CJANCKPPAHO; // 0x20
		::UnityEngine::GameObject* BJPMABICADJ; // 0x28
		::UnityEngine::GameObject* JFHDBHLPMHN; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* HBOGAKGFCDO; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IMBJKKMBNFM; // 0x40
		::UnityEngine::GameObject* COJACNPKFMN; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MJEFLBIOGAO; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* HGFAFHEKBIG; // 0x58
		::UnityEngine::Vector3 OIPGJLCMKAM; // 0x60
		::UnityEngine::Vector3 DGIHLLKGKJE; // 0x6C
		::System::Single _MinDistance_k__BackingField; // 0x78
		::System::Void _ctor(::NNMCPNJFPJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNMCPNJFPJE*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void JBNHADDJMHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_JBNHADDJMHK_OFFSET))(this);
		}

		::System::Void AFGMDEIOALL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_AFGMDEIOALL_OFFSET))(this);
		}

		::System::Void OHNIGCLLONB(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_OHNIGCLLONB_OFFSET))(this, a1);
		}

		::System::Void EAAMOBBKNKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_EAAMOBBKNKP_OFFSET))(this);
		}

		::System::Void LIDNMEKODDJ(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_LIDNMEKODDJ_OFFSET))(this, a1);
		}

		::System::Void IBADDOANBOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_IBADDOANBOL_OFFSET))(this);
		}

		::System::Void KPKLEJFGPHO(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_KPKLEJFGPHO_OFFSET))(this, a1);
		}

		::System::Void DDAAGEDOEFO(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_DDAAGEDOEFO_OFFSET))(this, a1);
		}

		::System::Void NFCHIJLOLGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_NFCHIJLOLGB_OFFSET))(this);
		}

		::System::Void NANHLLEMMEB(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_NANHLLEMMEB_OFFSET))(this, a1);
		}

		::System::Void LJNHGNIODAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_LJNHGNIODAN_OFFSET))(this);
		}

		::System::Single get_MinDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_GET_MINDISTANCE_OFFSET))(this);
		}

		::System::Void set_MinDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMFGOFBAKCI_SET_MINDISTANCE_OFFSET))(this, a1);
		}

	};

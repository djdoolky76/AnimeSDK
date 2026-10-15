#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGLBPHCFGG_ColliderConfigLoadState.h"
#include "unitysdk/System/Object.h"
class EBDJGLDAMEF;
class EEMDFPCIKCJ;
class IJEKJNBKPJN;
namespace RPG::GameCore { class FreeStyleAnimEventInfoConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CFGLBPHCFGG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCC4A690)
#define CFGLBPHCFGG_AKDLECNCCIG_OFFSET UNITYSDK_OFFSET(0xCC49FC0)
#define CFGLBPHCFGG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4B260)
#define CFGLBPHCFGG_DIEGGJLIACL_1_OFFSET UNITYSDK_OFFSET(0xCC49AF0)
#define CFGLBPHCFGG_DIEGGJLIACL_2_OFFSET UNITYSDK_OFFSET(0xCC49B60)
#define CFGLBPHCFGG_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xCC49A80)
#define CFGLBPHCFGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC4A8B0)
#define CFGLBPHCFGG_JIGPJNEJMOA_OFFSET UNITYSDK_OFFSET(0xCC4A190)
#define CFGLBPHCFGG_MEEFJAJPKFH_OFFSET UNITYSDK_OFFSET(0xCC49EC0)
#define CFGLBPHCFGG_MOLAJDGOHFI_OFFSET UNITYSDK_OFFSET(0xCC4A260)
#define CFGLBPHCFGG_MPLEPDBIKOO_OFFSET UNITYSDK_OFFSET(0xCC49F60)
#define CFGLBPHCFGG_NODMKFHPDLD_OFFSET UNITYSDK_OFFSET(0xCC4A9F0)
#define CFGLBPHCFGG_OKBPNPLFDLB_OFFSET UNITYSDK_OFFSET(0xCC4A340)
#define CFGLBPHCFGG_PFEOCHOCJFI_OFFSET UNITYSDK_OFFSET(0xCC4A840)

	class CFGLBPHCFGG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Object*>*>* INIBJIEEMGN; // 0x10
		::CFGLBPHCFGG_ColliderConfigLoadState FMNJGFHAPEA; // 0x18
		// static const ::System::String* MFABMKAPLFK; // 0x0
		// static const ::System::Object ELEANBDGOBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_CTOR_OFFSET))(this);
		}

		::System::Void DIEGGJLIACL(::IJEKJNBKPJN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJEKJNBKPJN*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_DIEGGJLIACL_OFFSET))(this, a1, a2);
		}

		::System::Void DIEGGJLIACL_1(::EEMDFPCIKCJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EEMDFPCIKCJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_DIEGGJLIACL_1_OFFSET))(this, a1, a2);
		}

		::System::Void DIEGGJLIACL_2(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Boolean a3, ::EBDJGLDAMEF* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::EBDJGLDAMEF*, ::System::String*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_DIEGGJLIACL_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ABKBOGIGAEH(::EBDJGLDAMEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBDJGLDAMEF*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_DISPOSE_OFFSET))(this);
		}

		::System::Void OKBPNPLFDLB(::UnityEngine::GameObject* a1, ::EBDJGLDAMEF* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::EBDJGLDAMEF*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_OKBPNPLFDLB_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void MEEFJAJPKFH(::EBDJGLDAMEF* a1)
		{
			return ((::System::Void(*)(::EBDJGLDAMEF*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_MEEFJAJPKFH_OFFSET))(a1);
		}

		static ::System::Void MPLEPDBIKOO(::EBDJGLDAMEF* a1)
		{
			return ((::System::Void(*)(::EBDJGLDAMEF*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_MPLEPDBIKOO_OFFSET))(a1);
		}

		static ::System::Void MOLAJDGOHFI(::EBDJGLDAMEF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::EBDJGLDAMEF*, ::System::Int32))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_MOLAJDGOHFI_OFFSET))(a1, a2);
		}

		static ::System::Boolean JIGPJNEJMOA(::EBDJGLDAMEF* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::EBDJGLDAMEF*, ::System::Int32))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_JIGPJNEJMOA_OFFSET))(a1, a2);
		}

		::System::Void AKDLECNCCIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_AKDLECNCCIG_OFFSET))(this);
		}

		::System::Void NODMKFHPDLD(::RPG::GameCore::FreeStyleAnimEventInfoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleAnimEventInfoConfig*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_NODMKFHPDLD_OFFSET))(this, a1);
		}

		static ::System::Void PFEOCHOCJFI(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_PFEOCHOCJFI_OFFSET))(a1);
		}

	};

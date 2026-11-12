#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierPlayerChangeEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define DLAAIAJKEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0xFFF5EB0)
#define DLAAIAJKEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xFFF4C40)
#define DLAAIAJKEHP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xFFF5E90)
#define DLAAIAJKEHP_HAIHHFOPBLN_1_OFFSET UNITYSDK_OFFSET(0xFFF5D90)
#define DLAAIAJKEHP_HAIHHFOPBLN_2_OFFSET UNITYSDK_OFFSET(0xFFF5CC0)
#define DLAAIAJKEHP_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0xFFF5C20)
#define DLAAIAJKEHP_HMOOMCLKOJA_OFFSET UNITYSDK_OFFSET(0xFFF5A00)
#define DLAAIAJKEHP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xFFF5590)
#define DLAAIAJKEHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFFF4D50)
#define DLAAIAJKEHP_NFECGOAMEIF_OFFSET UNITYSDK_OFFSET(0xFFF5850)
#define DLAAIAJKEHP_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xFFF5EA0)

inline static constexpr unsigned int DLAAIAJKEHP_TypeDefinitionIndex = 56364;

	class DLAAIAJKEHP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* KFOBOAGEAML; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* GDJKHEEEPJM; // 0x20
		::RPG::GameCore::ModifierPlayerChangeEffect* DOCBCODGIEH; // 0x28
		::Il2CppArray<::UnityEngine::Renderer*>* JEKLDIIKPLI; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* OIPDNIJEMAF; // 0x38
		::System::Int32 GMDBHJKEAEI; // 0x40
		::UnityEngine::Vector4 BKOECPKLOGD; // 0x44
		::System::Single KHCBCLOMOHE; // 0x54
		::UnityEngine::Color KAPOKDONACI; // 0x58
		::System::Single AHNCHIOFGLB; // 0x68
		static ::System::Int32* StaticGet_LMEDHJLHMFM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DLAAIAJKEHP")->GetStaticField(0x14F40);
		}

		static ::System::Int32* StaticGet_KJLLAFEBBMG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DLAAIAJKEHP")->GetStaticField(0x14F44);
		}

		static ::System::Int32* StaticGet_JEJLEFAMBAK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DLAAIAJKEHP")->GetStaticField(0x14F48);
		}

		::System::Void _ctor(::RPG::GameCore::ModifierPlayerChangeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAAIAJKEHP_CCTOR_OFFSET))();
		}

		::System::Boolean KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single NFECGOAMEIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_NFECGOAMEIF_OFFSET))(this);
		}

		::BMAGJGLPIIF HMOOMCLKOJA()
		{
			return ((::BMAGJGLPIIF(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_HMOOMCLKOJA_OFFSET))(this);
		}

		::System::Single HAIHHFOPBLN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_HAIHHFOPBLN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 HAIHHFOPBLN_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_HAIHHFOPBLN_1_OFFSET))(this, a1, a2, a3);
		}

		::BMAGJGLPIIF HAIHHFOPBLN_2(::BMAGJGLPIIF a1, ::BMAGJGLPIIF a2, ::System::Single a3)
		{
			return ((::BMAGJGLPIIF(*)(::PVOID, ::BMAGJGLPIIF, ::BMAGJGLPIIF, ::System::Single))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_HAIHHFOPBLN_2_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLAAIAJKEHP_SET_ENTITY_OFFSET))(this, a1);
		}

	};

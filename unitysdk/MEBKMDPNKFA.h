#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IDMGCEJLKLL;
namespace RPG::Client { class TimeRewindAnimRaycastBind; }
namespace RPG::Client { class TimeRewindRaycast; }
namespace RPG::Client { class TimeRewindRaycastInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Collider; }

#define MEBKMDPNKFA_BMKKLCMFJKG_OFFSET UNITYSDK_OFFSET(0xC16B9F0)
#define MEBKMDPNKFA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC16BAA0)
#define MEBKMDPNKFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC16A6C0)
#define MEBKMDPNKFA_DAAMKEHFPHM_OFFSET UNITYSDK_OFFSET(0xC16ADA0)
#define MEBKMDPNKFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC16A920)
#define MEBKMDPNKFA_EDOIEDCFCGC_OFFSET UNITYSDK_OFFSET(0xC16AAC0)
#define MEBKMDPNKFA_EHIPPPBOCOO_OFFSET UNITYSDK_OFFSET(0xC16B8E0)
#define MEBKMDPNKFA_KDIFIJLKFPH_OFFSET UNITYSDK_OFFSET(0xC16AB10)
#define MEBKMDPNKFA_KOAPJBOGKNG_OFFSET UNITYSDK_OFFSET(0xC16B850)
#define MEBKMDPNKFA_MIJIOLLEBCD_OFFSET UNITYSDK_OFFSET(0xC16AA50)
#define MEBKMDPNKFA_NCIGEJABJGG_OFFSET UNITYSDK_OFFSET(0xC16ACB0)

inline static constexpr unsigned int MEBKMDPNKFA_TypeDefinitionIndex = 62216;

	class MEBKMDPNKFA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IDMGCEJLKLL*>* OPBHIAOJKIJ; // 0x10
		::RPG::Client::TimeRewindRaycast* GDPMKBNGDKD; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::System::Collections::Generic::Stack_1<::IDMGCEJLKLL*>* OAJEFLIPCNJ; // 0x28
		::Il2CppArray<::UnityEngine::Collider*>* CPBGNCJOOEO; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TimeRewindAnimRaycastBind*>* JDNHAGDIBFG; // 0x38
		::System::Int32 LHNHIOEGJAO; // 0x40
		::System::Single NCFGEFEFDFA; // 0x44
		::System::Boolean JAIFGEJPIAB; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 LECLNGBPOBK; // 0x4C
		static ::Il2CppArray<::RPG::GameCore::EntityType>** StaticGet_EIFKMLHHPJB()
		{
			return (::Il2CppArray<::RPG::GameCore::EntityType>**)UnitySDK::FromName("", "MEBKMDPNKFA")->GetStaticField(0x71A10);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeRewindRaycast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindRaycast*))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEBKMDPNKFA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_DISPOSE_OFFSET))(this);
		}

		::System::Void MIJIOLLEBCD(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_MIJIOLLEBCD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDOIEDCFCGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_EDOIEDCFCGC_OFFSET))(this);
		}

		::System::Void KDIFIJLKFPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_KDIFIJLKFPH_OFFSET))(this);
		}

		::System::Void DAAMKEHFPHM(::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>*))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_DAAMKEHFPHM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EHIPPPBOCOO(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_EHIPPPBOCOO_OFFSET))(this, a1, a2);
		}

		::IDMGCEJLKLL* KOAPJBOGKNG()
		{
			return ((::IDMGCEJLKLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_KOAPJBOGKNG_OFFSET))(this);
		}

		::System::Void BMKKLCMFJKG(::IDMGCEJLKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGCEJLKLL*))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_BMKKLCMFJKG_OFFSET))(this, a1);
		}

		::System::Void NCIGEJABJGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBKMDPNKFA_NCIGEJABJGG_OFFSET))(this);
		}

	};

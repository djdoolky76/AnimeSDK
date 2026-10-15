#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IDGOINOHFEE;
namespace RPG::Client { class FallingObjectTemplate; }
namespace RPG::Client { class StageLiteInstanceItemRendererMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define INFENGJKFBI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x164DD1A0)
#define INFENGJKFBI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x164DD290)
#define INFENGJKFBI_BOBIMMBILPB_OFFSET UNITYSDK_OFFSET(0x164DBE60)
#define INFENGJKFBI_CJHGGEOOAMM_OFFSET UNITYSDK_OFFSET(0x164DCE10)
#define INFENGJKFBI_CTOR_OFFSET UNITYSDK_OFFSET(0x164DBA40)
#define INFENGJKFBI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x164DC3B0)
#define INFENGJKFBI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x164DBEF0)
#define INFENGJKFBI_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x164DD420)
#define INFENGJKFBI_NPDIHAOHCPI_OFFSET UNITYSDK_OFFSET(0x164DCB90)

inline static constexpr unsigned int INFENGJKFBI_TypeDefinitionIndex = 70936;

	class INFENGJKFBI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* BHJBFKOHLII; // 0x10
		::UnityEngine::GameObject* PLAJENPLCNM; // 0x18
		::RPG::Client::FallingObjectTemplate* OBPFHANLBIG; // 0x20
		::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* EFJIMACIJAP; // 0x28
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::System::Single FPDLMIIEGEB; // 0x3C
		::UnityEngine::Vector3 LGIMCMOPFFN; // 0x40
		::UnityEngine::Vector3 IEELGIPAPFK; // 0x4C
		::UnityEngine::Vector3 GCJMFBKLGHI; // 0x58
		::UnityEngine::Vector3 FLNOBMJMDNG; // 0x64
		::System::Void _ctor(::RPG::Client::FallingObjectTemplate* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FallingObjectTemplate*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + INFENGJKFBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BOBIMMBILPB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + INFENGJKFBI_BOBIMMBILPB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INFENGJKFBI_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INFENGJKFBI_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NPDIHAOHCPI(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INFENGJKFBI_NPDIHAOHCPI_OFFSET))(this, a1, a2);
		}

		::System::Void CJHGGEOOAMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFENGJKFBI_CJHGGEOOAMM_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFENGJKFBI_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INFENGJKFBI_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INFENGJKFBI_NINDHOGICJD_OFFSET))(this);
		}

	};

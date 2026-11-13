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

#define INFENGJKFBI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1A5EB0B0)
#define INFENGJKFBI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1A5EB1A0)
#define INFENGJKFBI_BOBIMMBILPB_OFFSET UNITYSDK_OFFSET(0x1A5E9D70)
#define INFENGJKFBI_CJHGGEOOAMM_OFFSET UNITYSDK_OFFSET(0x1A5EAD20)
#define INFENGJKFBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E9930)
#define INFENGJKFBI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A5EA2C0)
#define INFENGJKFBI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A5E9E00)
#define INFENGJKFBI_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x1A5EB330)
#define INFENGJKFBI_NPDIHAOHCPI_OFFSET UNITYSDK_OFFSET(0x1A5EAAA0)

inline static constexpr unsigned int INFENGJKFBI_TypeDefinitionIndex = 72915;

	class INFENGJKFBI : public ::System::Object
	{
	public:
		::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* EFJIMACIJAP; // 0x10
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* BHJBFKOHLII; // 0x18
		::UnityEngine::GameObject* PLAJENPLCNM; // 0x20
		::RPG::Client::FallingObjectTemplate* OBPFHANLBIG; // 0x28
		::UnityEngine::Vector3 GCJMFBKLGHI; // 0x30
		::UnityEngine::Vector3 IEELGIPAPFK; // 0x3C
		::UnityEngine::Vector3 LGIMCMOPFFN; // 0x48
		::UnityEngine::Vector3 FLNOBMJMDNG; // 0x54
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x60
		::System::Single FPDLMIIEGEB; // 0x6C
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

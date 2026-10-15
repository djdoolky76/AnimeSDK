#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HNIJBNICJFI_DPAPFOHEDMG;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HNIJBNICJFI_ACCMEHNKGOF_OFFSET UNITYSDK_OFFSET(0x15D8EAC0)
#define HNIJBNICJFI_BBLCFGAMFAN_OFFSET UNITYSDK_OFFSET(0x15D8D7B0)
#define HNIJBNICJFI_CEHBFNKGOCO_OFFSET UNITYSDK_OFFSET(0x15D8D600)
#define HNIJBNICJFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8CD00)
#define HNIJBNICJFI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15D8CE40)
#define HNIJBNICJFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D8CD10)
#define HNIJBNICJFI_EPIOLJOMCEE_OFFSET UNITYSDK_OFFSET(0x15D8CCA0)
#define HNIJBNICJFI_FEKBOIAKMJM_OFFSET UNITYSDK_OFFSET(0x15D8D9E0)
#define HNIJBNICJFI_FOILLOKMKPG_OFFSET UNITYSDK_OFFSET(0x15D8DFD0)
#define HNIJBNICJFI_HABIOJPBIEA_OFFSET UNITYSDK_OFFSET(0x15D8D760)
#define HNIJBNICJFI_ILMLDBKJMBH_OFFSET UNITYSDK_OFFSET(0x15D8EC20)
#define HNIJBNICJFI_JCMGGDAHIOE_OFFSET UNITYSDK_OFFSET(0x15D8DA70)
#define HNIJBNICJFI_LJNIHFDLPEA_OFFSET UNITYSDK_OFFSET(0x15D8DE50)
#define HNIJBNICJFI_NAEIFHCLBBF_OFFSET UNITYSDK_OFFSET(0x15D8D6A0)
#define HNIJBNICJFI_NHHHDCMPPIP_OFFSET UNITYSDK_OFFSET(0x15D8CEA0)
#define HNIJBNICJFI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15D8CD60)

inline static constexpr unsigned int HNIJBNICJFI_TypeDefinitionIndex = 60736;

	class HNIJBNICJFI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LCCOFJJOKGH; // 0x10
		::UnityEngine::Transform* BFJOMBDJAGH; // 0x18
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* IKDOGGNFCAJ; // 0x28
		::UnityEngine::Transform* ALNMMDALMOC; // 0x30
		::System::Boolean MGOJFIHLKJI; // 0x38
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EPIOLJOMCEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_EPIOLJOMCEE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNIJBNICJFI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void CEHBFNKGOCO(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_CEHBFNKGOCO_OFFSET))(this, a1);
		}

		::System::Void NAEIFHCLBBF(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_NAEIFHCLBBF_OFFSET))(this, a1, a2);
		}

		::System::Void HABIOJPBIEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_HABIOJPBIEA_OFFSET))(this);
		}

		::System::Void BBLCFGAMFAN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIJBNICJFI_BBLCFGAMFAN_OFFSET))(this, a1, a2);
		}

		::System::Void FEKBOIAKMJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_FEKBOIAKMJM_OFFSET))(this);
		}

		::System::Void JCMGGDAHIOE(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIJBNICJFI_JCMGGDAHIOE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LJNIHFDLPEA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_LJNIHFDLPEA_OFFSET))(this, a1);
		}

		::System::Void NHHHDCMPPIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJBNICJFI_NHHHDCMPPIP_OFFSET))(this);
		}

		::System::Void FOILLOKMKPG(::System::Nullable_1<::System::Object*> a1, ::System::Nullable_1<::System::Object*> a2, ::System::Nullable_1<::System::Object*> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + HNIJBNICJFI_FOILLOKMKPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACCMEHNKGOF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIJBNICJFI_ACCMEHNKGOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 ILMLDBKJMBH(::HNIJBNICJFI_DPAPFOHEDMG* a1, ::HNIJBNICJFI_DPAPFOHEDMG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HNIJBNICJFI_DPAPFOHEDMG*, ::HNIJBNICJFI_DPAPFOHEDMG*))((::PBYTE)hIl2Cpp + HNIJBNICJFI_ILMLDBKJMBH_OFFSET))(this, a1, a2);
		}

	};

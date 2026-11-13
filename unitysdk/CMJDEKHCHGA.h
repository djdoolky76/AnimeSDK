#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMJDEKHCHGA;
class CMJDEKHCHGA_INCNAAKNJCP;
class EKACOEJLABN;
class IKBAMHGDEJC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CMJDEKHCHGA_AJMDOFDBEPH_OFFSET UNITYSDK_OFFSET(0x1B19E780)
#define CMJDEKHCHGA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B19E090)
#define CMJDEKHCHGA_CENIHLGJJLN_OFFSET UNITYSDK_OFFSET(0x1B19E8F0)
#define CMJDEKHCHGA_CIJIENDMPJN_OFFSET UNITYSDK_OFFSET(0x1B19F230)
#define CMJDEKHCHGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B19E240)
#define CMJDEKHCHGA_DCCGAOLPDDF_OFFSET UNITYSDK_OFFSET(0x1B19EE80)
#define CMJDEKHCHGA_FIDDCHDLDBI_OFFSET UNITYSDK_OFFSET(0x1B19E850)
#define CMJDEKHCHGA_GHFIJAHJFAK_OFFSET UNITYSDK_OFFSET(0x1B19F360)
#define CMJDEKHCHGA_GIIMNBHFBPC_OFFSET UNITYSDK_OFFSET(0x1B19E650)
#define CMJDEKHCHGA_HFBIBEGEEAI_OFFSET UNITYSDK_OFFSET(0x1B19EDF0)
#define CMJDEKHCHGA_HLLKLMNBGBP_OFFSET UNITYSDK_OFFSET(0x1B19EAE0)
#define CMJDEKHCHGA_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0x1B19E430)
#define CMJDEKHCHGA_JFCKFHAEEOO_OFFSET UNITYSDK_OFFSET(0x1B19E360)
#define CMJDEKHCHGA_LAPGJHAGBOH_OFFSET UNITYSDK_OFFSET(0x1B19E6A0)
#define CMJDEKHCHGA_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x1B19ECB0)
#define CMJDEKHCHGA_NEIJJPIELPK_OFFSET UNITYSDK_OFFSET(0x1B19E9A0)
#define CMJDEKHCHGA_NNFIJFPGIGN_OFFSET UNITYSDK_OFFSET(0x1B19F3E0)
#define CMJDEKHCHGA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1B19F130)

inline static constexpr unsigned int CMJDEKHCHGA_TypeDefinitionIndex = 74159;

	class CMJDEKHCHGA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Object*>* DDNNPNPOLNP; // 0x10
		::System::Collections::Generic::LinkedList_1<::System::Object*>* LHEOJAENLJP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::LinkedList_1<::System::Object*>*>* PDACFPPCAPB; // 0x20
		::IKBAMHGDEJC* AEEKINDJLDO; // 0x28
		::System::Collections::Generic::LinkedList_1<::System::Object*>* ADNDACGIHCH; // 0x30
		::UnityEngine::Transform* MEDDFCFOHLB; // 0x38
		::System::Int32 JHEEAFBMLNF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_CTOR_OFFSET))(this);
		}

		static ::CMJDEKHCHGA* BPLPBPMEODA(::IKBAMHGDEJC* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::CMJDEKHCHGA*(*)(::IKBAMHGDEJC*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::GameObject* INIJCJJLPKM(::System::String* a1, ::UnityEngine::Transform* a2, ::EKACOEJLABN* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::EKACOEJLABN*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_INIJCJJLPKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_PJPFIHFAHGO_OFFSET))(this);
		}

		static ::System::Int32 JFCKFHAEEOO(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_JFCKFHAEEOO_OFFSET))(a1);
		}

		::System::Boolean GIIMNBHFBPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_GIIMNBHFBPC_OFFSET))(this);
		}

		::System::Boolean FIDDCHDLDBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_FIDDCHDLDBI_OFFSET))(this);
		}

		::CMJDEKHCHGA_INCNAAKNJCP* LAPGJHAGBOH(::System::String* a1)
		{
			return ((::CMJDEKHCHGA_INCNAAKNJCP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_LAPGJHAGBOH_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* NEIJJPIELPK(::System::String* a1, ::UnityEngine::Transform* a2, ::EKACOEJLABN* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::EKACOEJLABN*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_NEIJJPIELPK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* HLLKLMNBGBP(::System::String* a1, ::UnityEngine::Transform* a2, ::EKACOEJLABN* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::EKACOEJLABN*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_HLLKLMNBGBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJMDOFDBEPH(::CMJDEKHCHGA_INCNAAKNJCP* a1, ::UnityEngine::Transform* a2, ::EKACOEJLABN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CMJDEKHCHGA_INCNAAKNJCP*, ::UnityEngine::Transform*, ::EKACOEJLABN*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_AJMDOFDBEPH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GHFIJAHJFAK(::CMJDEKHCHGA_INCNAAKNJCP* a1, ::EKACOEJLABN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CMJDEKHCHGA_INCNAAKNJCP*, ::EKACOEJLABN*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_GHFIJAHJFAK_OFFSET))(this, a1, a2);
		}

		::System::Void NNFIJFPGIGN(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_NNFIJFPGIGN_OFFSET))(this, a1, a2);
		}

		::System::Void DCCGAOLPDDF(::CMJDEKHCHGA_INCNAAKNJCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJDEKHCHGA_INCNAAKNJCP*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_DCCGAOLPDDF_OFFSET))(this, a1);
		}

		::System::Void CIJIENDMPJN(::CMJDEKHCHGA_INCNAAKNJCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJDEKHCHGA_INCNAAKNJCP*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_CIJIENDMPJN_OFFSET))(this, a1);
		}

		::System::Void HFBIBEGEEAI(::CMJDEKHCHGA_INCNAAKNJCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJDEKHCHGA_INCNAAKNJCP*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_HFBIBEGEEAI_OFFSET))(this, a1);
		}

		::System::Void CENIHLGJJLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_CENIHLGJJLN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class JAAJBEBFCKK;
class LEEEMFAEDLN;
namespace UnityEngine { class Transform; }

#define JAAJBEBFCKK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19318600)
#define JAAJBEBFCKK_CLONE_OFFSET UNITYSDK_OFFSET(0x193189F0)
#define JAAJBEBFCKK_CTOR_OFFSET UNITYSDK_OFFSET(0x19318830)
#define JAAJBEBFCKK_DKHAJOKKDJG_OFFSET UNITYSDK_OFFSET(0x19318770)
#define JAAJBEBFCKK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x19318FE0)
#define JAAJBEBFCKK_IBLIGIKPGNC_OFFSET UNITYSDK_OFFSET(0x19318850)
#define JAAJBEBFCKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19319130)
#define JAAJBEBFCKK_REVERSE_OFFSET UNITYSDK_OFFSET(0x19318C20)
#define JAAJBEBFCKK_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x19318E50)

inline static constexpr unsigned int JAAJBEBFCKK_TypeDefinitionIndex = 75652;

	class JAAJBEBFCKK : public ::MOGBNBGMIHF
	{
	public:
		::LEEEMFAEDLN* MLKNPELEDJL; // 0x38
		::LEEEMFAEDLN* OKJDHFJMKCJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_CTOR_OFFSET))(this);
		}

		static ::JAAJBEBFCKK* BPLPBPMEODA(::LEEEMFAEDLN* a1, ::Il2CppArray<::LEEEMFAEDLN*>* a2)
		{
			return ((::JAAJBEBFCKK*(*)(::LEEEMFAEDLN*, ::Il2CppArray<::LEEEMFAEDLN*>*))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::JAAJBEBFCKK* DKHAJOKKDJG(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::JAAJBEBFCKK*(*)(::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_DKHAJOKKDJG_OFFSET))(a1, a2);
		}

		::System::Boolean IBLIGIKPGNC(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_IBLIGIKPGNC_OFFSET))(this, a1, a2);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_REVERSE_OFFSET))(this);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAAJBEBFCKK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};

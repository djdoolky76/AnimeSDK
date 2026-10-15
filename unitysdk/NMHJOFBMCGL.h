#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class LEEEMFAEDLN;
class NMHJOFBMCGL;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NMHJOFBMCGL_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBC7E200)
#define NMHJOFBMCGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC7E010)
#define NMHJOFBMCGL_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xBC7EF00)
#define NMHJOFBMCGL_CLONE_OFFSET UNITYSDK_OFFSET(0xBC7E4C0)
#define NMHJOFBMCGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7E330)
#define NMHJOFBMCGL_DKHAJOKKDJG_OFFSET UNITYSDK_OFFSET(0xBC7E160)
#define NMHJOFBMCGL_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBC7EAB0)
#define NMHJOFBMCGL_IBLIGIKPGNC_OFFSET UNITYSDK_OFFSET(0xBC7E350)
#define NMHJOFBMCGL_ISDONE_OFFSET UNITYSDK_OFFSET(0xBC7ED90)
#define NMHJOFBMCGL_REVERSE_OFFSET UNITYSDK_OFFSET(0xBC7E6F0)
#define NMHJOFBMCGL_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBC7E920)
#define NMHJOFBMCGL_STEP_OFFSET UNITYSDK_OFFSET(0xBC7EC00)

inline static constexpr unsigned int NMHJOFBMCGL_TypeDefinitionIndex = 73509;

	class NMHJOFBMCGL : public ::MOGBNBGMIHF
	{
	public:
		::LEEEMFAEDLN* MLKNPELEDJL; // 0x38
		::LEEEMFAEDLN* OKJDHFJMKCJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_CTOR_OFFSET))(this);
		}

		static ::NMHJOFBMCGL* BPLPBPMEODA(::LEEEMFAEDLN* a1, ::Il2CppArray<::LEEEMFAEDLN*>* a2)
		{
			return ((::NMHJOFBMCGL*(*)(::LEEEMFAEDLN*, ::Il2CppArray<::LEEEMFAEDLN*>*))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::NMHJOFBMCGL* BPLPBPMEODA_1(::System::Collections::Generic::List_1<::LEEEMFAEDLN*>* a1)
		{
			return ((::NMHJOFBMCGL*(*)(::System::Collections::Generic::List_1<::LEEEMFAEDLN*>*))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_BPLPBPMEODA_1_OFFSET))(a1);
		}

		static ::NMHJOFBMCGL* DKHAJOKKDJG(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::NMHJOFBMCGL*(*)(::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_DKHAJOKKDJG_OFFSET))(a1, a2);
		}

		::System::Boolean IBLIGIKPGNC(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_IBLIGIKPGNC_OFFSET))(this, a1, a2);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_REVERSE_OFFSET))(this);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_STEP_OFFSET))(this, a1);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_ISDONE_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJOFBMCGL_CIHFGJDCHIA_OFFSET))(this);
		}

	};

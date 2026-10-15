#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMEHCMEGIHO_FailureReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class FFHBEGEGBJM;
class ILPPBGLJABD;
class OMEHCMEGIHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMEHCMEGIHO_AFPJLFBAKNH_OFFSET UNITYSDK_OFFSET(0xBF227B0)
#define OMEHCMEGIHO_BEKIBEDNBEL_OFFSET UNITYSDK_OFFSET(0xBF23B10)
#define OMEHCMEGIHO_BKAKGPKNDFO_OFFSET UNITYSDK_OFFSET(0xBF23C70)
#define OMEHCMEGIHO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF22290)
#define OMEHCMEGIHO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF22360)
#define OMEHCMEGIHO_DBBGCNFCAPO_OFFSET UNITYSDK_OFFSET(0xBF22420)
#define OMEHCMEGIHO_FJAKIIMKFKI_OFFSET UNITYSDK_OFFSET(0xBF223C0)
#define OMEHCMEGIHO_FPHBKEFOPEN_OFFSET UNITYSDK_OFFSET(0xBF23BD0)
#define OMEHCMEGIHO_GDALNHIJFNE_OFFSET UNITYSDK_OFFSET(0xBF230B0)
#define OMEHCMEGIHO_ICDGNLOCALL_OFFSET UNITYSDK_OFFSET(0xBF23980)
#define OMEHCMEGIHO_ICJGLJADPEL_OFFSET UNITYSDK_OFFSET(0xBF23A60)
#define OMEHCMEGIHO_JCJOKPBLKEJ_OFFSET UNITYSDK_OFFSET(0xBF238C0)
#define OMEHCMEGIHO_NLALIJFGABG_OFFSET UNITYSDK_OFFSET(0xBF22560)
#define OMEHCMEGIHO_PGCPOKIOMMH_OFFSET UNITYSDK_OFFSET(0xBF23E20)

inline static constexpr unsigned int OMEHCMEGIHO_TypeDefinitionIndex = 62354;

	class OMEHCMEGIHO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PBGHFHMGAPC; // 0x10
		::FFHBEGEGBJM* APBKPGMCPLI; // 0x18
		::System::Boolean OPBPNIGOKDL; // 0x20
		::System::Boolean NDJNMDDFIFK; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_CTOR_OFFSET))(this);
		}

		static ::OMEHCMEGIHO* BPLPBPMEODA(::FFHBEGEGBJM* a1)
		{
			return ((::OMEHCMEGIHO*(*)(::FFHBEGEGBJM*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void FJAKIIMKFKI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_FJAKIIMKFKI_OFFSET))(this, a1, a2);
		}

		::System::Boolean DBBGCNFCAPO(::BNLKJLFCLOI* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::OMEHCMEGIHO_FailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::OMEHCMEGIHO_FailureReason))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_DBBGCNFCAPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GDALNHIJFNE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_GDALNHIJFNE_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLALIJFGABG(::BNLKJLFCLOI* a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3, ::OMEHCMEGIHO_FailureReason a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::OMEHCMEGIHO_FailureReason))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_NLALIJFGABG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ICDGNLOCALL(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_ICDGNLOCALL_OFFSET))(this, a1, a2);
		}

		::System::Boolean ICJGLJADPEL(::ILPPBGLJABD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_ICJGLJADPEL_OFFSET))(this, a1);
		}

		::System::Boolean BEKIBEDNBEL(::ILPPBGLJABD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_BEKIBEDNBEL_OFFSET))(this, a1);
		}

		::System::Boolean BKAKGPKNDFO(::BNLKJLFCLOI* a1, ::ILPPBGLJABD* a2, ::ILPPBGLJABD* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::ILPPBGLJABD*, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_BKAKGPKNDFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FPHBKEFOPEN(::ILPPBGLJABD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_FPHBKEFOPEN_OFFSET))(this, a1);
		}

		::System::Boolean PGCPOKIOMMH(::BNLKJLFCLOI* a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_PGCPOKIOMMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JCJOKPBLKEJ(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_JCJOKPBLKEJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean AFPJLFBAKNH(::BNLKJLFCLOI* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::OMEHCMEGIHO_FailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::OMEHCMEGIHO_FailureReason))((::PBYTE)hIl2Cpp + OMEHCMEGIHO_AFPJLFBAKNH_OFFSET))(this, a1, a2, a3);
		}

	};

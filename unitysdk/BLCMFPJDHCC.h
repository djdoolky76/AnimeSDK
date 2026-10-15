#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IJLOJGICLOM;
class NGLFOJKOKBH;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLCMFPJDHCC_AKEOFMFNNNI_OFFSET UNITYSDK_OFFSET(0xBA646F0)
#define BLCMFPJDHCC_CGGCLAMBPNL_OFFSET UNITYSDK_OFFSET(0xBA634E0)
#define BLCMFPJDHCC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA630E0)
#define BLCMFPJDHCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA63170)
#define BLCMFPJDHCC_FOFCMMIKBKO_OFFSET UNITYSDK_OFFSET(0xBA641B0)
#define BLCMFPJDHCC_LOIIKPIBGBM_OFFSET UNITYSDK_OFFSET(0xBA643F0)
#define BLCMFPJDHCC_NCGGMGPKBPP_OFFSET UNITYSDK_OFFSET(0xBA63450)
#define BLCMFPJDHCC_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0xBA647B0)
#define BLCMFPJDHCC_POFAKHBJJFM_OFFSET UNITYSDK_OFFSET(0xBA63EC0)

inline static constexpr unsigned int BLCMFPJDHCC_TypeDefinitionIndex = 48883;

	class BLCMFPJDHCC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IJLOJGICLOM*>* EEJNBFCNJAO; // 0x10
		::System::Collections::Generic::HashSet_1<::FKDIDBGBGMF>* LBJIMPPBNPA; // 0x18
		::System::Collections::Generic::List_1<::NGLFOJKOKBH*>* IOFHPGIJANO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_DISPOSE_OFFSET))(this);
		}

		::System::Void NCGGMGPKBPP(::Il2CppArray<::NGLFOJKOKBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NGLFOJKOKBH*>*))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_NCGGMGPKBPP_OFFSET))(this, a1);
		}

		::System::Void CGGCLAMBPNL(::NGLFOJKOKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_CGGCLAMBPNL_OFFSET))(this, a1);
		}

		::System::Void POFAKHBJJFM(::NGLFOJKOKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_POFAKHBJJFM_OFFSET))(this, a1);
		}

		::System::Boolean FOFCMMIKBKO(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::System::Single))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_FOFCMMIKBKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LOIIKPIBGBM(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_LOIIKPIBGBM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>* AKEOFMFNNNI(::FKDIDBGBGMF a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>*(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_AKEOFMFNNNI_OFFSET))(this, a1);
		}

		::System::Void OGGCBJKOJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC_OGGCBJKOJIK_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector4.h"
class GGJFAFONDHN;
class GNFIJNAMOHD;
class NGNJJJDFFKF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMHKJNHEJII_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x158591A0)
#define FMHKJNHEJII_CTOR_OFFSET UNITYSDK_OFFSET(0x15859DA0)
#define FMHKJNHEJII_FCDOGEAHNFM_OFFSET UNITYSDK_OFFSET(0x15859C20)
#define FMHKJNHEJII_HBDDPBAJJJI_OFFSET UNITYSDK_OFFSET(0x15859D20)
#define FMHKJNHEJII_KHBMJJKJLGO_OFFSET UNITYSDK_OFFSET(0x15859210)
#define FMHKJNHEJII_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15858FF0)
#define FMHKJNHEJII_NDPNAEDIBOC_OFFSET UNITYSDK_OFFSET(0x15859160)

inline static constexpr unsigned int FMHKJNHEJII_TypeDefinitionIndex = 49538;

	class FMHKJNHEJII : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Color32>* CKJEOJCEHIC; // 0x10
		::Il2CppArray<::UnityEngine::Color32>* JHHALJMJCJB; // 0x18
		::NGNJJJDFFKF* PKKKBFMCDBG; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* DAGOGJIHEPF; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector4>* LBGOPGBNMEO; // 0x30
		::System::Boolean BBJHDLLJBIL; // 0x38
		::System::Boolean GIPHDPLKAIM; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHKJNHEJII_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHKJNHEJII_KPJGDHLENIP_OFFSET))(this);
		}

		::GNFIJNAMOHD* NDPNAEDIBOC()
		{
			return ((::GNFIJNAMOHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHKJNHEJII_NDPNAEDIBOC_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHKJNHEJII_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHBMJJKJLGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHKJNHEJII_KHBMJJKJLGO_OFFSET))(this);
		}

		::System::Void FCDOGEAHNFM(::System::Int32 a1, ::GGJFAFONDHN* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GGJFAFONDHN*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FMHKJNHEJII_FCDOGEAHNFM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HBDDPBAJJJI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMHKJNHEJII_HBDDPBAJJJI_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBMHOBKCOKD_AOOEDNJJDKK_OFFSET UNITYSDK_OFFSET(0x15E40F10)
#define IBMHOBKCOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E412E0)
#define IBMHOBKCOKD_EEBEGAPDBCG_OFFSET UNITYSDK_OFFSET(0x15E40ED0)
#define IBMHOBKCOKD_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x15E40B80)
#define IBMHOBKCOKD_NIIACBMLDAE_OFFSET UNITYSDK_OFFSET(0x15E40F50)
#define IBMHOBKCOKD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15E40DD0)

inline static constexpr unsigned int IBMHOBKCOKD_TypeDefinitionIndex = 78736;

	class IBMHOBKCOKD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* OOBNOFFKCHG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* BONALEENMON; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* OJENGJKCKGE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* MJEODHKPKEB()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_MJEODHKPKEB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* EEBEGAPDBCG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_EEBEGAPDBCG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* AOOEDNJJDKK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_AOOEDNJJDKK_OFFSET))(this);
		}

		::System::Int32 NIIACBMLDAE(::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*))((::PBYTE)hIl2Cpp + IBMHOBKCOKD_NIIACBMLDAE_OFFSET))(this, a1);
		}

	};

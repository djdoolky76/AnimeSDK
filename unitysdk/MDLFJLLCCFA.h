#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/CustomerState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKNLHDIFKPD.h"
#include "unitysdk/DOOKIBGLODI.h"
#include "unitysdk/NABBMLGAIBK.h"
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDLFJLLCCFA_DKFBMHJBDFN_OFFSET UNITYSDK_OFFSET(0x183E8B50)
#define MDLFJLLCCFA_GMPIFKHJLOD_OFFSET UNITYSDK_OFFSET(0x183E82D0)
#define MDLFJLLCCFA_JCDPFFIDJLI_OFFSET UNITYSDK_OFFSET(0x183E76E0)
#define MDLFJLLCCFA_NFHBDEECIMD_OFFSET UNITYSDK_OFFSET(0x183E76A0)
#define MDLFJLLCCFA_PEAIHAKIKPA_OFFSET UNITYSDK_OFFSET(0x183E7E20)

inline static constexpr unsigned int MDLFJLLCCFA_TypeDefinitionIndex = 79853;

	class MDLFJLLCCFA : public ::System::Object
	{
	public:
		static ::System::Boolean NFHBDEECIMD(::RPG::Client::LittleGame::ComicDessert::CustomerState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::CustomerState))((::PBYTE)hIl2Cpp + MDLFJLLCCFA_NFHBDEECIMD_OFFSET))(a1);
		}

		static ::System::Boolean JCDPFFIDJLI(::System::Collections::Generic::IReadOnlyList_1<::DOOKIBGLODI>* a1, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* a3, ::System::Random* a4, ::DOOKIBGLODI a5)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::DOOKIBGLODI>*, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*, ::System::Random*, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + MDLFJLLCCFA_JCDPFFIDJLI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GMPIFKHJLOD(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::NABBMLGAIBK>* a2, ::System::Collections::Generic::ISet_1<::System::UInt32>* a3, ::System::Collections::Generic::ISet_1<::System::UInt32>* a4, ::System::Random* a5, ::NABBMLGAIBK a6)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::NABBMLGAIBK>*, ::System::Collections::Generic::ISet_1<::System::UInt32>*, ::System::Collections::Generic::ISet_1<::System::UInt32>*, ::System::Random*, ::NABBMLGAIBK))((::PBYTE)hIl2Cpp + MDLFJLLCCFA_GMPIFKHJLOD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* DKFBMHJBDFN(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDLFJLLCCFA_DKFBMHJBDFN_OFFSET))(a1);
		}

		static ::System::Boolean PEAIHAKIKPA(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MDLFJLLCCFA_PEAIHAKIKPA_OFFSET))(a1, a2, a3);
		}

	};

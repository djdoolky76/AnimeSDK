#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOOKIBGLODI.h"
#include "unitysdk/NABBMLGAIBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBPGFHGLKLL;
class MGCHPMCOENF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBBOOMNPADI_AIILCMJGEMM_OFFSET UNITYSDK_OFFSET(0x165AAA10)
#define FBBOOMNPADI_CTOR_OFFSET UNITYSDK_OFFSET(0x165A9E60)
#define FBBOOMNPADI_DLOPBDICLIF_OFFSET UNITYSDK_OFFSET(0x165AB700)
#define FBBOOMNPADI_FOJBFHCIPJG_OFFSET UNITYSDK_OFFSET(0x165AB900)
#define FBBOOMNPADI_GFBKNAJBHPO_OFFSET UNITYSDK_OFFSET(0x165AB6F0)
#define FBBOOMNPADI_HDCDHLLBDBM_OFFSET UNITYSDK_OFFSET(0x165AA510)
#define FBBOOMNPADI_HLKDFBNMJOP_OFFSET UNITYSDK_OFFSET(0x165AB4A0)
#define FBBOOMNPADI_IGNACNHOBEA_OFFSET UNITYSDK_OFFSET(0x165AB830)
#define FBBOOMNPADI_LODDAEBBIMC_OFFSET UNITYSDK_OFFSET(0x165AB6E0)
#define FBBOOMNPADI_OHCBPFKOJKF_OFFSET UNITYSDK_OFFSET(0x165AB630)
#define FBBOOMNPADI_PBIPAGHLINB_OFFSET UNITYSDK_OFFSET(0x165AB9B0)

inline static constexpr unsigned int FBBOOMNPADI_TypeDefinitionIndex = 79951;

	class FBBOOMNPADI : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HLNLPGENIGH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NABBMLGAIBK>* KICJMCMMMNA; // 0x18
		::System::Collections::Generic::List_1<::NABBMLGAIBK>* OOPNDGNIJNL; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::DOOKIBGLODI>*>* GBHGAHHBEPK; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DLCIKLEPOHE; // 0x30
		::System::UInt32 LIOIOBEPOMI; // 0x38
		::System::Void _ctor(::BBPGFHGLKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBPGFHGLKLL*))((::PBYTE)hIl2Cpp + FBBOOMNPADI_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DOOKIBGLODI>* OHCBPFKOJKF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DOOKIBGLODI>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBOOMNPADI_OHCBPFKOJKF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::NABBMLGAIBK>* LODDAEBBIMC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::NABBMLGAIBK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOOMNPADI_LODDAEBBIMC_OFFSET))(this);
		}

		::System::Collections::Generic::ISet_1<::System::UInt32>* GFBKNAJBHPO()
		{
			return ((::System::Collections::Generic::ISet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOOMNPADI_GFBKNAJBHPO_OFFSET))(this);
		}

		::System::Boolean DLOPBDICLIF(::System::UInt32 a1, ::NABBMLGAIBK a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NABBMLGAIBK))((::PBYTE)hIl2Cpp + FBBOOMNPADI_DLOPBDICLIF_OFFSET))(this, a1, a2);
		}

		::System::Boolean IGNACNHOBEA(::System::UInt32 a1, ::DOOKIBGLODI a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + FBBOOMNPADI_IGNACNHOBEA_OFFSET))(this, a1, a2);
		}

		::System::Void HDCDHLLBDBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOOMNPADI_HDCDHLLBDBM_OFFSET))(this);
		}

		::System::Boolean FOJBFHCIPJG(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FBBOOMNPADI_FOJBFHCIPJG_OFFSET))(this, a1);
		}

		::System::Void AIILCMJGEMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOOMNPADI_AIILCMJGEMM_OFFSET))(this);
		}

		::System::Void HLKDFBNMJOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOOMNPADI_HLKDFBNMJOP_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 PBIPAGHLINB(::MGCHPMCOENF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::MGCHPMCOENF*))((::PBYTE)hIl2Cpp + FBBOOMNPADI_PBIPAGHLINB_OFFSET))(a1);
		}

	};

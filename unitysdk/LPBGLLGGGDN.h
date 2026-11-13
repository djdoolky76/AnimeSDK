#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPBGLLGGGDN_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1A5C59B0)
#define LPBGLLGGGDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5C5570)
#define LPBGLLGGGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C5530)
#define LPBGLLGGGDN_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1A5C58A0)
#define LPBGLLGGGDN_FNDNIOIONBM_OFFSET UNITYSDK_OFFSET(0x1A5C56D0)
#define LPBGLLGGGDN_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A5C55B0)
#define LPBGLLGGGDN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A5C5460)
#define LPBGLLGGGDN_IOCCCJMLCON_OFFSET UNITYSDK_OFFSET(0x1A5C5910)
#define LPBGLLGGGDN_LJEAFPOHNCD_OFFSET UNITYSDK_OFFSET(0x1A5C5750)
#define LPBGLLGGGDN_OFIFBMBEHFH_OFFSET UNITYSDK_OFFSET(0x1A5C57D0)
#define LPBGLLGGGDN_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0x1A5C5A20)
#define LPBGLLGGGDN_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1A5C54B0)
#define LPBGLLGGGDN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1A5C5830)
#define LPBGLLGGGDN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A5C5630)

inline static constexpr unsigned int LPBGLLGGGDN_TypeDefinitionIndex = 73331;

	class LPBGLLGGGDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UIController*>* FEKJHAMIJOB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::UIController* PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::UIController* FNDNIOIONBM()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_FNDNIOIONBM_OFFSET))(this);
		}

		::RPG::Client::UIController* LJEAFPOHNCD()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_LJEAFPOHNCD_OFFSET))(this);
		}

		::System::Boolean OFIFBMBEHFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_OFIFBMBEHFH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* PAABEMLAHOL(::System::Predicate_1<::RPG::Client::UIController*>* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_PAABEMLAHOL_OFFSET))(this, a1);
		}

		::System::Int32 IOCCCJMLCON()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBGLLGGGDN_IOCCCJMLCON_OFFSET))(this);
		}

	};

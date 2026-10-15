#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ParallelSelectorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIMMIBPJIJH_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0x16444390)
#define IIMMIBPJIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x16443320)
#define IIMMIBPJIJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16443570)
#define IIMMIBPJIJH_DONLEIOIEHM_OFFSET UNITYSDK_OFFSET(0x16443770)
#define IIMMIBPJIJH_EIOIKAPEGJM_OFFSET UNITYSDK_OFFSET(0x16443340)
#define IIMMIBPJIJH_FOGJHALOCJJ_OFFSET UNITYSDK_OFFSET(0x16443D00)
#define IIMMIBPJIJH_HPPOGEJAKDN_OFFSET UNITYSDK_OFFSET(0x16443C00)
#define IIMMIBPJIJH_INDPEEHEJDE_OFFSET UNITYSDK_OFFSET(0x16443B00)
#define IIMMIBPJIJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164436D0)
#define IIMMIBPJIJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16443720)
#define IIMMIBPJIJH_TICK_OFFSET UNITYSDK_OFFSET(0x16443A50)

inline static constexpr unsigned int IIMMIBPJIJH_TypeDefinitionIndex = 54766;

	class IIMMIBPJIJH : public ::BNBOAMEBAOE
	{
	public:
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void EIOIKAPEGJM(::RPG::GameCore::ParallelSelectorConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_EIOIKAPEGJM_OFFSET))(this, a1);
		}

		::System::Void FOGJHALOCJJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_FOGJHALOCJJ_OFFSET))(this, a1);
		}

		::System::Boolean HPPOGEJAKDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_HPPOGEJAKDN_OFFSET))(this);
		}

		::System::Boolean INDPEEHEJDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_INDPEEHEJDE_OFFSET))(this);
		}

		::System::Void DONLEIOIEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMIBPJIJH_DONLEIOIEHM_OFFSET))(this);
		}

	};

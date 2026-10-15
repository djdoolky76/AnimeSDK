#pragma once
#include "unitysdk/unitysdk.h"
class DCJLBKKOHHC;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_ADBLIKLIEOO_OFFSET UNITYSDK_OFFSET(0x1CBE0)
#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_CNIDLPKAEAD_OFFSET UNITYSDK_OFFSET(0x1D30)
#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)
#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x1CB30)
#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_KJOCCFFILMA_OFFSET UNITYSDK_OFFSET(0x1D40)
#define MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1CB90)

inline static constexpr unsigned int MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_TypeDefinitionIndex = 49117;

	struct alignas(8) MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF
	{
		::UnityEngine::GameObject* GLAKJAOPIDJ; // 0x10
		::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* CNIHDDHLAAI; // 0x18
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::DCJLBKKOHHC*>*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DADCFBHGLOH(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::DCJLBKKOHHC*>*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void ADBLIKLIEOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_ADBLIKLIEOO_OFFSET))(this);
		}

		::UnityEngine::GameObject* CNIDLPKAEAD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_CNIDLPKAEAD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* KJOCCFFILMA()
		{
			return ((::System::Collections::Generic::List_1<::DCJLBKKOHHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LKPHHHLDJHB_BJJCIHDHICF_KJOCCFFILMA_OFFSET))(this);
		}

	};

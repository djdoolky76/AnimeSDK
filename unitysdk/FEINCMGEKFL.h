#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FEINCMGEKFL;
class IFEABBJBIGK;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define FEINCMGEKFL_BJNDANONMJN_OFFSET UNITYSDK_OFFSET(0x157231B0)
#define FEINCMGEKFL_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15722F70)
#define FEINCMGEKFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15722F00)
#define FEINCMGEKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15723B60)
#define FEINCMGEKFL_DOFHGKPNBHB_OFFSET UNITYSDK_OFFSET(0x15723840)
#define FEINCMGEKFL_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x15723230)
#define FEINCMGEKFL_HONOOCNEMEB_OFFSET UNITYSDK_OFFSET(0x15723A90)
#define FEINCMGEKFL_MBPOHIBNDMP_OFFSET UNITYSDK_OFFSET(0x157235C0)
#define FEINCMGEKFL_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x157234D0)
#define FEINCMGEKFL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x157230D0)

inline static constexpr unsigned int FEINCMGEKFL_TypeDefinitionIndex = 80853;

	class FEINCMGEKFL : public ::MLKDDLHNNHH
	{
	public:
		::System::Collections::Generic::List_1<::IFEABBJBIGK*>* GFFAGJOELCH; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* GHKGBMKFMJG; // 0x28
		::System::Collections::Generic::List_1<::System::Boolean>* ENOOFJFOJEH; // 0x30
		::UnityEngine::Coroutine* BFOPPPBPDEE; // 0x38
		::System::Int32 BBJLJNNLIOM; // 0x40
		::System::Single CDOLCLMGEBO; // 0x44
		::System::Int32 FDBCPLFBHEO; // 0x48
		::System::Boolean BEMMCKLJICI; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_CTOR_OFFSET))(this);
		}

		static ::FEINCMGEKFL* BPLPBPMEODA(::System::Collections::Generic::IReadOnlyList_1<::IFEABBJBIGK*>* a1, ::System::Single a2)
		{
			return ((::FEINCMGEKFL*(*)(::System::Collections::Generic::IReadOnlyList_1<::IFEABBJBIGK*>*, ::System::Single))((::PBYTE)hIl2Cpp + FEINCMGEKFL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::FEINCMGEKFL* BPLPBPMEODA_1(::System::Collections::Generic::IReadOnlyList_1<::IFEABBJBIGK*>* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::FEINCMGEKFL*(*)(::System::Collections::Generic::IReadOnlyList_1<::IFEABBJBIGK*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FEINCMGEKFL_BPLPBPMEODA_1_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_ONCLEAR_OFFSET))(this);
		}

		::System::Void MBPOHIBNDMP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEINCMGEKFL_MBPOHIBNDMP_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* BJNDANONMJN()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_BJNDANONMJN_OFFSET))(this);
		}

		::System::Void HONOOCNEMEB(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FEINCMGEKFL_HONOOCNEMEB_OFFSET))(this, a1, a2);
		}

		::System::Void DOFHGKPNBHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL_DOFHGKPNBHB_OFFSET))(this);
		}

	};

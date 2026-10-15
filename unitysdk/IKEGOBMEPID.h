#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKEGOBMEPID_ExecuteState.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class IKEGOBMEPID;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IKEGOBMEPID_AHMBCIAPOLK_OFFSET UNITYSDK_OFFSET(0x16478C70)
#define IKEGOBMEPID_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164788C0)
#define IKEGOBMEPID_CLEAR_OFFSET UNITYSDK_OFFSET(0x16479140)
#define IKEGOBMEPID_CTOR_OFFSET UNITYSDK_OFFSET(0x16478730)
#define IKEGOBMEPID_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x16478940)
#define IKEGOBMEPID_GET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x164784F0)
#define IKEGOBMEPID_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16478AB0)
#define IKEGOBMEPID_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x16478600)
#define IKEGOBMEPID_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x16478EE0)
#define IKEGOBMEPID_KPCPNGPJAJB_OFFSET UNITYSDK_OFFSET(0x16479920)
#define IKEGOBMEPID_LKPDIOHFEAM_OFFSET UNITYSDK_OFFSET(0x16478510)
#define IKEGOBMEPID_MADDJGJFAIE_OFFSET UNITYSDK_OFFSET(0x16478560)
#define IKEGOBMEPID_MHNOBMJHAHP_OFFSET UNITYSDK_OFFSET(0x16479410)
#define IKEGOBMEPID_MKLLFONGAPO_OFFSET UNITYSDK_OFFSET(0x16479190)
#define IKEGOBMEPID_OBFABDJNLED_OFFSET UNITYSDK_OFFSET(0x164785B0)
#define IKEGOBMEPID_SET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x16478500)
#define IKEGOBMEPID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16479360)

inline static constexpr unsigned int IKEGOBMEPID_TypeDefinitionIndex = 71116;

	class IKEGOBMEPID : public ::System::Object
	{
	public:
		::System::Action_2<::IKEGOBMEPID*, ::System::Boolean>* LGAOOKPFIMF; // 0x10
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* CGIOKAFHOLM; // 0x18
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* FDMJKDCBIGK; // 0x20
		::System::Collections::Generic::HashSet_1<::IFEABBJBIGK*>* PFFCKJPDLGA; // 0x28
		::System::String* _ParallelName_k__BackingField; // 0x30
		::System::Boolean DMGHDNNCNFJ; // 0x38
		::System::Byte _padding0[0x3];
		::IKEGOBMEPID_ExecuteState DMPNOBIEINP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_CTOR_OFFSET))(this);
		}

		::System::String* get_ParallelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_GET_PARALLELNAME_OFFSET))(this);
		}

		::System::Void set_ParallelName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_SET_PARALLELNAME_OFFSET))(this, a1);
		}

		::System::Int32 LKPDIOHFEAM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_LKPDIOHFEAM_OFFSET))(this);
		}

		::System::Int32 MADDJGJFAIE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_MADDJGJFAIE_OFFSET))(this);
		}

		::System::Int32 OBFABDJNLED()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_OBFABDJNLED_OFFSET))(this);
		}

		::System::Int32 JFNJCIIHEFA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_JFNJCIIHEFA_OFFSET))(this);
		}

		static ::IKEGOBMEPID* BPLPBPMEODA(::System::String* a1)
		{
			return ((::IKEGOBMEPID*(*)(::System::String*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void FGLGLHDAEDE(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM(::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_TOSTRING_OFFSET))(this);
		}

		::System::Void MKLLFONGAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_MKLLFONGAPO_OFFSET))(this);
		}

		::System::Void MHNOBMJHAHP(::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_MHNOBMJHAHP_OFFSET))(this, a1);
		}

		::System::Void AHMBCIAPOLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEGOBMEPID_AHMBCIAPOLK_OFFSET))(this);
		}

		::System::Void KPCPNGPJAJB(::IFEABBJBIGK* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKEGOBMEPID_KPCPNGPJAJB_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKEGOBMEPID_ExecuteState.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class IKEGOBMEPID;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IKEGOBMEPID_AHMBCIAPOLK_OFFSET UNITYSDK_OFFSET(0x16486390)
#define IKEGOBMEPID_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16485FE0)
#define IKEGOBMEPID_CLEAR_OFFSET UNITYSDK_OFFSET(0x16486860)
#define IKEGOBMEPID_CTOR_OFFSET UNITYSDK_OFFSET(0x16485E50)
#define IKEGOBMEPID_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x16486060)
#define IKEGOBMEPID_GET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x16485C10)
#define IKEGOBMEPID_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x164861D0)
#define IKEGOBMEPID_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x16485D20)
#define IKEGOBMEPID_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x16486600)
#define IKEGOBMEPID_KPCPNGPJAJB_OFFSET UNITYSDK_OFFSET(0x16487040)
#define IKEGOBMEPID_LKPDIOHFEAM_OFFSET UNITYSDK_OFFSET(0x16485C30)
#define IKEGOBMEPID_MADDJGJFAIE_OFFSET UNITYSDK_OFFSET(0x16485C80)
#define IKEGOBMEPID_MHNOBMJHAHP_OFFSET UNITYSDK_OFFSET(0x16486B30)
#define IKEGOBMEPID_MKLLFONGAPO_OFFSET UNITYSDK_OFFSET(0x164868B0)
#define IKEGOBMEPID_OBFABDJNLED_OFFSET UNITYSDK_OFFSET(0x16485CD0)
#define IKEGOBMEPID_SET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x16485C20)
#define IKEGOBMEPID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16486A80)

	class IKEGOBMEPID : public ::System::Object
	{
	public:
		::System::Action* LGAOOKPFIMF; // 0x10
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* CGIOKAFHOLM; // 0x18
		::System::Collections::Generic::HashSet_1<::IFEABBJBIGK*>* PFFCKJPDLGA; // 0x20
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* FDMJKDCBIGK; // 0x28
		::System::String* _ParallelName_k__BackingField; // 0x30
		::IKEGOBMEPID_ExecuteState DMPNOBIEINP; // 0x38
		::System::Boolean DMGHDNNCNFJ; // 0x3C
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

		::System::Void HKKFFCBJOKM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKEGOBMEPID_HKKFFCBJOKM_OFFSET))(this, a1);
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

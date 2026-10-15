#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAIMPDABHBE_ExecuteState.h"
#include "unitysdk/System/Object.h"
class CAIMPDABHBE;
class IFEABBJBIGK;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CAIMPDABHBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC479870)
#define CAIMPDABHBE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC479F70)
#define CAIMPDABHBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4797A0)
#define CAIMPDABHBE_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0xC4798F0)
#define CAIMPDABHBE_GET_SEQUENCENAME_OFFSET UNITYSDK_OFFSET(0xC4795E0)
#define CAIMPDABHBE_HCLHOPAPFAC_OFFSET UNITYSDK_OFFSET(0xC479C20)
#define CAIMPDABHBE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC479A60)
#define CAIMPDABHBE_JCKDNNGALEO_OFFSET UNITYSDK_OFFSET(0xC479650)
#define CAIMPDABHBE_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0xC4796C0)
#define CAIMPDABHBE_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xC479DE0)
#define CAIMPDABHBE_KPCPNGPJAJB_OFFSET UNITYSDK_OFFSET(0xC47A740)
#define CAIMPDABHBE_LKPDIOHFEAM_OFFSET UNITYSDK_OFFSET(0xC479600)
#define CAIMPDABHBE_MADDJGJFAIE_OFFSET UNITYSDK_OFFSET(0xC479660)
#define CAIMPDABHBE_MEBHJPIPJJH_OFFSET UNITYSDK_OFFSET(0xC479FC0)
#define CAIMPDABHBE_MHNOBMJHAHP_OFFSET UNITYSDK_OFFSET(0xC47A230)
#define CAIMPDABHBE_OBFABDJNLED_OFFSET UNITYSDK_OFFSET(0xC479670)
#define CAIMPDABHBE_SET_SEQUENCENAME_OFFSET UNITYSDK_OFFSET(0xC4795F0)
#define CAIMPDABHBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC47A180)

inline static constexpr unsigned int CAIMPDABHBE_TypeDefinitionIndex = 71118;

	class CAIMPDABHBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* FDMJKDCBIGK; // 0x10
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* GDMJOMLMFGM; // 0x18
		::IFEABBJBIGK* NDKHHBEGDJA; // 0x20
		::System::Action_2<::CAIMPDABHBE*, ::System::Boolean>* LGAOOKPFIMF; // 0x28
		::System::String* _SequenceName_k__BackingField; // 0x30
		::System::Boolean DMGHDNNCNFJ; // 0x38
		::System::Byte _padding0[0x3];
		::CAIMPDABHBE_ExecuteState DMPNOBIEINP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_CTOR_OFFSET))(this);
		}

		::System::String* get_SequenceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_GET_SEQUENCENAME_OFFSET))(this);
		}

		::System::Void set_SequenceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAIMPDABHBE_SET_SEQUENCENAME_OFFSET))(this, a1);
		}

		::System::Int32 LKPDIOHFEAM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_LKPDIOHFEAM_OFFSET))(this);
		}

		::System::Boolean JCKDNNGALEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_JCKDNNGALEO_OFFSET))(this);
		}

		::System::Int32 MADDJGJFAIE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_MADDJGJFAIE_OFFSET))(this);
		}

		::System::Int32 OBFABDJNLED()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_OBFABDJNLED_OFFSET))(this);
		}

		::System::Int32 JFNJCIIHEFA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_JFNJCIIHEFA_OFFSET))(this);
		}

		static ::CAIMPDABHBE* BPLPBPMEODA(::System::String* a1)
		{
			return ((::CAIMPDABHBE*(*)(::System::String*))((::PBYTE)hIl2Cpp + CAIMPDABHBE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void FGLGLHDAEDE(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + CAIMPDABHBE_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM(::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CAIMPDABHBE_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_TOSTRING_OFFSET))(this);
		}

		::System::Void MEBHJPIPJJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_MEBHJPIPJJH_OFFSET))(this);
		}

		::System::Void MHNOBMJHAHP(::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>*))((::PBYTE)hIl2Cpp + CAIMPDABHBE_MHNOBMJHAHP_OFFSET))(this, a1);
		}

		::System::Void HCLHOPAPFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMPDABHBE_HCLHOPAPFAC_OFFSET))(this);
		}

		::System::Void KPCPNGPJAJB(::IFEABBJBIGK* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAIMPDABHBE_KPCPNGPJAJB_OFFSET))(this, a1, a2);
		}

	};

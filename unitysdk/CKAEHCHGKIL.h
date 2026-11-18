#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKAEHCHGKIL_BAICKPPPCJC_OFFSET UNITYSDK_OFFSET(0x147A7350)
#define CKAEHCHGKIL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x147A7360)
#define CKAEHCHGKIL_DBIKDFEGOPK_OFFSET UNITYSDK_OFFSET(0x147A74B0)
#define CKAEHCHGKIL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x147A72C0)
#define CKAEHCHGKIL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x147A7220)
#define CKAEHCHGKIL_GDKEAAOGPMH_OFFSET UNITYSDK_OFFSET(0x147A74A0)
#define CKAEHCHGKIL_JOGDDLNMABH_OFFSET UNITYSDK_OFFSET(0x147A72B0)
#define CKAEHCHGKIL_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x147A7400)
#define CKAEHCHGKIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x147A70A0)
#define CKAEHCHGKIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A71A0)
#define CKAEHCHGKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x147A7210)

inline static constexpr unsigned int CKAEHCHGKIL_TypeDefinitionIndex = 62179;

class CKAEHCHGKIL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x112; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* _PIFFDJMAPBN_k__BackingField; // 0x20
	::System::Boolean _BJIBFCDGPFM_k__BackingField; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKAEHCHGKIL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void JOGDDLNMABH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_JOGDDLNMABH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Boolean BAICKPPPCJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_BAICKPPPCJC_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::System::Boolean KKMENMCMMBN, ::System::Collections::Generic::List_1<::System::String*>* DFLLJMJCBOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, KKMENMCMMBN, DFLLJMJCBOE);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void GDKEAAOGPMH(::System::Collections::Generic::List_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_GDKEAAOGPMH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* DBIKDFEGOPK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEHCHGKIL_DBIKDFEGOPK_OFFSET))(this);
	}
};

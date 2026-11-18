#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FLMJPFJKBGG_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x116BC5E0)
#define FLMJPFJKBGG_DBPPONOCECE_OFFSET UNITYSDK_OFFSET(0x116BC750)
#define FLMJPFJKBGG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x116BC710)
#define FLMJPFJKBGG_JGGILNLLMJD_OFFSET UNITYSDK_OFFSET(0x116BC4C0)
#define FLMJPFJKBGG_KEDOONDALPE_OFFSET UNITYSDK_OFFSET(0x116BC630)
#define FLMJPFJKBGG_LHPLBBINONE_OFFSET UNITYSDK_OFFSET(0x116BC4B0)
#define FLMJPFJKBGG_MHKFLNDPIIC_OFFSET UNITYSDK_OFFSET(0x116BC700)
#define FLMJPFJKBGG_OPLNLPOGBLK_OFFSET UNITYSDK_OFFSET(0x116BC570)
#define FLMJPFJKBGG_PLHFKCJGAKL_OFFSET UNITYSDK_OFFSET(0x116BC620)
#define FLMJPFJKBGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116BC640)
#define FLMJPFJKBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x116BC6F0)

inline static constexpr unsigned int FLMJPFJKBGG_TypeDefinitionIndex = 73063;

class FLMJPFJKBGG : public ::System::Object
{
public:
	::System::String* _JOBAKABOLLM_k__BackingField; // 0x10
	::System::Action_1<::System::Boolean>* _EKJEHIADCLE_k__BackingField; // 0x18
	::System::Boolean BDMACCFIGDM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG__CTOR_OFFSET))(this);
	}

	::System::Boolean LHPLBBINONE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_LHPLBBINONE_OFFSET))(this);
	}

	::System::Void JGGILNLLMJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_JGGILNLLMJD_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Action_1<::System::Boolean>* PLHFKCJGAKL()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_PLHFKCJGAKL_OFFSET))(this);
	}

	::System::Void KEDOONDALPE(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_KEDOONDALPE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_TOSTRING_OFFSET))(this);
	}

	::System::String* MHKFLNDPIIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_MHKFLNDPIIC_OFFSET))(this);
	}

	::System::Void OPLNLPOGBLK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_OPLNLPOGBLK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void DBPPONOCECE(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLMJPFJKBGG_DBPPONOCECE_OFFSET))(this, EGEGIMGMJHN);
	}
};

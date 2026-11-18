#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOLOFOBLBC.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define OFCMAPHBLOK_APIKHMLDPNL_OFFSET UNITYSDK_OFFSET(0xF180270)
#define OFCMAPHBLOK_CDGPDKKIHPD_OFFSET UNITYSDK_OFFSET(0xF180660)
#define OFCMAPHBLOK_GEPDOJDCDMN_OFFSET UNITYSDK_OFFSET(0xF180060)
#define OFCMAPHBLOK_GJOPIANHBFM_OFFSET UNITYSDK_OFFSET(0xF180330)
#define OFCMAPHBLOK_IMNNOKDEFFD_OFFSET UNITYSDK_OFFSET(0xF1803B0)
#define OFCMAPHBLOK_KNLHJIIGHOD_OFFSET UNITYSDK_OFFSET(0xF180010)
#define OFCMAPHBLOK__CTOR_OFFSET UNITYSDK_OFFSET(0xF180000)

inline static constexpr unsigned int OFCMAPHBLOK_TypeDefinitionIndex = 59939;

class OFCMAPHBLOK : public ::System::Object
{
public:
	// static const ::System::String* PEMKLLCPCGI; // 0x0
	// static const ::System::String* JEDBGJBLFEK; // 0x0
	::ICOLOFOBLBC OMMMKOPJAID; // 0x10
	::System::Action* LHFMDAMOLLK; // 0x28
	::UnityEngine::GameObject* BBBFMPOCALM; // 0x30
	::System::Action* DIPHCFNLACD; // 0x38
	::System::Action_1<::System::Boolean>* BNCHNHMJKOK; // 0x40
	::UnityEngine::Animation* LOMDGAFNEOK; // 0x48
	::PopText* HAEOLEKEOCE; // 0x50
	::System::Boolean EGBFGHNFADM; // 0x58
	::System::Byte _padding0[0x3];
	::System::UInt32 IFBPFKLGDML; // 0x5C
	::System::UInt32 ABBPHLCMBII; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK__CTOR_OFFSET))(this);
	}

	::System::Void KNLHJIIGHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_KNLHJIIGHOD_OFFSET))(this);
	}

	::System::Void GEPDOJDCDMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_GEPDOJDCDMN_OFFSET))(this);
	}

	::System::Void APIKHMLDPNL(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_APIKHMLDPNL_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void GJOPIANHBFM(::UnityEngine::GameObject* IAPKABMDJNF, ::PopText* FCCLIEJAKLI, ::UnityEngine::Animation* AOKJEGNBALI, ::System::Action_1<::System::Boolean>* GDNKPBLGIOJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::PopText*, ::UnityEngine::Animation*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_GJOPIANHBFM_OFFSET))(this, IAPKABMDJNF, FCCLIEJAKLI, AOKJEGNBALI, GDNKPBLGIOJ);
	}

	::System::Void IMNNOKDEFFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_IMNNOKDEFFD_OFFSET))(this);
	}

	::System::Void CDGPDKKIHPD(::ICOLOFOBLBC NJPFAPHOGHP)
	{
		return ((::System::Void(*)(::PVOID, ::ICOLOFOBLBC))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_CDGPDKKIHPD_OFFSET))(this, NJPFAPHOGHP);
	}
};

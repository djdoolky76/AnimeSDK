#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EJINDPBKMHH_CDEHCHHCIMO_JKIGBELGLAI_OFFSET UNITYSDK_OFFSET(0x14AA0830)
#define EJINDPBKMHH_CDEHCHHCIMO_PFIHODDAANL_OFFSET UNITYSDK_OFFSET(0x14AA0820)
#define EJINDPBKMHH_CDEHCHHCIMO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA0810)

inline static constexpr unsigned int EJINDPBKMHH_CDEHCHHCIMO_TypeDefinitionIndex = 46501;

class EJINDPBKMHH_CDEHCHHCIMO : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* EJGDHCIBCJH; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Int32 MDPGLDEFMJF; // 0x20
	::System::Int32 AIDIAEONKGC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_CDEHCHHCIMO__CTOR_OFFSET))(this);
	}

	::System::Void PFIHODDAANL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_CDEHCHHCIMO_PFIHODDAANL_OFFSET))(this);
	}

	::System::Void JKIGBELGLAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_CDEHCHHCIMO_JKIGBELGLAI_OFFSET))(this);
	}
};

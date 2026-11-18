#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGJEMIBOFNI;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define HGJEMIBOFNI_BGLDNDPPOFK_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x17AF6040)
#define HGJEMIBOFNI_BGLDNDPPOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6030)

inline static constexpr unsigned int HGJEMIBOFNI_BGLDNDPPOFK_TypeDefinitionIndex = 73670;

class HGJEMIBOFNI_BGLDNDPPOFK : public ::System::Object
{
public:
	::HGJEMIBOFNI* KLHPEBKNIFB; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18
	::System::Single FOOBONOEPGD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_BGLDNDPPOFK__CTOR_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_BGLDNDPPOFK_AACLKPHGMLM_OFFSET))(this, KHGFAKJKDGG);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECNIINBHMGN_CIAJJBBJFFL.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageContext; }
namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }
namespace System { class String; }

#define ECNIINBHMGN_KACAGCHCGLH_FJDCJAIBFBB_OFFSET UNITYSDK_OFFSET(0x16BD0F50)
#define ECNIINBHMGN_KACAGCHCGLH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD0EB0)

inline static constexpr unsigned int ECNIINBHMGN_KACAGCHCGLH_TypeDefinitionIndex = 45468;

class ECNIINBHMGN_KACAGCHCGLH : public ::System::Object
{
public:
	::MoleMole::UIComicPageContext* CFHMNPMPGIO; // 0x10
	::System::Action* AGGHIDGLAHO; // 0x18
	::System::Action* IGPJKNNJECO; // 0x20
	::System::String* BNHNGJKNJJD; // 0x28
	::System::Action* PEGBHJCNKJG; // 0x30
	::Foundation::AssetRequestHandle IAFHBCHLBME; // 0x38
	::MoleMole::UIComicPageController* JGFKBBFIPJF; // 0x58
	::System::Int64 EFPCHLGKEDA; // 0x60
	::ECNIINBHMGN_CIAJJBBJFFL LCNKFFOMOHN; // 0x68
	::System::Boolean NHEHJOHCHOM; // 0x69
	::System::Byte _padding0[0x2];
	::System::Int32 CLHLJKKAAPO; // 0x6C

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECNIINBHMGN_KACAGCHCGLH__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void FJDCJAIBFBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIINBHMGN_KACAGCHCGLH_FJDCJAIBFBB_OFFSET))(this);
	}
};

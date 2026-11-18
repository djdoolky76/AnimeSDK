#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACBAIBGFOB.h"
#include "unitysdk/JICPHOOKLPK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define BEKBNLGBHFN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14C3B8D0)
#define BEKBNLGBHFN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14C39DA0)
#define BEKBNLGBHFN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14C3B930)
#define BEKBNLGBHFN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14C39E20)
#define BEKBNLGBHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3BF10)

inline static constexpr unsigned int BEKBNLGBHFN_TypeDefinitionIndex = 69973;

class BEKBNLGBHFN : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* PHNLAAIOEME; // 0x10
	::UnityEngine::AnimationCurve* CGBBIMHKCAH; // 0x18
	::UnityEngine::AnimationCurve* BEGDNINKBAK; // 0x20
	::System::String* CEGPNLELLOA; // 0x28
	::System::String* LFDGDBEMNKC; // 0x30
	::UnityEngine::AnimationCurve* ABFINLGAPAL; // 0x38
	::AACBAIBGFOB MNMLNFOPDFI; // 0x40
	::System::Single PDJHKINKHOI; // 0x44
	::System::Single KPEFMLLGBIK; // 0x48
	::System::Single OHJDFIBMFMF; // 0x4C
	::JICPHOOKLPK PPDCJAJJDFO; // 0x50
	::System::Single BPHCHJMPFEJ; // 0x54
	::System::Int32 HLBKHEFJAPH; // 0x58
	::System::Single CBHJPCMMALF; // 0x5C
	::System::Single IPMPNHDFFNC; // 0x60
	::System::Single JBEPOGGBMLE; // 0x64
	::System::Single DALFCNAOHCF; // 0x68
	::System::Single JBOMPDNMGFB; // 0x6C
	::UnityEngine::Color JOENPNELPOC; // 0x70
	::UnityEngine::Color KPFDNPPIMEA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKBNLGBHFN__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BEKBNLGBHFN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEKBNLGBHFN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEKBNLGBHFN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BEKBNLGBHFN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

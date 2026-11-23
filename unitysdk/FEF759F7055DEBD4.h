#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }

#define FEF759F7055DEBD4_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1695BD0)
#define FEF759F7055DEBD4_E6BC822FBE279883_OFFSET UNITYSDK_OFFSET(0x1695D30)
#define FEF759F7055DEBD4_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1695DA0)
#define FEF759F7055DEBD4__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int FEF759F7055DEBD4_TypeDefinitionIndex = 400;

class FEF759F7055DEBD4 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 B424ECCB5F808A98; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* BEB7CDD907C238D4; // 0x88
	::ABC::UI::MonoLocalizedTmp* F0813067B58873A6; // 0x90
	::UnityEngine::UI::Image* E2CFE1458FF17B96; // 0x98

	::System::Void EC3033C0485522FB(::System::UInt32 EA3C9D11E469EAA2, ::System::Action_1<::System::UInt32>* BC4D32D033A590FC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FEF759F7055DEBD4_EC3033C0485522FB_OFFSET))(this, EA3C9D11E469EAA2, BC4D32D033A590FC);
	}

	::System::Void E6BC822FBE279883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEF759F7055DEBD4_E6BC822FBE279883_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEF759F7055DEBD4__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FEF759F7055DEBD4_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}
};

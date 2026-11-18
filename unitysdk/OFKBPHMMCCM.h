#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectPattern/MonoEffectSoDataBase.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFKBPHMMCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDBE40)

inline static constexpr unsigned int OFKBPHMMCCM_TypeDefinitionIndex = 55944;

class OFKBPHMMCCM : public ::MoleMole::Config::EffectPattern::MonoEffectSoDataBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>* AJDPOBICLJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBPHMMCCM__CTOR_OFFSET))(this);
	}
};

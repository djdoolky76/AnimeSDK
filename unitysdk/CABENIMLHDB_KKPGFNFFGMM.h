#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CABENIMLHDB_KKPGFNFFGMM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14F0AB60)
#define CABENIMLHDB_KKPGFNFFGMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0AB50)

inline static constexpr unsigned int CABENIMLHDB_KKPGFNFFGMM_TypeDefinitionIndex = 83733;

class CABENIMLHDB_KKPGFNFFGMM : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABENIMLHDB_KKPGFNFFGMM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABENIMLHDB_KKPGFNFFGMM_PNGOHNLELDJ_OFFSET))(this);
	}
};

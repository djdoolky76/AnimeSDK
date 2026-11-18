#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KCCHNBPIIFO_NBAGCHMDLPJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1514C1B0)
#define KCCHNBPIIFO_NBAGCHMDLPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C1A0)

inline static constexpr unsigned int KCCHNBPIIFO_NBAGCHMDLPJ_TypeDefinitionIndex = 51638;

class KCCHNBPIIFO_NBAGCHMDLPJ : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_NBAGCHMDLPJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_NBAGCHMDLPJ_PNGOHNLELDJ_OFFSET))(this);
	}
};

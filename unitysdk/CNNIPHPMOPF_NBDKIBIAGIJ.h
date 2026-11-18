#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNNIPHPMOPF_NBDKIBIAGIJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19A1A760)
#define CNNIPHPMOPF_NBDKIBIAGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1A750)

inline static constexpr unsigned int CNNIPHPMOPF_NBDKIBIAGIJ_TypeDefinitionIndex = 60862;

class CNNIPHPMOPF_NBDKIBIAGIJ : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_NBDKIBIAGIJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_NBDKIBIAGIJ_PNGOHNLELDJ_OFFSET))(this);
	}
};

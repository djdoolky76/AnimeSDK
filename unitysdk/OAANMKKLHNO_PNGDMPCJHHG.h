#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OAANMKKLHNO_PNGDMPCJHHG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15FBD8C0)
#define OAANMKKLHNO_PNGDMPCJHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBD8B0)

inline static constexpr unsigned int OAANMKKLHNO_PNGDMPCJHHG_TypeDefinitionIndex = 91271;

class OAANMKKLHNO_PNGDMPCJHHG : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANMKKLHNO_PNGDMPCJHHG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANMKKLHNO_PNGDMPCJHHG_PNGOHNLELDJ_OFFSET))(this);
	}
};

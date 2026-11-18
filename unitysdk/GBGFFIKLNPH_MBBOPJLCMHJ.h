#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GBGFFIKLNPH_MBBOPJLCMHJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xBB7FF90)
#define GBGFFIKLNPH_MBBOPJLCMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7FF80)

inline static constexpr unsigned int GBGFFIKLNPH_MBBOPJLCMHJ_TypeDefinitionIndex = 41447;

class GBGFFIKLNPH_MBBOPJLCMHJ : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_MBBOPJLCMHJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_MBBOPJLCMHJ_PNGOHNLELDJ_OFFSET))(this);
	}
};

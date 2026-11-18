#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMDJJNLHBIF_NDKGKCAANNM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1857F4F0)
#define BMDJJNLHBIF_NDKGKCAANNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1857F4E0)

inline static constexpr unsigned int BMDJJNLHBIF_NDKGKCAANNM_TypeDefinitionIndex = 75420;

class BMDJJNLHBIF_NDKGKCAANNM : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_NDKGKCAANNM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_NDKGKCAANNM_PNGOHNLELDJ_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GMPBABCBOGH_PMGFACECDNN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x10F09F20)
#define GMPBABCBOGH_PMGFACECDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F09F10)

inline static constexpr unsigned int GMPBABCBOGH_PMGFACECDNN_TypeDefinitionIndex = 60726;

class GMPBABCBOGH_PMGFACECDNN : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBABCBOGH_PMGFACECDNN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBABCBOGH_PMGFACECDNN_PNGOHNLELDJ_OFFSET))(this);
	}
};

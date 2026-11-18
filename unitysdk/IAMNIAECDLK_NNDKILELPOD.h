#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IAMNIAECDLK_NNDKILELPOD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15398220)
#define IAMNIAECDLK_NNDKILELPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15398210)

inline static constexpr unsigned int IAMNIAECDLK_NNDKILELPOD_TypeDefinitionIndex = 65177;

class IAMNIAECDLK_NNDKILELPOD : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMNIAECDLK_NNDKILELPOD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMNIAECDLK_NNDKILELPOD_PNGOHNLELDJ_OFFSET))(this);
	}
};

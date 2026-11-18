#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BBMPNNCEKEP_IKMEONNDOPP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x113D33E0)
#define BBMPNNCEKEP_IKMEONNDOPP__CTOR_OFFSET UNITYSDK_OFFSET(0x113D33D0)

inline static constexpr unsigned int BBMPNNCEKEP_IKMEONNDOPP_TypeDefinitionIndex = 79586;

class BBMPNNCEKEP_IKMEONNDOPP : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_IKMEONNDOPP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_IKMEONNDOPP_PNGOHNLELDJ_OFFSET))(this);
	}
};

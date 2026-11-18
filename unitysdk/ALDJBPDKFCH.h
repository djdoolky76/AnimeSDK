#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

inline static constexpr unsigned int ALDJBPDKFCH_TypeDefinitionIndex = 61419;

struct alignas(8) ALDJBPDKFCH
{
	::System::String* COLJBFFBPIC; // 0x10
	::System::Int32 BPFEIHPKGIM; // 0x18
	::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis FNGCNMHLCFG; // 0x1C
	::System::Nullable_1<::UnityEngine::Vector3> KCPMJCGONBH; // 0x20
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::UnityEngine::Quaternion> MJFKENFHLHO; // 0x30
	::System::Byte _padding1[0xC];
	::System::Single KPELGKHJAJG; // 0x44
	::System::Single POPCFLGOKAD; // 0x48
	::System::Single DBBFCEJAMAJ; // 0x4C
	::System::Nullable_1<::System::Object*> NFEHMEFNLEG; // 0x50
};

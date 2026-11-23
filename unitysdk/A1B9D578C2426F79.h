#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/FD699FA2B6BA260A.h"

namespace UnityEngine { class FAED0374422E783A; }

#define A1B9D578C2426F79__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7FD0)

inline static constexpr unsigned int A1B9D578C2426F79_TypeDefinitionIndex = 508;

class A1B9D578C2426F79 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::FD699FA2B6BA260A FD71861C0D0312D2; // 0x38
	::System::Boolean F2B3EC9A9306E71E; // 0x3C
	::System::Boolean E5019A4EA5F063B3; // 0x3D
	::System::Boolean EB7F3966D4851B6D; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Single A09BDFB58F03FB5D; // 0x40
	::System::Boolean BAD658C8AA0844D2; // 0x44
	::System::Byte _padding1[0x3];
	::System::Single F2F03FA56C3B12AA; // 0x48
	::System::Boolean F86CE46C4E82C941; // 0x4C
	::System::Byte _padding2[0x3];
	::System::Single B4B7032B61434697; // 0x50
	::System::Boolean E8F6E059F32AB5DC; // 0x54
	::System::Byte _padding3[0x3];
	::UnityEngine::FAED0374422E783A* E043BD92F9CC54CD; // 0x58
	::System::Boolean B8B1EA96A8DFB8CD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1B9D578C2426F79__CTOR_OFFSET))(this);
	}
};

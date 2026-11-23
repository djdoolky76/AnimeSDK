#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }
namespace UnityEngine { class FAED0374422E783A; }

#define E2D8EA7FFA7B378A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B69E70)

inline static constexpr unsigned int E2D8EA7FFA7B378A_TypeDefinitionIndex = 2219;

class E2D8EA7FFA7B378A : public ::E379DE61A548837D
{
public:
	::System::String* B22024564E8C495E; // 0x38
	::System::Single ABDE1A90505274CB; // 0x40
	::System::Single B1DA062BF9FC8A7E; // 0x44
	::System::Single B17B9B9C54637FC1; // 0x48
	::System::Single E158075C9BE93D7C; // 0x4C
	::System::Boolean F6594BCEA8BEB14E; // 0x50
	::System::Byte _padding0[0x3];
	::System::Single F8E1A58D7D9FD81C; // 0x54
	::System::Int32 BCE17AC8A5DDB767; // 0x58
	::System::Boolean E55D01E9C073E12D; // 0x5C
	::System::Byte _padding1[0x3];
	::UnityEngine::FAED0374422E783A* F199A7D797DBF7A5; // 0x60
	::System::Single A40E783FCE9CCEE7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D8EA7FFA7B378A__CTOR_OFFSET))(this);
	}
};

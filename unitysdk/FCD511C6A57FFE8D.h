#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A61B0849719CF168.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E883F2806BDB6405.h"
#include "unitysdk/System/Nullable_1.h"

class A8E89637B30886F8;
class AB642D1382756991;
template <typename T> class FA9B773E8C9B97E9;

#define FCD511C6A57FFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCD511C6A57FFE8D_TypeDefinitionIndex = 7210;

class FCD511C6A57FFE8D : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::E883F2806BDB6405 A6D0AACD1DC037A0; // 0x38
	::System::UInt32 A8A483E587EAF52B; // 0x3C
	::AB642D1382756991* FD44F829D82B8C9D; // 0x40
	::System::UInt32 B289D9A1F114D305; // 0x48
	::System::Byte _padding0[0x4];
	::System::Nullable_1<::A61B0849719CF168> B1C448C2CF64F5F7; // 0x50
	::System::Byte _padding1[0x28];
	::FA9B773E8C9B97E9<::A8E89637B30886F8*>* ED80CA85580ED303; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCD511C6A57FFE8D__CTOR_OFFSET))(this);
	}
};

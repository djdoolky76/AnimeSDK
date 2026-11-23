#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define E02F67C4CDC31CF5_B7AA0D64CFB63B09_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E02F67C4CDC31CF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int E02F67C4CDC31CF5_TypeDefinitionIndex = 3037;

class E02F67C4CDC31CF5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>* BDF443082D9B27B8; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>* AA2EAB537D64A6B1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>*))((::PBYTE)hIl2Cpp + E02F67C4CDC31CF5__CTOR_OFFSET))(this, AA2EAB537D64A6B1);
	}

	::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>* B7AA0D64CFB63B09()
	{
		return ((::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E02F67C4CDC31CF5_B7AA0D64CFB63B09_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define B6365CBDAB8191A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6365CBDAB8191A8_TypeDefinitionIndex = 15853;

class B6365CBDAB8191A8 : public ::System::Object
{
public:
	::System::String* F5AEFA05C9F71B82; // 0x10
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* FB071B82283F335C; // 0x18
	::System::String* E97E8D008427A296; // 0x20
	::System::String* F33908AD7E36D1EC; // 0x28
	::System::Boolean A187B0A4ACA502FF; // 0x30
	::System::Byte _padding0[0x7];
	::System::Action_1<::System::String*>* F950A6F3863421D7; // 0x38
	::System::Boolean FD96BCA2122A7513; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6365CBDAB8191A8__CTOR_OFFSET))(this);
	}
};

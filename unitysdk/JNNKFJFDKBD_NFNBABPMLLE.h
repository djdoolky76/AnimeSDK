#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNNKFJFDKBD;
namespace System { class Action; }

#define JNNKFJFDKBD_NFNBABPMLLE_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x152FA8F0)
#define JNNKFJFDKBD_NFNBABPMLLE__CTOR_OFFSET UNITYSDK_OFFSET(0x152FA8E0)

inline static constexpr unsigned int JNNKFJFDKBD_NFNBABPMLLE_TypeDefinitionIndex = 10677;

class JNNKFJFDKBD_NFNBABPMLLE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::JNNKFJFDKBD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_NFNBABPMLLE__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_NFNBABPMLLE_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};

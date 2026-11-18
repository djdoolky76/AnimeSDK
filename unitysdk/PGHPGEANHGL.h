#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHMFDOICHCD.h"
#include "unitysdk/System/Object.h"

class DBEJKJDLNAI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGHPGEANHGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCA3F0)

inline static constexpr unsigned int PGHPGEANHGL_TypeDefinitionIndex = 80405;

class PGHPGEANHGL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DACAJONDOLP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DDOODFEKONE; // 0x18
	::System::String* AOLGDHDOCLP; // 0x20
	::System::Single AJGEMKLFOIN; // 0x28
	::AHMFDOICHCD NJMGLGKDELD; // 0x2C
	::System::Single JNDAIMHGLJB; // 0x30

	::System::Void _ctor(::DBEJKJDLNAI* IMIINKMFLMJ)
	{
		return ((::System::Void(*)(::PVOID, ::DBEJKJDLNAI*))((::PBYTE)hIl2Cpp + PGHPGEANHGL__CTOR_OFFSET))(this, IMIINKMFLMJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJOKDGFPEJA.h"
#include "unitysdk/System/Object.h"

class IKJABDPAIOC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKJABDPAIOC_GJJNCIEMOCJ_BKPJLBOOEJO_OFFSET UNITYSDK_OFFSET(0x153B29D0)
#define IKJABDPAIOC_GJJNCIEMOCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x153B29C0)

inline static constexpr unsigned int IKJABDPAIOC_GJJNCIEMOCJ_TypeDefinitionIndex = 69329;

class IKJABDPAIOC_GJJNCIEMOCJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HJOKDGFPEJA>* KEOIBHMAGAP; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::IKJABDPAIOC* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJABDPAIOC_GJJNCIEMOCJ__CTOR_OFFSET))(this);
	}

	::System::Void BKPJLBOOEJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJABDPAIOC_GJJNCIEMOCJ_BKPJLBOOEJO_OFFSET))(this);
	}
};

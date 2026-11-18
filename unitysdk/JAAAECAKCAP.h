#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAAAECAKCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13827940)

inline static constexpr unsigned int JAAAECAKCAP_TypeDefinitionIndex = 85561;

class JAAAECAKCAP : public ::System::Object
{
public:
	::System::String* ONOAGAPJNCG; // 0x10
	::System::String* GPLCKOICKJN; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* JAIONPNPALN; // 0x28
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* AKJELLIHIBF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAAECAKCAP__CTOR_OFFSET))(this);
	}
};

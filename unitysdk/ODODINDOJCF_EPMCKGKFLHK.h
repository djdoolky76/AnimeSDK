#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODODINDOJCF_EPMCKGKFLHK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F2C60)

inline static constexpr unsigned int ODODINDOJCF_EPMCKGKFLHK_TypeDefinitionIndex = 66805;

class ODODINDOJCF_EPMCKGKFLHK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NEBMGIPNDNF; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ODODINDOJCF_EPMCKGKFLHK__CTOR_OFFSET))(this, HMPKKCKNFIH);
	}
};

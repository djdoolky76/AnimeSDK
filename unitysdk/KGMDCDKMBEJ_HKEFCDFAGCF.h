#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGMDCDKMBEJ_HKEFCDFAGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B641290)

inline static constexpr unsigned int KGMDCDKMBEJ_HKEFCDFAGCF_TypeDefinitionIndex = 9248;

class KGMDCDKMBEJ_HKEFCDFAGCF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DDDCNGLALKG; // 0x10
	::System::String* KANJODNFFOI; // 0x18
	::System::Int32 GPHEOOEMAHD; // 0x20
	::System::Int32 DPDPJCCAFNI; // 0x24
	::System::Int32 OMBLFOLLGPH; // 0x28
	::System::Int32 DKOFFFNEFJC; // 0x2C
	::System::Boolean MBOIFMLHLLA; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 KMMGKJPAOMF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMDCDKMBEJ_HKEFCDFAGCF__CTOR_OFFSET))(this);
	}
};

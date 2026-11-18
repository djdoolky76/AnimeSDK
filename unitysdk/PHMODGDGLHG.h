#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class GIAOADHEMIJ;
class JGPGPIFEMCI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHMODGDGLHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7840)

inline static constexpr unsigned int PHMODGDGLHG_TypeDefinitionIndex = 57545;

class PHMODGDGLHG : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC; // 0x10
	::GIAOADHEMIJ* LIDMHPMOBDM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JGPGPIFEMCI*>* MHLHJJJBLGF; // 0x28
	::System::UInt32 AOCOIDIMLIH; // 0x30
	::System::Boolean PJBEPEGCEPE; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMODGDGLHG__CTOR_OFFSET))(this);
	}
};

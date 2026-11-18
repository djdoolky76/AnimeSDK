#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEPIIOHIAMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150C0D30)

inline static constexpr unsigned int PEPIIOHIAMJ_TypeDefinitionIndex = 44341;

class PEPIIOHIAMJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DNHIOEFPGNO; // 0x10
	::System::String* EGHDEGLFOBN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPIIOHIAMJ__CTOR_OFFSET))(this);
	}
};

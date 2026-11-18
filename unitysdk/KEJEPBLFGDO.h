#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMDFNDNGDNA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEJEPBLFGDO_JJHDKIKHDOP_OFFSET UNITYSDK_OFFSET(0x18A65E50)
#define KEJEPBLFGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A65DD0)

inline static constexpr unsigned int KEJEPBLFGDO_TypeDefinitionIndex = 63372;

class KEJEPBLFGDO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KMDFNDNGDNA*>* BDCIJBNCMIA; // 0x10
	::System::String* BIFEDCFBGNE; // 0x18
	::System::Int32 GNPNDEEBDAG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJEPBLFGDO__CTOR_OFFSET))(this);
	}

	::System::Void JJHDKIKHDOP(::KMDFNDNGDNA* EFNFMNOJDNG)
	{
		return ((::System::Void(*)(::PVOID, ::KMDFNDNGDNA*))((::PBYTE)hIl2Cpp + KEJEPBLFGDO_JJHDKIKHDOP_OFFSET))(this, EFNFMNOJDNG);
	}
};

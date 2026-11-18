#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class IABCBJMMELB;
class KFMDJFHBBAD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IABCBJMMELB_JIIPENNHCIK_ANFEBJKNMAH_OFFSET UNITYSDK_OFFSET(0x15BE6D20)
#define IABCBJMMELB_JIIPENNHCIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE6D10)

inline static constexpr unsigned int IABCBJMMELB_JIIPENNHCIK_TypeDefinitionIndex = 79527;

class IABCBJMMELB_JIIPENNHCIK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KFMDJFHBBAD*>* MKHNKIFFJFF; // 0x10
	::IABCBJMMELB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_JIIPENNHCIK__CTOR_OFFSET))(this);
	}

	::System::Boolean ANFEBJKNMAH(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_JIIPENNHCIK_ANFEBJKNMAH_OFFSET))(this, CENDLIKDNJA);
	}
};

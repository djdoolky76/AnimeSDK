#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_2.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;

#define AIPAFAGLLGH_OENJBABHEIO_IEHOPNAGIPF_OFFSET UNITYSDK_OFFSET(0x17DDB110)
#define AIPAFAGLLGH_OENJBABHEIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDB100)

inline static constexpr unsigned int AIPAFAGLLGH_OENJBABHEIO_TypeDefinitionIndex = 70105;

class AIPAFAGLLGH_OENJBABHEIO : public ::System::Object
{
public:
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x10
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_OENJBABHEIO__CTOR_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> IEHOPNAGIPF()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_OENJBABHEIO_IEHOPNAGIPF_OFFSET))(this);
	}
};

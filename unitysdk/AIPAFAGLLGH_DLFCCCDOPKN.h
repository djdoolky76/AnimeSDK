#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_2.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;

#define AIPAFAGLLGH_DLFCCCDOPKN_JODBBADHJIL_OFFSET UNITYSDK_OFFSET(0x181F5150)
#define AIPAFAGLLGH_DLFCCCDOPKN__CTOR_OFFSET UNITYSDK_OFFSET(0x181F5140)

inline static constexpr unsigned int AIPAFAGLLGH_DLFCCCDOPKN_TypeDefinitionIndex = 70109;

class AIPAFAGLLGH_DLFCCCDOPKN : public ::System::Object
{
public:
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x10
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_DLFCCCDOPKN__CTOR_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> JODBBADHJIL()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_DLFCCCDOPKN_JODBBADHJIL_OFFSET))(this);
	}
};

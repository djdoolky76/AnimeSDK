#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_2.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;

#define AIPAFAGLLGH_DOCHGMALGCN_ELHPDICIHPE_OFFSET UNITYSDK_OFFSET(0x15502DD0)
#define AIPAFAGLLGH_DOCHGMALGCN__CTOR_OFFSET UNITYSDK_OFFSET(0x15502DC0)

inline static constexpr unsigned int AIPAFAGLLGH_DOCHGMALGCN_TypeDefinitionIndex = 70112;

class AIPAFAGLLGH_DOCHGMALGCN : public ::System::Object
{
public:
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x10
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_DOCHGMALGCN__CTOR_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> ELHPDICIHPE()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_DOCHGMALGCN_ELHPDICIHPE_OFFSET))(this);
	}
};

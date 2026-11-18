#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_2.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;

#define AIPAFAGLLGH_HFKGBIGAIMA_ODFDJPJDFIE_OFFSET UNITYSDK_OFFSET(0x144DF4D0)
#define AIPAFAGLLGH_HFKGBIGAIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x144DF4C0)

inline static constexpr unsigned int AIPAFAGLLGH_HFKGBIGAIMA_TypeDefinitionIndex = 70113;

class AIPAFAGLLGH_HFKGBIGAIMA : public ::System::Object
{
public:
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x10
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_HFKGBIGAIMA__CTOR_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> ODFDJPJDFIE()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_HFKGBIGAIMA_ODFDJPJDFIE_OFFSET))(this);
	}
};

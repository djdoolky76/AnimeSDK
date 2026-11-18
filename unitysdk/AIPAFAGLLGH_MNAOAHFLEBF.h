#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;

#define AIPAFAGLLGH_MNAOAHFLEBF_BDLMAAODHBP_OFFSET UNITYSDK_OFFSET(0x134D3C70)
#define AIPAFAGLLGH_MNAOAHFLEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x134D3C60)

inline static constexpr unsigned int AIPAFAGLLGH_MNAOAHFLEBF_TypeDefinitionIndex = 70110;

class AIPAFAGLLGH_MNAOAHFLEBF : public ::System::Object
{
public:
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x10
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_MNAOAHFLEBF__CTOR_OFFSET))(this);
	}

	::System::Int32 BDLMAAODHBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_MNAOAHFLEBF_BDLMAAODHBP_OFFSET))(this);
	}
};

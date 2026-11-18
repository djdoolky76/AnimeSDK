#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHLKMBLFMNN;
class KNBADLOICGB;

#define AGALFHMPJLF_CGOKONFFDPE_OFFSET UNITYSDK_OFFSET(0x17DD3DC0)
#define AGALFHMPJLF_POPDKMNBDMG_OFFSET UNITYSDK_OFFSET(0x17DD3CC0)
#define AGALFHMPJLF__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD3CB0)

inline static constexpr unsigned int AGALFHMPJLF_TypeDefinitionIndex = 87057;

class AGALFHMPJLF : public ::System::Object
{
public:
	::DHLKMBLFMNN* ODICBJIFMNB; // 0x10
	::KNBADLOICGB* ALBOOOMOLAJ; // 0x18
	::System::Int32 LNGMKFDKJNJ; // 0x20
	::System::Int32 CJHCCIAEBNP; // 0x24
	::System::Int32 CKPCJIDLBJE; // 0x28
	::System::Boolean AMPFEFLPGPH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGALFHMPJLF__CTOR_OFFSET))(this);
	}

	::KNBADLOICGB* POPDKMNBDMG()
	{
		return ((::KNBADLOICGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGALFHMPJLF_POPDKMNBDMG_OFFSET))(this);
	}

	::System::Boolean CGOKONFFDPE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGALFHMPJLF_CGOKONFFDPE_OFFSET))(this);
	}
};

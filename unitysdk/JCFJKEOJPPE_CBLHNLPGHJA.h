#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHAHGICCGN;
class JCFJKEOJPPE;
namespace System { class Action; }

#define JCFJKEOJPPE_CBLHNLPGHJA_BJNGHDGJKAH_OFFSET UNITYSDK_OFFSET(0x1872E7B0)
#define JCFJKEOJPPE_CBLHNLPGHJA_CPKMMDBBMPL_OFFSET UNITYSDK_OFFSET(0x1872E4A0)
#define JCFJKEOJPPE_CBLHNLPGHJA_PDLKGIOHGDF_OFFSET UNITYSDK_OFFSET(0x1872E220)
#define JCFJKEOJPPE_CBLHNLPGHJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E210)

inline static constexpr unsigned int JCFJKEOJPPE_CBLHNLPGHJA_TypeDefinitionIndex = 47007;

class JCFJKEOJPPE_CBLHNLPGHJA : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::JCFJKEOJPPE* KLHPEBKNIFB; // 0x18
	::BPHAHGICCGN* LJBPECKCCEA; // 0x20
	::System::Boolean FMNKGIBCKLJ; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 LOJMDFKJCGM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CBLHNLPGHJA__CTOR_OFFSET))(this);
	}

	::System::Void PDLKGIOHGDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CBLHNLPGHJA_PDLKGIOHGDF_OFFSET))(this);
	}

	::System::Void CPKMMDBBMPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CBLHNLPGHJA_CPKMMDBBMPL_OFFSET))(this);
	}

	::System::Void BJNGHDGJKAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CBLHNLPGHJA_BJNGHDGJKAH_OFFSET))(this);
	}
};

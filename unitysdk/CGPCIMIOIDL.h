#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDEAJMNFOBH.h"
#include "unitysdk/PJLHFGMHOLP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OMADHHOMDJC.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGPCIMIOIDL_BICGFMCGDAO_OFFSET UNITYSDK_OFFSET(0x128F1360)
#define CGPCIMIOIDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128F1090)
#define CGPCIMIOIDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128F0D80)
#define CGPCIMIOIDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x128F1140)
#define CGPCIMIOIDL_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x128F0C80)
#define CGPCIMIOIDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x128F0E50)
#define CGPCIMIOIDL__CTOR_OFFSET UNITYSDK_OFFSET(0x128F1350)

inline static constexpr unsigned int CGPCIMIOIDL_TypeDefinitionIndex = 83347;

class CGPCIMIOIDL : public ::PJLHFGMHOLP
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KLBJOFKFIHI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPCIMIOIDL__CTOR_OFFSET))(this);
	}

	::FDEAJMNFOBH PAFFHKDNPKF(::OMADHHOMDJC& LKJNBEPANGL)
	{
		return ((::FDEAJMNFOBH(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_PAFFHKDNPKF_OFFSET))(this, LKJNBEPANGL);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::FDEAJMNFOBH BICGFMCGDAO(::OMADHHOMDJC& MIALFKCCCPI)
	{
		return ((::FDEAJMNFOBH(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_BICGFMCGDAO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CGPCIMIOIDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

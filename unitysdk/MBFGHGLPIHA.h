#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNLJPBBJIKB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MJCNMPPCPHB;
namespace MoleMole::Config { class DynamicInt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBFGHGLPIHA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1591E750)
#define MBFGHGLPIHA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1591EA10)
#define MBFGHGLPIHA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1591E7B0)
#define MBFGHGLPIHA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1591EA90)
#define MBFGHGLPIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1591EF10)

inline static constexpr unsigned int MBFGHGLPIHA_TypeDefinitionIndex = 91157;

class MBFGHGLPIHA : public ::System::Object
{
public:
	::MoleMole::Config::DynamicInt* MFPKGNIGAOK; // 0x10
	::System::Collections::Generic::List_1<::MJCNMPPCPHB*>* FOEDLNIEGOL; // 0x18
	::FNLJPBBJIKB KJGBAHFOGDM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGHGLPIHA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBFGHGLPIHA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MBFGHGLPIHA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBFGHGLPIHA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MBFGHGLPIHA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

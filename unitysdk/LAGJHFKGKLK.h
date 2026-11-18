#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJBOEFJAIFL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MMCAKJPBNHB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAGJHFKGKLK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2E7C50)
#define LAGJHFKGKLK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2E7110)
#define LAGJHFKGKLK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A2E7CB0)
#define LAGJHFKGKLK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A2E7190)
#define LAGJHFKGKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E8190)

inline static constexpr unsigned int LAGJHFKGKLK_TypeDefinitionIndex = 55672;

class LAGJHFKGKLK : public ::System::Object
{
public:
	::System::String* AMOOAHPKMGP; // 0x10
	::System::Collections::Generic::List_1<::MMCAKJPBNHB*>* HOFJOAFLIKK; // 0x18
	::System::Int32 NGLEFGCCNOO; // 0x20
	::NJBOEFJAIFL GFEEHCLLANI; // 0x24
	::System::Single FPOOLIGEDLK; // 0x28
	::UnityEngine::Vector3 LPOIBLLILAA; // 0x2C
	::System::Int32 CHBAAGELJJJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGJHFKGKLK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LAGJHFKGKLK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LAGJHFKGKLK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LAGJHFKGKLK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LAGJHFKGKLK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

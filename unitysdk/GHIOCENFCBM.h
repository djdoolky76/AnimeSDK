#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENFMBFIKKNH.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GHIOCENFCBM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11DAAB90)
#define GHIOCENFCBM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11DAB060)
#define GHIOCENFCBM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11DAACA0)
#define GHIOCENFCBM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11DAB510)
#define GHIOCENFCBM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11DAAC90)
#define GHIOCENFCBM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11DAB3B0)
#define GHIOCENFCBM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11DAB0C0)
#define GHIOCENFCBM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11DAAB40)
#define GHIOCENFCBM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11DAAD20)
#define GHIOCENFCBM__CTOR_OFFSET UNITYSDK_OFFSET(0x11DAB3A0)

inline static constexpr unsigned int GHIOCENFCBM_TypeDefinitionIndex = 49926;

class GHIOCENFCBM : public ::ENFMBFIKKNH
{
public:
	::System::String* CIAOFBKKFJL; // 0x18
	::System::Int32 AGDCHKHKBKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIOCENFCBM__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GHIOCENFCBM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::ENFMBFIKKNH* DGNAAPGKIPL()
	{
		return ((::ENFMBFIKKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIOCENFCBM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIOCENFCBM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GHIOCENFCBM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GHIOCENFCBM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GHIOCENFCBM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GHIOCENFCBM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GHIOCENFCBM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GHIOCENFCBM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GHIOCENFCBM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GHIOCENFCBM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GHIOCENFCBM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GHIOCENFCBM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

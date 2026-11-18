#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EFNBGCBJEBA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13546460)
#define EFNBGCBJEBA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13546850)
#define EFNBGCBJEBA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13546570)
#define EFNBGCBJEBA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13546BE0)
#define EFNBGCBJEBA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13546560)
#define EFNBGCBJEBA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13546D90)
#define EFNBGCBJEBA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x135468B0)
#define EFNBGCBJEBA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13546B50)
#define EFNBGCBJEBA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13546330)
#define EFNBGCBJEBA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x135463D0)
#define EFNBGCBJEBA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x135465F0)
#define EFNBGCBJEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13546AC0)

inline static constexpr unsigned int EFNBGCBJEBA_TypeDefinitionIndex = 77909;

class EFNBGCBJEBA : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNBGCBJEBA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::EFNBGCBJEBA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EFNBGCBJEBA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EFNBGCBJEBA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EFNBGCBJEBA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EFNBGCBJEBA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

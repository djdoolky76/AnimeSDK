#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCBMHJJNCOD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DDIKKPFBFJK;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGFDEJFMDJL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1158ADD0)
#define NGFDEJFMDJL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1158B120)
#define NGFDEJFMDJL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1158AEE0)
#define NGFDEJFMDJL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1158B340)
#define NGFDEJFMDJL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1158AED0)
#define NGFDEJFMDJL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1158B4F0)
#define NGFDEJFMDJL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1158B180)
#define NGFDEJFMDJL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1158AD80)
#define NGFDEJFMDJL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1158AF60)
#define NGFDEJFMDJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1158B330)

inline static constexpr unsigned int NGFDEJFMDJL_TypeDefinitionIndex = 61818;

class NGFDEJFMDJL : public ::HCBMHJJNCOD
{
public:
	::System::Collections::Generic::List_1<::DDIKKPFBFJK*>* DOFKEIDFIIC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFDEJFMDJL__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HCBMHJJNCOD* DGNAAPGKIPL()
	{
		return ((::HCBMHJJNCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGFDEJFMDJL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NGFDEJFMDJL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGFDEJFMDJL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NGFDEJFMDJL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGFDEJFMDJL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

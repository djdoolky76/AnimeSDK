#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FHAHEJAENFK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10F699F0)
#define FHAHEJAENFK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10F6A0B0)
#define FHAHEJAENFK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10F69B00)
#define FHAHEJAENFK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10F6A430)
#define FHAHEJAENFK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10F69AF0)
#define FHAHEJAENFK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10F6A670)
#define FHAHEJAENFK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F6A110)
#define FHAHEJAENFK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10F6A5E0)
#define FHAHEJAENFK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10F697E0)
#define FHAHEJAENFK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10F69960)
#define FHAHEJAENFK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10F69B80)
#define FHAHEJAENFK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6A3A0)

inline static constexpr unsigned int FHAHEJAENFK_TypeDefinitionIndex = 62223;

class FHAHEJAENFK : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAHEJAENFK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAHEJAENFK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FHAHEJAENFK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAHEJAENFK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAHEJAENFK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHAHEJAENFK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHAHEJAENFK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHAHEJAENFK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FHAHEJAENFK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FHAHEJAENFK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHAHEJAENFK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAHEJAENFK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHAHEJAENFK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FHAHEJAENFK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FHAHEJAENFK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHAHEJAENFK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define GJPCMGFKAGD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11DB6510)
#define GJPCMGFKAGD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11DB6690)
#define GJPCMGFKAGD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11DB6620)
#define GJPCMGFKAGD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11DB66B0)
#define GJPCMGFKAGD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11DB6610)
#define GJPCMGFKAGD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11DB6800)
#define GJPCMGFKAGD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11DB66A0)
#define GJPCMGFKAGD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11DB6500)
#define GJPCMGFKAGD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11DB6490)
#define GJPCMGFKAGD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11DB6680)
#define GJPCMGFKAGD__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB6480)

inline static constexpr unsigned int GJPCMGFKAGD_TypeDefinitionIndex = 75402;

class GJPCMGFKAGD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPCMGFKAGD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GJPCMGFKAGD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GJPCMGFKAGD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GJPCMGFKAGD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GJPCMGFKAGD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJPCMGFKAGD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HIMPFAOJFBK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19E25E70)
#define HIMPFAOJFBK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E25D70)
#define HIMPFAOJFBK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19E25F80)
#define HIMPFAOJFBK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19E261A0)
#define HIMPFAOJFBK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19E25F70)
#define HIMPFAOJFBK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19E26040)
#define HIMPFAOJFBK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19E25E00)
#define HIMPFAOJFBK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19E25E60)
#define HIMPFAOJFBK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19E26000)
#define HIMPFAOJFBK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E26030)

inline static constexpr unsigned int HIMPFAOJFBK_TypeDefinitionIndex = 85502;

class HIMPFAOJFBK : public ::LNODBDPJGFL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPFAOJFBK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HIMPFAOJFBK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HIMPFAOJFBK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HIMPFAOJFBK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HIMPFAOJFBK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIMPFAOJFBK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

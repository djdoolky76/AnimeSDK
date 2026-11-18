#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CJHDFOAHLAM_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0x147A65B0)
#define CJHDFOAHLAM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x147A58C0)
#define CJHDFOAHLAM_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0x147A52A0)
#define CJHDFOAHLAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x147A5F10)
#define CJHDFOAHLAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x147A59D0)
#define CJHDFOAHLAM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x147A62A0)
#define CJHDFOAHLAM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x147A59C0)
#define CJHDFOAHLAM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x147A6450)
#define CJHDFOAHLAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x147A5F70)
#define CJHDFOAHLAM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x147A5820)
#define CJHDFOAHLAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x147A5A50)
#define CJHDFOAHLAM__CTOR_OFFSET UNITYSDK_OFFSET(0x147A6210)

inline static constexpr unsigned int CJHDFOAHLAM_TypeDefinitionIndex = 52629;

class CJHDFOAHLAM : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* CEHEMDKFKMG; // 0x30
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x38
	::HJNGDKHLLEG FABCPKEMFMK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHDFOAHLAM__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CJHDFOAHLAM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CJHDFOAHLAM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CJHDFOAHLAM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CJHDFOAHLAM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHDFOAHLAM_BKOOLFKMMAI_OFFSET))(this);
	}
};

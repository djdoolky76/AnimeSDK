#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DGLDDHOIBMP_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0x15A44C90)
#define DGLDDHOIBMP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15A44130)
#define DGLDDHOIBMP_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0x15A43C00)
#define DGLDDHOIBMP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15A447A0)
#define DGLDDHOIBMP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15A44240)
#define DGLDDHOIBMP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15A44AE0)
#define DGLDDHOIBMP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15A44230)
#define DGLDDHOIBMP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15A44CA0)
#define DGLDDHOIBMP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15A44800)
#define DGLDDHOIBMP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15A440A0)
#define DGLDDHOIBMP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15A442C0)
#define DGLDDHOIBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15A44A50)

inline static constexpr unsigned int DGLDDHOIBMP_TypeDefinitionIndex = 75190;

class DGLDDHOIBMP : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Int32> AMCDAOJKFNF; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* JKAODONJOEG; // 0x50
	::HJNGDKHLLEG FABCPKEMFMK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLDDHOIBMP__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DGLDDHOIBMP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DGLDDHOIBMP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_BKOOLFKMMAI_OFFSET))(this);
	}

	static ::DGLDDHOIBMP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DGLDDHOIBMP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DGLDDHOIBMP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

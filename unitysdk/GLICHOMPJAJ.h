#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GLICHOMPJAJ_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0x16CD3500)
#define GLICHOMPJAJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16CD2A40)
#define GLICHOMPJAJ_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0x16CD2880)
#define GLICHOMPJAJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CD3080)
#define GLICHOMPJAJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CD2B50)
#define GLICHOMPJAJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16CD3670)
#define GLICHOMPJAJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16CD2B40)
#define GLICHOMPJAJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16CD3510)
#define GLICHOMPJAJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CD30E0)
#define GLICHOMPJAJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16CD29F0)
#define GLICHOMPJAJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CD2BD0)
#define GLICHOMPJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD3320)

inline static constexpr unsigned int GLICHOMPJAJ_TypeDefinitionIndex = 67236;

class GLICHOMPJAJ : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Boolean> MHOKLGLGOOL; // 0x30
	::System::Byte _padding0[0x18];
	::HJNGDKHLLEG LGECNOFEMPP; // 0x50
	::HJNGDKHLLEG BJBCEEIMPMF; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLICHOMPJAJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_BKOOLFKMMAI_OFFSET))(this);
	}

	static ::GLICHOMPJAJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GLICHOMPJAJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GLICHOMPJAJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GLICHOMPJAJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GLICHOMPJAJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

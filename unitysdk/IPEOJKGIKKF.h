#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPEOJKGIKKF_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0x13827110)
#define IPEOJKGIKKF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x138267B0)
#define IPEOJKGIKKF_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0x13826670)
#define IPEOJKGIKKF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13826B30)
#define IPEOJKGIKKF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x138268C0)
#define IPEOJKGIKKF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13826F60)
#define IPEOJKGIKKF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x138268B0)
#define IPEOJKGIKKF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13826E00)
#define IPEOJKGIKKF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13826B90)
#define IPEOJKGIKKF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13826720)
#define IPEOJKGIKKF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13826940)
#define IPEOJKGIKKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13826D70)

inline static constexpr unsigned int IPEOJKGIKKF_TypeDefinitionIndex = 80433;

class IPEOJKGIKKF : public ::HDJJJGCHLEE
{
public:
	::System::Collections::Generic::List_1<::HJNGDKHLLEG>* GCMLPLNKGEE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEOJKGIKKF__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IPEOJKGIKKF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IPEOJKGIKKF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::IPEOJKGIKKF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IPEOJKGIKKF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_BKOOLFKMMAI_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IPEOJKGIKKF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

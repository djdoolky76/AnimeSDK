#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define EJCJKNFPNKF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x158B3A70)
#define EJCJKNFPNKF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158B3A40)
#define EJCJKNFPNKF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158B3B80)
#define EJCJKNFPNKF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x158B3CD0)
#define EJCJKNFPNKF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x158B3B70)
#define EJCJKNFPNKF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x158B3C00)
#define EJCJKNFPNKF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x158B3A50)
#define EJCJKNFPNKF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x158B3A60)
#define EJCJKNFPNKF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x158B3BE0)
#define EJCJKNFPNKF__CTOR_OFFSET UNITYSDK_OFFSET(0x158B3BF0)

inline static constexpr unsigned int EJCJKNFPNKF_TypeDefinitionIndex = 72944;

class EJCJKNFPNKF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCJKNFPNKF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EJCJKNFPNKF* DGNAAPGKIPL()
	{
		return ((::EJCJKNFPNKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EJCJKNFPNKF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJCJKNFPNKF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EJCJKNFPNKF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJCJKNFPNKF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJCJKNFPNKF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

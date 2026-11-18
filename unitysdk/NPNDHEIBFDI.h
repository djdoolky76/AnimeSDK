#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NPNDHEIBFDI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x114DD760)
#define NPNDHEIBFDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x114DD4C0)
#define NPNDHEIBFDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x114DD870)
#define NPNDHEIBFDI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x114DDAF0)
#define NPNDHEIBFDI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x114DD860)
#define NPNDHEIBFDI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x114DDCA0)
#define NPNDHEIBFDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x114DD520)
#define NPNDHEIBFDI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x114DD700)
#define NPNDHEIBFDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x114DD8F0)
#define NPNDHEIBFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x114DDAE0)

inline static constexpr unsigned int NPNDHEIBFDI_TypeDefinitionIndex = 50785;

class NPNDHEIBFDI : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* HCPHHONINCH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDHEIBFDI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NPNDHEIBFDI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NPNDHEIBFDI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NPNDHEIBFDI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NPNDHEIBFDI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPNDHEIBFDI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

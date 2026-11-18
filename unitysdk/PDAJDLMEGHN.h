#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLFMHFDNIAI.h"
#include "unitysdk/ENFMBFIKKNH.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigSuiteV2RandomResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDAJDLMEGHN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x136F2EB0)
#define PDAJDLMEGHN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x136F3560)
#define PDAJDLMEGHN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x136F2FC0)
#define PDAJDLMEGHN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x136F3930)
#define PDAJDLMEGHN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x136F2FB0)
#define PDAJDLMEGHN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x136F3AE0)
#define PDAJDLMEGHN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x136F35C0)
#define PDAJDLMEGHN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x136F2E40)
#define PDAJDLMEGHN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x136F3040)
#define PDAJDLMEGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x136F3920)

inline static constexpr unsigned int PDAJDLMEGHN_TypeDefinitionIndex = 85497;

class PDAJDLMEGHN : public ::ENFMBFIKKNH
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FPHKBEFAHMC; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSuiteV2RandomResult*>* EGJGHEHEBPH; // 0x20
	::BLFMHFDNIAI OMMJHJAHNHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAJDLMEGHN__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::ENFMBFIKKNH* DGNAAPGKIPL()
	{
		return ((::ENFMBFIKKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PDAJDLMEGHN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PDAJDLMEGHN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PDAJDLMEGHN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PDAJDLMEGHN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PDAJDLMEGHN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

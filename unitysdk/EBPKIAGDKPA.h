#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADEGDGGFED.h"
#include "unitysdk/KKHJIPHJNAJ.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class AMHGCFJOJHJ;
class BIPBNDIFDOL;
class FKNIEPCILLG;
class GJPCMGFKAGD;
class IMODCHBPGEJ;
class LENOHJGFMNG;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBPKIAGDKPA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDD1180)
#define EBPKIAGDKPA_EDCEBBFBLGC_OFFSET UNITYSDK_OFFSET(0xFDD10A0)
#define EBPKIAGDKPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDD1F50)
#define EBPKIAGDKPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDD1290)
#define EBPKIAGDKPA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDD2570)
#define EBPKIAGDKPA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDD1280)
#define EBPKIAGDKPA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDD24A0)
#define EBPKIAGDKPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDD1FB0)
#define EBPKIAGDKPA_IGGIBFNBGBE_OFFSET UNITYSDK_OFFSET(0xFDD26C0)
#define EBPKIAGDKPA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDD10F0)
#define EBPKIAGDKPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDD1310)
#define EBPKIAGDKPA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD1010)

inline static constexpr unsigned int EBPKIAGDKPA_TypeDefinitionIndex = 92160;

class EBPKIAGDKPA : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* ILEJMAACCGC; // 0x10
	::MoleMole::Config::DynamicInt* OAKNODKILCN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LENOHJGFMNG*>* KOJMBEHIONJ; // 0x20
	::System::Collections::Generic::List_1<::GJPCMGFKAGD*>* PIDOLKBBHFN; // 0x28
	::System::Int32 INOCFPNCHED; // 0x30
	::AADEGDGGFED HKFALCPEGHN; // 0x34
	::KKHJIPHJNAJ EPMNNELBGFG; // 0x38
	::MoleMole::Config::ValueCompareType JADAJLEACDH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPKIAGDKPA__CTOR_OFFSET))(this);
	}

	::BIPBNDIFDOL* EDCEBBFBLGC(::AMHGCFJOJHJ* MEPOKLMKCBF)
	{
		return ((::BIPBNDIFDOL*(*)(::PVOID, ::AMHGCFJOJHJ*))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_EDCEBBFBLGC_OFFSET))(this, MEPOKLMKCBF);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EBPKIAGDKPA* DGNAAPGKIPL()
	{
		return ((::EBPKIAGDKPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EBPKIAGDKPA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EBPKIAGDKPA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EBPKIAGDKPA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EBPKIAGDKPA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IMODCHBPGEJ* IGGIBFNBGBE(::EBPKIAGDKPA* DFMKILICPFB, ::AMHGCFJOJHJ* MEPOKLMKCBF, ::BIPBNDIFDOL* HHIJHDFHPOI)
	{
		return ((::IMODCHBPGEJ*(*)(::EBPKIAGDKPA*, ::AMHGCFJOJHJ*, ::BIPBNDIFDOL*))((::PBYTE)hIl2Cpp + EBPKIAGDKPA_IGGIBFNBGBE_OFFSET))(DFMKILICPFB, MEPOKLMKCBF, HHIJHDFHPOI);
	}
};

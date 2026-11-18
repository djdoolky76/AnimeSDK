#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FJLAHKKFNNF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D7F2D0)
#define FJLAHKKFNNF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D7F990)
#define FJLAHKKFNNF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D7F3E0)
#define FJLAHKKFNNF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D7FD10)
#define FJLAHKKFNNF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D7F3D0)
#define FJLAHKKFNNF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D7FF50)
#define FJLAHKKFNNF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D7F9F0)
#define FJLAHKKFNNF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11D7FEC0)
#define FJLAHKKFNNF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11D7F0F0)
#define FJLAHKKFNNF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D7F240)
#define FJLAHKKFNNF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D7F460)
#define FJLAHKKFNNF__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7FC80)

inline static constexpr unsigned int FJLAHKKFNNF_TypeDefinitionIndex = 58624;

class FJLAHKKFNNF : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLAHKKFNNF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FJLAHKKFNNF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FJLAHKKFNNF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FJLAHKKFNNF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FJLAHKKFNNF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FJLAHKKFNNF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

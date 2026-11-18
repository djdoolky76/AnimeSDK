#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
class LNODBDPJGFL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIANOLEFFHG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13085CE0)
#define JIANOLEFFHG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13085800)
#define JIANOLEFFHG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13085DF0)
#define JIANOLEFFHG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13086690)
#define JIANOLEFFHG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13085DE0)
#define JIANOLEFFHG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13086530)
#define JIANOLEFFHG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13085860)
#define JIANOLEFFHG_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0x13086520)
#define JIANOLEFFHG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13085C50)
#define JIANOLEFFHG_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0x130855D0)
#define JIANOLEFFHG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13085E70)
#define JIANOLEFFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13086510)

inline static constexpr unsigned int JIANOLEFFHG_TypeDefinitionIndex = 75552;

class JIANOLEFFHG : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JMGFFLNDCNA; // 0x20
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* MPBNNMIKLID; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JJCOBACAPLB; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* DNPPIBNGOBD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIANOLEFFHG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIANOLEFFHG_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIANOLEFFHG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JIANOLEFFHG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIANOLEFFHG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIANOLEFFHG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JIANOLEFFHG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JIANOLEFFHG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIANOLEFFHG_LMNBAMEMKMD_OFFSET))(this);
	}

	static ::JIANOLEFFHG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JIANOLEFFHG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JIANOLEFFHG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JIANOLEFFHG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JIANOLEFFHG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIANOLEFFHG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIANOLEFFHG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LOJFAPFPAGL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E0F850)
#define LOJFAPFPAGL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E0FFD0)
#define LOJFAPFPAGL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E0F960)
#define LOJFAPFPAGL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E103C0)
#define LOJFAPFPAGL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E0F950)
#define LOJFAPFPAGL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E10600)
#define LOJFAPFPAGL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E10030)
#define LOJFAPFPAGL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15E10570)
#define LOJFAPFPAGL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15E0EE50)
#define LOJFAPFPAGL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E0F790)
#define LOJFAPFPAGL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E0F9E0)
#define LOJFAPFPAGL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E10330)

inline static constexpr unsigned int LOJFAPFPAGL_TypeDefinitionIndex = 77659;

class LOJFAPFPAGL : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* IFEFGIHOKOC; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38
	::GPIOLGMOBLJ* ILOJFPNKJII; // 0x40
	::FOBNALGHPPD_1<::System::String*> PFGJCNHGNPO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJFAPFPAGL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LOJFAPFPAGL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LOJFAPFPAGL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::LOJFAPFPAGL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LOJFAPFPAGL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LOJFAPFPAGL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

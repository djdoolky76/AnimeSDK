#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCIKICBGGLP.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/OAKNLJAECNP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GAEIDHINJCL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D957F0)
#define GAEIDHINJCL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D95320)
#define GAEIDHINJCL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D95900)
#define GAEIDHINJCL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D96330)
#define GAEIDHINJCL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D958F0)
#define GAEIDHINJCL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D964E0)
#define GAEIDHINJCL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D95380)
#define GAEIDHINJCL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D95750)
#define GAEIDHINJCL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D95980)
#define GAEIDHINJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D96320)

inline static constexpr unsigned int GAEIDHINJCL_TypeDefinitionIndex = 80121;

class GAEIDHINJCL : public ::CCIKICBGGLP
{
public:
	::System::String* NHJKJLNJHBG; // 0x20
	::System::String* BOCDMBKEOPM; // 0x28
	::MoleMole::Config::ShaderCustomType ONFNBIGKIJB; // 0x30
	::MoleMole::Config::ScreenEffectType ADMEGFCJNAP; // 0x34
	::OAKNLJAECNP KPIOPIKFLHN; // 0x38
	::System::Boolean MMMBIJHGBFA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIDHINJCL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIDHINJCL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GAEIDHINJCL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIDHINJCL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEIDHINJCL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GAEIDHINJCL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GAEIDHINJCL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GAEIDHINJCL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIDHINJCL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAEIDHINJCL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GAEIDHINJCL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GAEIDHINJCL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GAEIDHINJCL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GAEIDHINJCL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

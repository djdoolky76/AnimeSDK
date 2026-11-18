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

#define AJDIJJMIALB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x134D4190)
#define AJDIJJMIALB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134D3D90)
#define AJDIJJMIALB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134D42A0)
#define AJDIJJMIALB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x134D4B70)
#define AJDIJJMIALB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x134D4290)
#define AJDIJJMIALB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x134D4D20)
#define AJDIJJMIALB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x134D3DF0)
#define AJDIJJMIALB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x134D40F0)
#define AJDIJJMIALB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x134D4320)
#define AJDIJJMIALB__CTOR_OFFSET UNITYSDK_OFFSET(0x134D4B60)

inline static constexpr unsigned int AJDIJJMIALB_TypeDefinitionIndex = 61863;

class AJDIJJMIALB : public ::CCIKICBGGLP
{
public:
	::System::String* NHJKJLNJHBG; // 0x20
	::System::String* BOCDMBKEOPM; // 0x28
	::MoleMole::Config::ShaderCustomType ONFNBIGKIJB; // 0x30
	::OAKNLJAECNP KPIOPIKFLHN; // 0x34
	::MoleMole::Config::ScreenEffectType ADMEGFCJNAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDIJJMIALB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJDIJJMIALB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AJDIJJMIALB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDIJJMIALB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDIJJMIALB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJDIJJMIALB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AJDIJJMIALB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AJDIJJMIALB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJDIJJMIALB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AJDIJJMIALB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJDIJJMIALB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AJDIJJMIALB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AJDIJJMIALB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJDIJJMIALB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

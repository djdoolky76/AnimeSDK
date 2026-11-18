#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCIKICBGGLP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CPEIAEGMLHO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13E1C7C0)
#define CPEIAEGMLHO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E1C3E0)
#define CPEIAEGMLHO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E1C8D0)
#define CPEIAEGMLHO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13E1CF60)
#define CPEIAEGMLHO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13E1C8C0)
#define CPEIAEGMLHO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13E1CE00)
#define CPEIAEGMLHO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13E1C440)
#define CPEIAEGMLHO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13E1C730)
#define CPEIAEGMLHO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13E1C950)
#define CPEIAEGMLHO__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1CDF0)

inline static constexpr unsigned int CPEIAEGMLHO_TypeDefinitionIndex = 72529;

class CPEIAEGMLHO : public ::CCIKICBGGLP
{
public:
	::System::String* KIHGNGKBADE; // 0x20
	::System::Single DFPBKGIKLIM; // 0x28
	::System::Boolean ODJJMMEPFJN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEIAEGMLHO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CPEIAEGMLHO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CPEIAEGMLHO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::CPEIAEGMLHO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CPEIAEGMLHO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CPEIAEGMLHO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

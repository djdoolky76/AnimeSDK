#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLEOMMLODC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BOOAPJIDGLO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x159A2650)
#define BOOAPJIDGLO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x159A2CA0)
#define BOOAPJIDGLO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159A2760)
#define BOOAPJIDGLO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x159A31B0)
#define BOOAPJIDGLO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x159A2750)
#define BOOAPJIDGLO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x159A3050)
#define BOOAPJIDGLO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x159A2D00)
#define BOOAPJIDGLO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x159A25E0)
#define BOOAPJIDGLO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x159A27E0)
#define BOOAPJIDGLO__CTOR_OFFSET UNITYSDK_OFFSET(0x159A3040)

inline static constexpr unsigned int BOOAPJIDGLO_TypeDefinitionIndex = 74246;

class BOOAPJIDGLO : public ::CMLEOMMLODC
{
public:
	::System::String* COKHBNPIKNN; // 0x20
	::System::String* CKJKLJCJPIP; // 0x28
	::System::Int32 LIHLMHMEOPD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAPJIDGLO__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMLEOMMLODC* DGNAAPGKIPL()
	{
		return ((::CMLEOMMLODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BOOAPJIDGLO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BOOAPJIDGLO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BOOAPJIDGLO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BOOAPJIDGLO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BOOAPJIDGLO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

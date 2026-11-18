#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CEBPFEGHPPB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x145AFF70)
#define CEBPFEGHPPB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x145AFCA0)
#define CEBPFEGHPPB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x145B0080)
#define CEBPFEGHPPB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x145B0460)
#define CEBPFEGHPPB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x145B0070)
#define CEBPFEGHPPB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x145B0300)
#define CEBPFEGHPPB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x145AFD00)
#define CEBPFEGHPPB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x145AFEE0)
#define CEBPFEGHPPB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x145B0100)
#define CEBPFEGHPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x145B02F0)

inline static constexpr unsigned int CEBPFEGHPPB_TypeDefinitionIndex = 73910;

class CEBPFEGHPPB : public ::LHHNKBDEMGO
{
public:
	::System::String* LFNMPOCHPLP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPFEGHPPB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CEBPFEGHPPB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CEBPFEGHPPB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CEBPFEGHPPB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CEBPFEGHPPB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBPFEGHPPB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

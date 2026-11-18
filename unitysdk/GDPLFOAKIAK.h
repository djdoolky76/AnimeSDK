#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GDPLFOAKIAK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x165F5650)
#define GDPLFOAKIAK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165F59B0)
#define GDPLFOAKIAK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165F5760)
#define GDPLFOAKIAK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x165F5E80)
#define GDPLFOAKIAK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x165F5750)
#define GDPLFOAKIAK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x165F5D20)
#define GDPLFOAKIAK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x165F5A10)
#define GDPLFOAKIAK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x165F5C90)
#define GDPLFOAKIAK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x165F5380)
#define GDPLFOAKIAK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x165F55C0)
#define GDPLFOAKIAK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x165F57E0)
#define GDPLFOAKIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x165F5C00)

inline static constexpr unsigned int GDPLFOAKIAK_TypeDefinitionIndex = 83228;

class GDPLFOAKIAK : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* KEIBMOPNNMB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLFOAKIAK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::GDPLFOAKIAK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GDPLFOAKIAK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GDPLFOAKIAK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GDPLFOAKIAK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GDPLFOAKIAK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

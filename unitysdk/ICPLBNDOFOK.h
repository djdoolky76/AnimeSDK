#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGOCMLHLMKO.h"
#include "unitysdk/NGEJCFNLLKD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NGFCPNEIEDL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ICPLBNDOFOK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F5BA50)
#define ICPLBNDOFOK_DOLIKJAJGKM_OFFSET UNITYSDK_OFFSET(0x16F5C680)
#define ICPLBNDOFOK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F5C0D0)
#define ICPLBNDOFOK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F5BB60)
#define ICPLBNDOFOK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16F5C4D0)
#define ICPLBNDOFOK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16F5BB50)
#define ICPLBNDOFOK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16F5C370)
#define ICPLBNDOFOK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F5C130)
#define ICPLBNDOFOK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16F5BA40)
#define ICPLBNDOFOK_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x16F5B9B0)
#define ICPLBNDOFOK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F5BBE0)
#define ICPLBNDOFOK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5C360)

inline static constexpr unsigned int ICPLBNDOFOK_TypeDefinitionIndex = 62488;

class ICPLBNDOFOK : public ::NGEJCFNLLKD
{
public:
	::System::Single EBADLICMCOH; // 0x20
	::CGOCMLHLMKO KDIGHCOEAPC; // 0x24
	::System::Single HEFPFKHLFLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPLBNDOFOK__CTOR_OFFSET))(this);
	}

	::NGFCPNEIEDL* NMBJIKEJKCK()
	{
		return ((::NGFCPNEIEDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_NMBJIKEJKCK_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NGEJCFNLLKD* DGNAAPGKIPL()
	{
		return ((::NGEJCFNLLKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICPLBNDOFOK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ICPLBNDOFOK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ICPLBNDOFOK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ICPLBNDOFOK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::NGFCPNEIEDL* DOLIKJAJGKM()
	{
		return ((::NGFCPNEIEDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPLBNDOFOK_DOLIKJAJGKM_OFFSET))(this);
	}
};

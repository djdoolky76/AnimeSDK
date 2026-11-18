#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIKENOBIEEC.h"
#include "unitysdk/NGEJCFNLLKD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NGFCPNEIEDL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ALGCKDJCIMK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14226CB0)
#define ALGCKDJCIMK_DOLIKJAJGKM_OFFSET UNITYSDK_OFFSET(0x14227AD0)
#define ALGCKDJCIMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14227420)
#define ALGCKDJCIMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14226DC0)
#define ALGCKDJCIMK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14227920)
#define ALGCKDJCIMK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14226DB0)
#define ALGCKDJCIMK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x142277C0)
#define ALGCKDJCIMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14227480)
#define ALGCKDJCIMK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14226C60)
#define ALGCKDJCIMK_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x14226BD0)
#define ALGCKDJCIMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14226E40)
#define ALGCKDJCIMK__CTOR_OFFSET UNITYSDK_OFFSET(0x142277B0)

inline static constexpr unsigned int ALGCKDJCIMK_TypeDefinitionIndex = 49976;

class ALGCKDJCIMK : public ::NGEJCFNLLKD
{
public:
	::MoleMole::Config::ConfigPosRot* COMELHFEGHC; // 0x20
	::System::Single JIPBONEFCIA; // 0x28
	::IIKENOBIEEC FCBMGOGBOCA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGCKDJCIMK__CTOR_OFFSET))(this);
	}

	::NGFCPNEIEDL* NMBJIKEJKCK()
	{
		return ((::NGFCPNEIEDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_NMBJIKEJKCK_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NGEJCFNLLKD* DGNAAPGKIPL()
	{
		return ((::NGEJCFNLLKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ALGCKDJCIMK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ALGCKDJCIMK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ALGCKDJCIMK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ALGCKDJCIMK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::NGFCPNEIEDL* DOLIKJAJGKM()
	{
		return ((::NGFCPNEIEDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGCKDJCIMK_DOLIKJAJGKM_OFFSET))(this);
	}
};

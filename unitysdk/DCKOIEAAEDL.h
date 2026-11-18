#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLEOMMLODC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OPGBLKHLCIN;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCKOIEAAEDL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13287480)
#define DCKOIEAAEDL_FICBMDOGGNC_OFFSET UNITYSDK_OFFSET(0x13288470)
#define DCKOIEAAEDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13287DE0)
#define DCKOIEAAEDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13287590)
#define DCKOIEAAEDL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x132884A0)
#define DCKOIEAAEDL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13287580)
#define DCKOIEAAEDL_GPLCLHDLAOO_OFFSET UNITYSDK_OFFSET(0x13288480)
#define DCKOIEAAEDL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13288650)
#define DCKOIEAAEDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13287E40)
#define DCKOIEAAEDL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13287400)
#define DCKOIEAAEDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13287610)
#define DCKOIEAAEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x13288490)

inline static constexpr unsigned int DCKOIEAAEDL_TypeDefinitionIndex = 86234;

class DCKOIEAAEDL : public ::CMLEOMMLODC
{
public:
	::Il2CppArray<::OPGBLKHLCIN*>* FLFFNOCENPD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GJDFBFPGIFO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KLBGAHPJAJO; // 0x30
	::System::Int32 OBCIMNOGOEC; // 0x38
	::System::Int32 KOMIPOJHONC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOIEAAEDL__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMLEOMMLODC* DGNAAPGKIPL()
	{
		return ((::CMLEOMMLODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FICBMDOGGNC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_FICBMDOGGNC_OFFSET))(this);
	}

	::Il2CppArray<::OPGBLKHLCIN*>* GPLCLHDLAOO()
	{
		return ((::Il2CppArray<::OPGBLKHLCIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_GPLCLHDLAOO_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DCKOIEAAEDL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DCKOIEAAEDL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DCKOIEAAEDL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DCKOIEAAEDL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DCKOIEAAEDL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

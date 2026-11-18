#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHBBMEGDBIO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CMLEOMMLODC;
class FKNIEPCILLG;
class OPGBLKHLCIN;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLPGEJOFJBL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1319CDC0)
#define MLPGEJOFJBL_FICBMDOGGNC_OFFSET UNITYSDK_OFFSET(0x1319F020)
#define MLPGEJOFJBL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1319E530)
#define MLPGEJOFJBL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1319CED0)
#define MLPGEJOFJBL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1319F050)
#define MLPGEJOFJBL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1319CEC0)
#define MLPGEJOFJBL_GPLCLHDLAOO_OFFSET UNITYSDK_OFFSET(0x1319F030)
#define MLPGEJOFJBL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1319F200)
#define MLPGEJOFJBL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1319E590)
#define MLPGEJOFJBL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1319CCA0)
#define MLPGEJOFJBL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1319CF50)
#define MLPGEJOFJBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1319F040)

inline static constexpr unsigned int MLPGEJOFJBL_TypeDefinitionIndex = 48417;

class MLPGEJOFJBL : public ::EHBBMEGDBIO
{
public:
	::Il2CppArray<::System::Int32>* AIIFGOIJHFP; // 0x28
	::Il2CppArray<::System::Int32>* NIHKKOMGMMF; // 0x30
	::Il2CppArray<::System::Int32>* OIIJNFHGAAL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KLBGAHPJAJO; // 0x40
	::Il2CppArray<::OPGBLKHLCIN*>* FLFFNOCENPD; // 0x48
	::Il2CppArray<::System::Int32>* BIEDBGMIGEI; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GJDFBFPGIFO; // 0x58
	::Il2CppArray<::System::String*>* AFKIBFHFJKJ; // 0x60
	::System::Int32 JLJFJMPJAIK; // 0x68
	::System::Int32 HLBKHEFJAPH; // 0x6C
	::System::Int32 FEOEDPIOGIO; // 0x70
	::System::Int32 EEBPDLDCIDO; // 0x74
	::System::Int32 GFFOKIKHHPB; // 0x78
	::System::Int32 KOFCAJBOLAN; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGEJOFJBL__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMLEOMMLODC* DGNAAPGKIPL()
	{
		return ((::CMLEOMMLODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FICBMDOGGNC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_FICBMDOGGNC_OFFSET))(this);
	}

	::Il2CppArray<::OPGBLKHLCIN*>* GPLCLHDLAOO()
	{
		return ((::Il2CppArray<::OPGBLKHLCIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_GPLCLHDLAOO_OFFSET))(this);
	}

	static ::MLPGEJOFJBL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MLPGEJOFJBL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MLPGEJOFJBL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MLPGEJOFJBL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MLPGEJOFJBL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

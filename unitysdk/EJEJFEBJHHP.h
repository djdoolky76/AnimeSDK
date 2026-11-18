#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define EJEJFEBJHHP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16148E90)
#define EJEJFEBJHHP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16149020)
#define EJEJFEBJHHP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16148FB0)
#define EJEJFEBJHHP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x161490A0)
#define EJEJFEBJHHP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16148F90)
#define EJEJFEBJHHP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x161491F0)
#define EJEJFEBJHHP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16149030)
#define EJEJFEBJHHP_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x16148FA0)
#define EJEJFEBJHHP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16148E80)
#define EJEJFEBJHHP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16149040)
#define EJEJFEBJHHP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16149010)
#define EJEJFEBJHHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16149090)

inline static constexpr unsigned int EJEJFEBJHHP_TypeDefinitionIndex = 51553;

class EJEJFEBJHHP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFEBJHHP__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EJEJFEBJHHP* DGNAAPGKIPL()
	{
		return ((::EJEJFEBJHHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean MBGCBDBNPFE(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* KPPPGIMEAKP, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* MJODFDBNJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_MBGCBDBNPFE_OFFSET))(this, KPPPGIMEAKP, MJODFDBNJIP);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EJEJFEBJHHP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJEJFEBJHHP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EJEJFEBJHHP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJEJFEBJHHP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJEJFEBJHHP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

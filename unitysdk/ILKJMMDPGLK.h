#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJEJFEBJHHP.h"
#include "unitysdk/HPFEGGKGGFO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define ILKJMMDPGLK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15C1B6E0)
#define ILKJMMDPGLK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15C1C700)
#define ILKJMMDPGLK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15C1BE00)
#define ILKJMMDPGLK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15C1B7F0)
#define ILKJMMDPGLK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15C1C7A0)
#define ILKJMMDPGLK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15C1B7E0)
#define ILKJMMDPGLK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15C1C5A0)
#define ILKJMMDPGLK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15C1BE60)
#define ILKJMMDPGLK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15C1B690)
#define ILKJMMDPGLK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15C1C170)
#define ILKJMMDPGLK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15C1B870)
#define ILKJMMDPGLK__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1C590)

inline static constexpr unsigned int ILKJMMDPGLK_TypeDefinitionIndex = 50550;

class ILKJMMDPGLK : public ::EJEJFEBJHHP
{
public:
	::System::String* JPJEMHHHKGL; // 0x10
	::HPFEGGKGGFO JEJABEHHBIJ; // 0x18
	::System::Int32 GPIOJBLKFAJ; // 0x1C
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKJMMDPGLK__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EJEJFEBJHHP* DGNAAPGKIPL()
	{
		return ((::EJEJFEBJHHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean MBGCBDBNPFE(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* KPPPGIMEAKP, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* MJODFDBNJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_MBGCBDBNPFE_OFFSET))(this, KPPPGIMEAKP, MJODFDBNJIP);
	}

	static ::ILKJMMDPGLK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ILKJMMDPGLK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* MIALFKCCCPI, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::ILKJMMDPGLK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ILKJMMDPGLK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILKJMMDPGLK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

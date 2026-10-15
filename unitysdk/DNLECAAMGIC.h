#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDBDNGEKFP;
class DIGCDGKOBMK;
class HEKHCLACHJE;
class JKNBKEHFJJC;
class LHGAEBPLFFK;
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNLECAAMGIC_ADD_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C51FC20)
#define DNLECAAMGIC_ADD_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C51FB60)
#define DNLECAAMGIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C51FCE0)
#define DNLECAAMGIC_GBNCPKONMDF_OFFSET UNITYSDK_OFFSET(0x1C51FB20)
#define DNLECAAMGIC_GEFFIMDLPCH_OFFSET UNITYSDK_OFFSET(0x1C51FD60)
#define DNLECAAMGIC_GPOOFGDOHID_OFFSET UNITYSDK_OFFSET(0x1C5205F0)
#define DNLECAAMGIC_GPPDNKOPFNO_OFFSET UNITYSDK_OFFSET(0x1C5204D0)
#define DNLECAAMGIC_MMCGCNGFHDG_OFFSET UNITYSDK_OFFSET(0x1C51FAE0)
#define DNLECAAMGIC_REMOVE_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C51FC80)
#define DNLECAAMGIC_REMOVE_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C51FBC0)

inline static constexpr unsigned int DNLECAAMGIC_TypeDefinitionIndex = 41751;

	class DNLECAAMGIC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::DIGCDGKOBMK*, ::LHGAEBPLFFK*>* EECLEEFOBKB; // 0x10
		::System::Action* OnAttributesChanging; // 0x18
		::JKNBKEHFJJC* HBDGDCJFLBN; // 0x20
		::System::Collections::Generic::List_1<::AGDBDNGEKFP*>* JENDNKLGPFF; // 0x28
		::NKIJFPHFJCO* IOABMCKDNNC; // 0x30
		::System::Action* OnAttributesChanged; // 0x38
		::System::Void _ctor(::NKIJFPHFJCO* a1, ::System::Collections::Generic::List_1<::AGDBDNGEKFP*>* a2, ::System::Collections::Generic::Dictionary_2<::DIGCDGKOBMK*, ::LHGAEBPLFFK*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::System::Collections::Generic::List_1<::AGDBDNGEKFP*>*, ::System::Collections::Generic::Dictionary_2<::DIGCDGKOBMK*, ::LHGAEBPLFFK*>*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AGDBDNGEKFP*>* MMCGCNGFHDG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AGDBDNGEKFP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLECAAMGIC_MMCGCNGFHDG_OFFSET))(this);
		}

		::HEKHCLACHJE* GBNCPKONMDF()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLECAAMGIC_GBNCPKONMDF_OFFSET))(this);
		}

		::System::Void add_OnAttributesChanging(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_ADD_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
		}

		::System::Void remove_OnAttributesChanging(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_REMOVE_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
		}

		::System::Void add_OnAttributesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_ADD_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAttributesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_REMOVE_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
		}

		::System::Void GPPDNKOPFNO(::AGDBDNGEKFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDBDNGEKFP*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_GPPDNKOPFNO_OFFSET))(this, a1);
		}

		::System::Void GPOOFGDOHID(::AGDBDNGEKFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDBDNGEKFP*))((::PBYTE)hIl2Cpp + DNLECAAMGIC_GPOOFGDOHID_OFFSET))(this, a1);
		}

		::System::Void GEFFIMDLPCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLECAAMGIC_GEFFIMDLPCH_OFFSET))(this);
		}

	};

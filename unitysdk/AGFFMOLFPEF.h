#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHGAEBPLFFK.h"
#include "unitysdk/ONPKMMDCDAN.h"
class ADGABMKBBNF;
class FIBKHDABPHD;
class HEKHCLACHJE;
class JKNBKEHFJJC;
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AGFFMOLFPEF_ADD_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C50EBE0)
#define AGFFMOLFPEF_ADD_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C50EB20)
#define AGFFMOLFPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C50ECA0)
#define AGFFMOLFPEF_GBNCPKONMDF_OFFSET UNITYSDK_OFFSET(0x1C50E920)
#define AGFFMOLFPEF_GEFFIMDLPCH_OFFSET UNITYSDK_OFFSET(0x1C50ED80)
#define AGFFMOLFPEF_MHFMAPAHOJK_OFFSET UNITYSDK_OFFSET(0x1C50EF00)
#define AGFFMOLFPEF_REMOVE_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C50EC40)
#define AGFFMOLFPEF_REMOVE_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C50EB80)

inline static constexpr unsigned int AGFFMOLFPEF_TypeDefinitionIndex = 41749;

	class AGFFMOLFPEF : public ::LHGAEBPLFFK
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* BODEBHFCMEE; // 0x10
		::System::Action* OnAttributesChanging; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* BIGOKJLEAKC; // 0x20
		::System::Action* OnAttributesChanged; // 0x28
		::JKNBKEHFJJC* HBDGDCJFLBN; // 0x30
		::ADGABMKBBNF* NELLPHEKEPH; // 0x38
		::System::Void _ctor(::ADGABMKBBNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADGABMKBBNF*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_CTOR_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* GBNCPKONMDF()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_GBNCPKONMDF_OFFSET))(this);
		}

		::System::Void add_OnAttributesChanging(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_ADD_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
		}

		::System::Void remove_OnAttributesChanging(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_REMOVE_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
		}

		::System::Void add_OnAttributesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_ADD_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAttributesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_REMOVE_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>* MHFMAPAHOJK(::FIBKHDABPHD* a1, ::NKIJFPHFJCO* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*(*)(::PVOID, ::FIBKHDABPHD*, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_MHFMAPAHOJK_OFFSET))(this, a1, a2);
		}

		::System::Void GEFFIMDLPCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFFMOLFPEF_GEFFIMDLPCH_OFFSET))(this);
		}

	};

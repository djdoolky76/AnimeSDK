#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
class KKGMHJNMOID;
class NKIJFPHFJCO;
class PLHOHFBLKJO;
namespace System { class Action; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define MAAKEBJAIOG_ADD_ONANYMOLDUSABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56EE00)
#define MAAKEBJAIOG_CLLKOALPAEH_OFFSET UNITYSDK_OFFSET(0x1C56FAE0)
#define MAAKEBJAIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C570290)
#define MAAKEBJAIOG_DLBJJJAAPAM_OFFSET UNITYSDK_OFFSET(0x1C570140)
#define MAAKEBJAIOG_DLDKGKNIJFG_OFFSET UNITYSDK_OFFSET(0x1C570220)
#define MAAKEBJAIOG_GET_CHIPMOLDS_OFFSET UNITYSDK_OFFSET(0x1C56EDE0)
#define MAAKEBJAIOG_HHAANHIEJCH_OFFSET UNITYSDK_OFFSET(0x1C56F990)
#define MAAKEBJAIOG_JJBOBPLEJGD_OFFSET UNITYSDK_OFFSET(0x1C56EEC0)
#define MAAKEBJAIOG_OFLIBLPPIEH_OFFSET UNITYSDK_OFFSET(0x1C5701B0)
#define MAAKEBJAIOG_OKAAJAAELJG_OFFSET UNITYSDK_OFFSET(0x1C56EF40)
#define MAAKEBJAIOG_REMOVE_ONANYMOLDUSABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56EE60)
#define MAAKEBJAIOG_SET_CHIPMOLDS_OFFSET UNITYSDK_OFFSET(0x1C56EDF0)
#define MAAKEBJAIOG__BINDBUFFCHIPMOLDUSECOUNTLIMIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C5702A0)

inline static constexpr unsigned int MAAKEBJAIOG_TypeDefinitionIndex = 41809;

	class MAAKEBJAIOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* _ChipMolds_k__BackingField; // 0x10
		::PLHOHFBLKJO* DAABOFCNGGM; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* CCKIGNEOCNJ; // 0x20
		::System::Action* OnAnyMoldUsabilityChanged; // 0x28
		::System::Nullable* JGLJCHGAIHP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* get_ChipMolds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_GET_CHIPMOLDS_OFFSET))(this);
		}

		::System::Void set_ChipMolds(::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_SET_CHIPMOLDS_OFFSET))(this, a1);
		}

		::System::Void add_OnAnyMoldUsabilityChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_ADD_ONANYMOLDUSABILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnyMoldUsabilityChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_REMOVE_ONANYMOLDUSABILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void JJBOBPLEJGD(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_JJBOBPLEJGD_OFFSET))(this, a1);
		}

		::System::Void HHAANHIEJCH(::PLHOHFBLKJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHOHFBLKJO*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_HHAANHIEJCH_OFFSET))(this, a1);
		}

		::System::Void CLLKOALPAEH(::System::Collections::Generic::IEnumerable_1<::KKGMHJNMOID*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::KKGMHJNMOID*>*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_CLLKOALPAEH_OFFSET))(this, a1);
		}

		::System::Void OKAAJAAELJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_OKAAJAAELJG_OFFSET))(this);
		}

		::System::Void DLBJJJAAPAM(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_DLBJJJAAPAM_OFFSET))(this, a1);
		}

		::System::Void OFLIBLPPIEH(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_OFLIBLPPIEH_OFFSET))(this, a1);
		}

		::System::Void DLDKGKNIJFG(::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + MAAKEBJAIOG_DLDKGKNIJFG_OFFSET))(this, a1);
		}

		::System::Void _BindBuffChipMoldUseCountLimit_b__11_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAAKEBJAIOG__BINDBUFFCHIPMOLDUSECOUNTLIMIT_B__11_0_OFFSET))(this, a1);
		}

	};

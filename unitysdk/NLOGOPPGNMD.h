#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define NLOGOPPGNMD_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1C545920)
#define NLOGOPPGNMD_ADD_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545780)
#define NLOGOPPGNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C546220)
#define NLOGOPPGNMD_DPKNCPBEEIA_OFFSET UNITYSDK_OFFSET(0x1C545740)
#define NLOGOPPGNMD_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x1C545840)
#define NLOGOPPGNMD_GOPJCNDGELM_OFFSET UNITYSDK_OFFSET(0x1C545A30)
#define NLOGOPPGNMD_INJBFMJGGMN_OFFSET UNITYSDK_OFFSET(0x1C546070)
#define NLOGOPPGNMD_REMOVE_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5457E0)

inline static constexpr unsigned int NLOGOPPGNMD_TypeDefinitionIndex = 41814;

	class NLOGOPPGNMD : public ::System::Object
	{
	public:
		::System::Action* OnOnlyOrderingChanged; // 0x10
		::System::Collections::Generic::List_1<::NKIJFPHFJCO*>* AOCPCGICFKB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::NKIJFPHFJCO*>* DPKNCPBEEIA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::NKIJFPHFJCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_DPKNCPBEEIA_OFFSET))(this);
		}

		::System::Void add_OnOnlyOrderingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_ADD_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOnlyOrderingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_REMOVE_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
		}

		::System::Void FGLGLHDAEDE(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::System::Int32 AALCFBOGFKP(::NKIJFPHFJCO* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* GOPJCNDGELM(::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_GOPJCNDGELM_OFFSET))(this, a1);
		}

		::System::Void INJBFMJGGMN(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + NLOGOPPGNMD_INJBFMJGGMN_OFFSET))(this, a1);
		}

	};

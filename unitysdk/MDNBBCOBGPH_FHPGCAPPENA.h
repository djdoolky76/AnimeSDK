#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDNBBCOBGPH_FHPGCAPPENA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C860)
#define MDNBBCOBGPH_FHPGCAPPENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C850)
#define MDNBBCOBGPH_FHPGCAPPENA_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x1D30)
#define MDNBBCOBGPH_FHPGCAPPENA_GET_BESTSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xACE0)
#define MDNBBCOBGPH_FHPGCAPPENA_GET_MATCHEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define MDNBBCOBGPH_FHPGCAPPENA_SET_BESTSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xACF0)

inline static constexpr unsigned int MDNBBCOBGPH_FHPGCAPPENA_TypeDefinitionIndex = 68101;

	struct alignas(8) MDNBBCOBGPH_FHPGCAPPENA
	{
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
		::System::Int32 _BestSelectionCount_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* _MatchedPositions_k__BackingField; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_GET_AVATARIDS_OFFSET))(this);
		}

		::System::Int32 get_BestSelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_GET_BESTSELECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_BestSelectionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_SET_BESTSELECTIONCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_MatchedPositions()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_GET_MATCHEDPOSITIONS_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::MDNBBCOBGPH_FHPGCAPPENA a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MDNBBCOBGPH_FHPGCAPPENA))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FHPGCAPPENA_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};

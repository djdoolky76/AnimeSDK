#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDPOFBLBIE;

#define BBCHCIGEOCG_ABPMPOIPPOD_OFFSET UNITYSDK_OFFSET(0x15E82E60)
#define BBCHCIGEOCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E82EB0)
#define BBCHCIGEOCG_GET_TARGETELEMENTID_OFFSET UNITYSDK_OFFSET(0x15E82CC0)
#define BBCHCIGEOCG_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x15E82CE0)
#define BBCHCIGEOCG_SET_TARGETELEMENTID_OFFSET UNITYSDK_OFFSET(0x15E82CD0)

inline static constexpr unsigned int BBCHCIGEOCG_TypeDefinitionIndex = 72437;

	class BBCHCIGEOCG : public ::System::Object
	{
	public:
		::DMDPOFBLBIE* GNOEGILFEMD; // 0x10
		::System::UInt32 _TargetElementID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCHCIGEOCG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TargetElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCHCIGEOCG_GET_TARGETELEMENTID_OFFSET))(this);
		}

		::System::Void set_TargetElementID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBCHCIGEOCG_SET_TARGETELEMENTID_OFFSET))(this, a1);
		}

		::System::Void LNGKNPJIOML(::DMDPOFBLBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDPOFBLBIE*))((::PBYTE)hIl2Cpp + BBCHCIGEOCG_LNGKNPJIOML_OFFSET))(this, a1);
		}

		::DMDPOFBLBIE* ABPMPOIPPOD()
		{
			return ((::DMDPOFBLBIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCHCIGEOCG_ABPMPOIPPOD_OFFSET))(this);
		}

	};

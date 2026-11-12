#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDPOFBLBIE;

#define HHNBPEEGNCL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C220C0)
#define HHNBPEEGNCL_GET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x16C21FA0)
#define HHNBPEEGNCL_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x16C21FC0)
#define HHNBPEEGNCL_SET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x16C21FB0)

inline static constexpr unsigned int HHNBPEEGNCL_TypeDefinitionIndex = 74515;

	class HHNBPEEGNCL : public ::System::Object
	{
	public:
		::System::Boolean _IsLive_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBPEEGNCL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBPEEGNCL_GET_ISLIVE_OFFSET))(this);
		}

		::System::Void set_IsLive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHNBPEEGNCL_SET_ISLIVE_OFFSET))(this, a1);
		}

		::System::Void LNGKNPJIOML(::DMDPOFBLBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDPOFBLBIE*))((::PBYTE)hIl2Cpp + HHNBPEEGNCL_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};

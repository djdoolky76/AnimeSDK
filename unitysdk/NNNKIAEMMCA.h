#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDPOFBLBIE;

#define NNNKIAEMMCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCF0C0)
#define NNNKIAEMMCA_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xBCCEF40)

inline static constexpr unsigned int NNNKIAEMMCA_TypeDefinitionIndex = 72433;

	class NNNKIAEMMCA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNKIAEMMCA_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::DMDPOFBLBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDPOFBLBIE*))((::PBYTE)hIl2Cpp + NNNKIAEMMCA_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};

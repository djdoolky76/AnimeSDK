#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALCEJNMFHOK;

#define GJJLBGAOKBE_CCIIMPGOHNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCD8B00)
#define GJJLBGAOKBE_CCIIMPGOHNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCD8B80)
#define GJJLBGAOKBE_CCIIMPGOHNF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD8C10)
#define GJJLBGAOKBE_CCIIMPGOHNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD8C00)

inline static constexpr unsigned int GJJLBGAOKBE_CCIIMPGOHNF_TypeDefinitionIndex = 18191;

class GJJLBGAOKBE_CCIIMPGOHNF : public ::System::Object
{
public:
	static ::GJJLBGAOKBE_CCIIMPGOHNF** StaticGet_NJLLMPCDOEB()
	{
		return (::GJJLBGAOKBE_CCIIMPGOHNF**)Il2CppClass::FromTypeDefinitionIndex(GJJLBGAOKBE_CCIIMPGOHNF_TypeDefinitionIndex)->GetStaticField(0x8400);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CCIIMPGOHNF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CCIIMPGOHNF__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::ALCEJNMFHOK* EJCBEJMGFAJ, ::ALCEJNMFHOK* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALCEJNMFHOK*, ::ALCEJNMFHOK*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CCIIMPGOHNF_EQUALS_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 GetHashCode(::ALCEJNMFHOK* EJCBEJMGFAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::ALCEJNMFHOK*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CCIIMPGOHNF_GETHASHCODE_OFFSET))(this, EJCBEJMGFAJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBADLOICGB;
namespace System { template <typename T> class Comparison_1; }

#define LDHFICMIAHM___C_OCNBGDFABPD_OFFSET UNITYSDK_OFFSET(0x17683BD0)
#define LDHFICMIAHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17683B80)
#define LDHFICMIAHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17683BC0)

inline static constexpr unsigned int LDHFICMIAHM___c_TypeDefinitionIndex = 73996;

class LDHFICMIAHM___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(LDHFICMIAHM___c_TypeDefinitionIndex)->GetStaticField(0x3E620);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDHFICMIAHM___c_TypeDefinitionIndex)->GetStaticField(0x3E628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDHFICMIAHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHFICMIAHM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OCNBGDFABPD(::KNBADLOICGB* EJCBEJMGFAJ, ::KNBADLOICGB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + LDHFICMIAHM___C_OCNBGDFABPD_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

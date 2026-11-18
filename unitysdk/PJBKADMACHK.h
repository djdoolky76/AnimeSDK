#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEMGMEPAOJM.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define PJBKADMACHK_EIANPGDHBKM_OFFSET UNITYSDK_OFFSET(0x1C2B1160)
#define PJBKADMACHK_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x1C2B1050)
#define PJBKADMACHK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C2B0F40)
#define PJBKADMACHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0EB0)

inline static constexpr unsigned int PJBKADMACHK_TypeDefinitionIndex = 47307;

class PJBKADMACHK : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::FEMGMEPAOJM>** StaticGet_CGNNKCDPLCD()
	{
		return (::System::Collections::Generic::Queue_1<::FEMGMEPAOJM>**)Il2CppClass::FromTypeDefinitionIndex(PJBKADMACHK_TypeDefinitionIndex)->GetStaticField(0x3CEC0);
	}
	static ::System::Boolean* StaticGet_GEEHANAMLMD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PJBKADMACHK_TypeDefinitionIndex)->GetStaticField(0xDEF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBKADMACHK__CCTOR_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBKADMACHK_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void PBFBICMFFFN(::FEMGMEPAOJM& BIJNDBBOLIJ)
	{
		return ((::System::Void(*)(::FEMGMEPAOJM&))((::PBYTE)hIl2Cpp + PJBKADMACHK_PBFBICMFFFN_OFFSET))(BIJNDBBOLIJ);
	}

	static ::System::Void EIANPGDHBKM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBKADMACHK_EIANPGDHBKM_OFFSET))();
	}
};

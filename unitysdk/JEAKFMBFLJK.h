#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;

#define JEAKFMBFLJK_CTOR_OFFSET UNITYSDK_OFFSET(0x166045C0)
#define JEAKFMBFLJK_GET__LHS_OFFSET UNITYSDK_OFFSET(0x16604900)
#define JEAKFMBFLJK_GET__RHS_OFFSET UNITYSDK_OFFSET(0x16604910)
#define JEAKFMBFLJK_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x166045D0)

inline static constexpr unsigned int JEAKFMBFLJK_TypeDefinitionIndex = 82161;

	class JEAKFMBFLJK : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* __Rhs_k__BackingField; // 0x10
		::MCDOIAPPMBF* __Lhs_k__BackingField; // 0x18
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + JEAKFMBFLJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + JEAKFMBFLJK_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::MCDOIAPPMBF* get__Lhs()
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAKFMBFLJK_GET__LHS_OFFSET))(this);
		}

		::MCDOIAPPMBF* get__Rhs()
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAKFMBFLJK_GET__RHS_OFFSET))(this);
		}

	};

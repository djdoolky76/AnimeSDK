#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;

#define FAJHHDCPLHD_CTOR_OFFSET UNITYSDK_OFFSET(0x15681F50)
#define FAJHHDCPLHD_GET__OPERAND_OFFSET UNITYSDK_OFFSET(0x15682190)
#define FAJHHDCPLHD_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x15681F60)

inline static constexpr unsigned int FAJHHDCPLHD_TypeDefinitionIndex = 82164;

	class FAJHHDCPLHD : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* __Operand_k__BackingField; // 0x10
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + FAJHHDCPLHD_CTOR_OFFSET))(this, a1);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + FAJHHDCPLHD_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::MCDOIAPPMBF* get__Operand()
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJHHDCPLHD_GET__OPERAND_OFFSET))(this);
		}

	};

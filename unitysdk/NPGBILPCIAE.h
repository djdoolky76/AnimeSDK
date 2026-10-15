#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;

#define NPGBILPCIAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF5F60)
#define NPGBILPCIAE_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xBCF6000)

inline static constexpr unsigned int NPGBILPCIAE_TypeDefinitionIndex = 59924;

	class NPGBILPCIAE : public ::APDMIIEDMLI_CFHOMFLPNNO
	{
	public:
		::MCDOIAPPMBF* LEMBIAHABFA; // 0x10
		::MCDOIAPPMBF* JBFFLCHOKKO; // 0x18
		::System::Single EOBPGKJGFLM; // 0x20
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + NPGBILPCIAE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + NPGBILPCIAE_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};

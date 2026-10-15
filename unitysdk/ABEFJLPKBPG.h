#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABEFJLPKBPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F0550)
#define ABEFJLPKBPG_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xB0F0870)
#define ABEFJLPKBPG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB0F0560)

inline static constexpr unsigned int ABEFJLPKBPG_TypeDefinitionIndex = 64143;

	class ABEFJLPKBPG : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* GNAOLDABNBB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ANCPEILJFCB; // 0x18
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + ABEFJLPKBPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFJLPKBPG_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + ABEFJLPKBPG_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};

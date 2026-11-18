#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHALCAPAHJ.h"
#include "unitysdk/System/Object.h"

class HMDAHKKHLJA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMDAHKKHLJA_IDEEKPMHKIC_BKMPJBFPBHP_OFFSET UNITYSDK_OFFSET(0x12E89A60)
#define HMDAHKKHLJA_IDEEKPMHKIC_DLDJHLEHHHP_OFFSET UNITYSDK_OFFSET(0x12E899A0)
#define HMDAHKKHLJA_IDEEKPMHKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89990)

inline static constexpr unsigned int HMDAHKKHLJA_IDEEKPMHKIC_TypeDefinitionIndex = 85927;

class HMDAHKKHLJA_IDEEKPMHKIC : public ::System::Object
{
public:
	::AKHALCAPAHJ CFMBGCMCNMM; // 0x10
	::HMDAHKKHLJA* KLHPEBKNIFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_IDEEKPMHKIC__CTOR_OFFSET))(this);
	}

	::System::Void DLDJHLEHHHP(::System::String* OLOMNNBBHPJ, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JGACOCAFKNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_IDEEKPMHKIC_DLDJHLEHHHP_OFFSET))(this, OLOMNNBBHPJ, JGACOCAFKNN);
	}

	::System::Void BKMPJBFPBHP(::System::String* OLOMNNBBHPJ, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JGACOCAFKNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_IDEEKPMHKIC_BKMPJBFPBHP_OFFSET))(this, OLOMNNBBHPJ, JGACOCAFKNN);
	}
};

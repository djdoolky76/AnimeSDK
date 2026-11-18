#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBMJHBACPJM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12977C70)
#define KBMJHBACPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x12977C60)

inline static constexpr unsigned int KBMJHBACPJM_TypeDefinitionIndex = 90671;

class KBMJHBACPJM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* IPCDHBMPGIF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LACIBNOPNLI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DKNPBAKDIGE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* GGMIODPBKEC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMJHBACPJM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMJHBACPJM_PHOADBJGFBE_OFFSET))(this);
	}
};

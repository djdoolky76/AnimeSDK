#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOIMCGHFMGP_AKANGNGMDGK_KKFMFECEIGL_OFFSET UNITYSDK_OFFSET(0x1B7BE160)
#define GOIMCGHFMGP_AKANGNGMDGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BE060)

inline static constexpr unsigned int GOIMCGHFMGP_AKANGNGMDGK_TypeDefinitionIndex = 10586;

class GOIMCGHFMGP_AKANGNGMDGK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* BEKBLEHDPBO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PHGNHCCKPFK; // 0x18
	::System::Int32 KMKGCBKAGNP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_AKANGNGMDGK__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> KKFMFECEIGL(::System::Random* MFEPCLGOHPI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Random*, ::System::String*))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_AKANGNGMDGK_KKFMFECEIGL_OFFSET))(this, MFEPCLGOHPI, MCOHLHMKLIP);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKJKAKMOCJC_OAHABKKDCKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1521DC70)

inline static constexpr unsigned int KKJKAKMOCJC_OAHABKKDCKI_TypeDefinitionIndex = 66242;

class KKJKAKMOCJC_OAHABKKDCKI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* EPIGFDJLEKJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* GEGIKBFKEIC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* IHLHLFHKNDD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* GACGDJBMBMH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_OAHABKKDCKI__CTOR_OFFSET))(this);
	}
};

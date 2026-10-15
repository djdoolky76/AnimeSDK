#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCMIHMKBAAA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNDFLJFPBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CFC80)

inline static constexpr unsigned int PNDFLJFPBBE_TypeDefinitionIndex = 41400;

	class PNDFLJFPBBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OCMIHMKBAAA*>* LHNEEMFCGAN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDFLJFPBBE_CTOR_OFFSET))(this);
		}

	};

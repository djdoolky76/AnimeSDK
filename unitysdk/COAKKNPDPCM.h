#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COAKKNPDPCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D7DF0)

inline static constexpr unsigned int COAKKNPDPCM_TypeDefinitionIndex = 36447;

	class COAKKNPDPCM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FHEJCAGLJFA; // 0x10
		::System::UInt32 FHOJKNOIEJB; // 0x18
		::System::UInt32 CNDOBNGKDKC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKKNPDPCM_CTOR_OFFSET))(this);
		}

	};

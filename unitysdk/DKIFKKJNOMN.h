#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DKIFKKJNOMN_CCOOIPGDIMD_OFFSET UNITYSDK_OFFSET(0xF87BD90)
#define DKIFKKJNOMN_HCIKHPKHDIH_OFFSET UNITYSDK_OFFSET(0xF87BEE0)

inline static constexpr unsigned int DKIFKKJNOMN_TypeDefinitionIndex = 81741;

	class DKIFKKJNOMN : public ::System::Object
	{
	public:
		static ::System::String* CCOOIPGDIMD(::System::Single a1)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + DKIFKKJNOMN_CCOOIPGDIMD_OFFSET))(a1);
		}

		static ::System::String* HCIKHPKHDIH(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKIFKKJNOMN_HCIKHPKHDIH_OFFSET))(a1);
		}

	};

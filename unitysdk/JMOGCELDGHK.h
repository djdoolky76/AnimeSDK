#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JMOGCELDGHK_NJDPOHCOEFF_OFFSET UNITYSDK_OFFSET(0x1A0BC120)

inline static constexpr unsigned int JMOGCELDGHK_TypeDefinitionIndex = 80079;

	class JMOGCELDGHK : public ::System::Object
	{
	public:
		static ::System::Void NJDPOHCOEFF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMOGCELDGHK_NJDPOHCOEFF_OFFSET))(a1);
		}

	};

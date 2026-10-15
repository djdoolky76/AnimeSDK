#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFBLAAJJHKF;
class MHLFFIDFHLA;
namespace System { class String; }

#define DABJIAKHING_CLMIFGMPLBN_OFFSET UNITYSDK_OFFSET(0xDFB1600)
#define DABJIAKHING_NLCBLNNGOCH_OFFSET UNITYSDK_OFFSET(0xDFB12B0)

inline static constexpr unsigned int DABJIAKHING_TypeDefinitionIndex = 54068;

	class DABJIAKHING : public ::System::Object
	{
	public:
		static ::KFBLAAJJHKF* NLCBLNNGOCH(::MHLFFIDFHLA* a1, ::System::String* a2)
		{
			return ((::KFBLAAJJHKF*(*)(::MHLFFIDFHLA*, ::System::String*))((::PBYTE)hIl2Cpp + DABJIAKHING_NLCBLNNGOCH_OFFSET))(a1, a2);
		}

		static ::KFBLAAJJHKF* CLMIFGMPLBN(::MHLFFIDFHLA* a1, ::System::UInt32 a2)
		{
			return ((::KFBLAAJJHKF*(*)(::MHLFFIDFHLA*, ::System::UInt32))((::PBYTE)hIl2Cpp + DABJIAKHING_CLMIFGMPLBN_OFFSET))(a1, a2);
		}

	};

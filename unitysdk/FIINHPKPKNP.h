#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFAECNJBLC;
class DDENCEMCKLN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIINHPKPKNP_FFDOLFKEALD_OFFSET UNITYSDK_OFFSET(0x1C447C00)
#define FIINHPKPKNP_OAENDNPFLCJ_OFFSET UNITYSDK_OFFSET(0x1C447AB0)

inline static constexpr unsigned int FIINHPKPKNP_TypeDefinitionIndex = 41427;

	class FIINHPKPKNP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* OAENDNPFLCJ(::DDENCEMCKLN* a1)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + FIINHPKPKNP_OAENDNPFLCJ_OFFSET))(a1);
		}

		static ::CIFAECNJBLC* FFDOLFKEALD(::DDENCEMCKLN* a1)
		{
			return ((::CIFAECNJBLC*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + FIINHPKPKNP_FFDOLFKEALD_OFFSET))(a1);
		}

	};

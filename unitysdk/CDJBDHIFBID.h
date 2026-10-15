#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFAECNJBLC;
class DDENCEMCKLN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDJBDHIFBID_FFDOLFKEALD_OFFSET UNITYSDK_OFFSET(0x1C450CE0)
#define CDJBDHIFBID_OAENDNPFLCJ_OFFSET UNITYSDK_OFFSET(0x1C450B90)

inline static constexpr unsigned int CDJBDHIFBID_TypeDefinitionIndex = 41429;

	class CDJBDHIFBID : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* OAENDNPFLCJ(::DDENCEMCKLN* a1)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + CDJBDHIFBID_OAENDNPFLCJ_OFFSET))(a1);
		}

		static ::CIFAECNJBLC* FFDOLFKEALD(::DDENCEMCKLN* a1)
		{
			return ((::CIFAECNJBLC*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + CDJBDHIFBID_FFDOLFKEALD_OFFSET))(a1);
		}

	};

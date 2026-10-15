#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/INGNCPPMOFG.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COADBCKHCOJ_AGPNBFEAHLI_OFFSET UNITYSDK_OFFSET(0xDCACC70)

inline static constexpr unsigned int COADBCKHCOJ_TypeDefinitionIndex = 58989;

	class COADBCKHCOJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::INGNCPPMOFG>* AGPNBFEAHLI(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::INGNCPPMOFG>*(*)(::System::String*))((::PBYTE)hIl2Cpp + COADBCKHCOJ_AGPNBFEAHLI_OFFSET))(a1);
		}

	};

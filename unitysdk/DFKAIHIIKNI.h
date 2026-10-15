#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFKAIHIIKNI_CTOR_OFFSET UNITYSDK_OFFSET(0xE826120)
#define DFKAIHIIKNI_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE825E10)

inline static constexpr unsigned int DFKAIHIIKNI_TypeDefinitionIndex = 79665;

	class DFKAIHIIKNI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FKLECLLJCEH*>* HBAKPIJAKDI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKAIHIIKNI_CTOR_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKAIHIIKNI_GET_DESC_OFFSET))(this);
		}

	};

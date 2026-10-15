#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHEGHCAIEH;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PACFJDLCKGC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFC5EC0)
#define PACFJDLCKGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC5F80)
#define PACFJDLCKGC_LALPGEAJIHF_OFFSET UNITYSDK_OFFSET(0xBFC5E20)

inline static constexpr unsigned int PACFJDLCKGC_TypeDefinitionIndex = 80110;

	class PACFJDLCKGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACFJDLCKGC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* LALPGEAJIHF()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACFJDLCKGC_LALPGEAJIHF_OFFSET))(this);
		}

		::GGHEGHCAIEH* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GGHEGHCAIEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PACFJDLCKGC_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};

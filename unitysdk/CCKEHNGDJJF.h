#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEODAOIOGLO.h"
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CCKEHNGDJJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC74B3E0)
#define CCKEHNGDJJF_FLHAEFKDIHO_OFFSET UNITYSDK_OFFSET(0xC74B320)
#define CCKEHNGDJJF_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xC74B000)
#define CCKEHNGDJJF_IKDDBODBGGN_OFFSET UNITYSDK_OFFSET(0xC74B070)

inline static constexpr unsigned int CCKEHNGDJJF_TypeDefinitionIndex = 59487;

	class CCKEHNGDJJF : public ::OEODAOIOGLO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF_GETTYPENAME_OFFSET))(this);
		}

		::System::Boolean IKDDBODBGGN(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CCKEHNGDJJF_IKDDBODBGGN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple*>* FLHAEFKDIHO(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCKEHNGDJJF_FLHAEFKDIHO_OFFSET))(this, a1);
		}

	};

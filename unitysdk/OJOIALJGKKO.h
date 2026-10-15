#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJOIALJGKKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBECF270)
#define OJOIALJGKKO_EKFICALFHOA_OFFSET UNITYSDK_OFFSET(0xBECD760)
#define OJOIALJGKKO_FEFDEMHEBND_OFFSET UNITYSDK_OFFSET(0xBECD810)
#define OJOIALJGKKO_FLCPFDILIGH_OFFSET UNITYSDK_OFFSET(0xBECE830)
#define OJOIALJGKKO_MAFMDENLEJG_OFFSET UNITYSDK_OFFSET(0xBECEFA0)
#define OJOIALJGKKO_NEGHIKCGLEB_OFFSET UNITYSDK_OFFSET(0xBECEE30)

inline static constexpr unsigned int OJOIALJGKKO_TypeDefinitionIndex = 52053;

	class OJOIALJGKKO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIALJGKKO_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple>* EKFICALFHOA(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OJOIALJGKKO_EKFICALFHOA_OFFSET))(a1, a2);
		}

		static ::System::Void FEFDEMHEBND(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::ValueTuple>* a4)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*, ::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + OJOIALJGKKO_FEFDEMHEBND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FLCPFDILIGH(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + OJOIALJGKKO_FLCPFDILIGH_OFFSET))(a1, a2);
		}

		static ::System::Boolean NEGHIKCGLEB(::SimpleJSON::JSONArray* a1, ::SimpleJSON::JSONArray* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONArray*, ::SimpleJSON::JSONArray*))((::PBYTE)hIl2Cpp + OJOIALJGKKO_NEGHIKCGLEB_OFFSET))(a1, a2);
		}

		static ::System::Boolean MAFMDENLEJG(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OJOIALJGKKO_MAFMDENLEJG_OFFSET))(a1, a2);
		}

	};

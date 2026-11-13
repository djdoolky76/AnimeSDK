#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECOHEGCALCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36F70)

inline static constexpr unsigned int ECOHEGCALCP_TypeDefinitionIndex = 44687;

	class ECOHEGCALCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AJDCLALCDLJ*>* AAANMGOBCAE; // 0x10
		::System::Collections::Generic::List_1<::AJDCLALCDLJ*>* DMMIBAMEFEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOHEGCALCP_CTOR_OFFSET))(this);
		}

	};

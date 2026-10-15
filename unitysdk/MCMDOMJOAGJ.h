#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCMDOMJOAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8814A0)

inline static constexpr unsigned int MCMDOMJOAGJ_TypeDefinitionIndex = 80551;

	class MCMDOMJOAGJ : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* PCPFHELLPJE; // 0x18
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*))((::PBYTE)hIl2Cpp + MCMDOMJOAGJ_CTOR_OFFSET))(this, a1, a2);
		}

	};

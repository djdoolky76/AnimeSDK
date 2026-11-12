#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANDDFEHONE;
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHIFPCCBKOF___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173D88D0)
#define IHIFPCCBKOF___C__DISPLAYCLASS31_0___PREPAREACTIVEDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x173D9220)

inline static constexpr unsigned int IHIFPCCBKOF___c__DisplayClass31_0_TypeDefinitionIndex = 74230;

	class IHIFPCCBKOF___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BANDDFEHONE*>* paramList; // 0x10
		::System::Predicate_1<::BANDDFEHONE*>* __9__0; // 0x18
		::System::Int32 i; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __PrepareActiveDataList_b__0(::BANDDFEHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS31_0___PREPAREACTIVEDATALIST_B__0_OFFSET))(this, a1);
		}

	};

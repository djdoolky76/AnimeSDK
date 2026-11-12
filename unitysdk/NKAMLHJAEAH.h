#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKAMLHJAEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2F1B0)

inline static constexpr unsigned int NKAMLHJAEAH_TypeDefinitionIndex = 44718;

	class NKAMLHJAEAH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AOGEBFNDBGN; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* FLBGELFEBCK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAMLHJAEAH_CTOR_OFFSET))(this);
		}

	};

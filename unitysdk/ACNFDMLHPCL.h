#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACNFDMLHPCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C581600)

inline static constexpr unsigned int ACNFDMLHPCL_TypeDefinitionIndex = 36486;

	class ACNFDMLHPCL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* JMGBCEPNALE; // 0x10
		::System::UInt32 HJPBAJEPAGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNFDMLHPCL_CTOR_OFFSET))(this);
		}

	};

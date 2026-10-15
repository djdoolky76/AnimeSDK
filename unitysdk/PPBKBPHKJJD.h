#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDPCOMKMKJ;
class NMEDAAEMNNP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPBKBPHKJJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9590)

inline static constexpr unsigned int PPBKBPHKJJD_TypeDefinitionIndex = 42460;

	class PPBKBPHKJJD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KIDPCOMKMKJ*>* GGHCKBHGHFC; // 0x10
		::System::Collections::Generic::List_1<::NMEDAAEMNNP*>* EDEBKBFGDFM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBKBPHKJJD_CTOR_OFFSET))(this);
		}

	};

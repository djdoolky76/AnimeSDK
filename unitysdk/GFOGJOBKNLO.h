#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GFOGJOBKNLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73950)

inline static constexpr unsigned int GFOGJOBKNLO_TypeDefinitionIndex = 43765;

	class GFOGJOBKNLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NABBOPCFPFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOGJOBKNLO_CTOR_OFFSET))(this);
		}

	};

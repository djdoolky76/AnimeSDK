#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBCPOJCNNAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C94B170)

inline static constexpr unsigned int OBCPOJCNNAA_TypeDefinitionIndex = 41942;

	class OBCPOJCNNAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* MFPIDLKJBJH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCPOJCNNAA_CTOR_OFFSET))(this);
		}

	};

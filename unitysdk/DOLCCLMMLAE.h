#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOLCCLMMLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2FE20)

inline static constexpr unsigned int DOLCCLMMLAE_TypeDefinitionIndex = 41963;

	class DOLCCLMMLAE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ECBBMNFNPDL; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* CAAEJNLOIMH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCCLMMLAE_CTOR_OFFSET))(this);
		}

	};

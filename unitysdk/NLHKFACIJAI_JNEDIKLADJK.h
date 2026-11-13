#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLHKFACIJAI_JNEDIKLADJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A42E500)

inline static constexpr unsigned int NLHKFACIJAI_JNEDIKLADJK_TypeDefinitionIndex = 60978;

	class NLHKFACIJAI_JNEDIKLADJK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AIDILOMNLHG; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CIALPOICAJD; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* BMMBNBOEOCJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKFACIJAI_JNEDIKLADJK_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMIMBOJCACI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2D0D0)
#define OMIMBOJCACI_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBF2D080)

inline static constexpr unsigned int OMIMBOJCACI_TypeDefinitionIndex = 63146;

	class OMIMBOJCACI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PDMEGKJAHOA; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* KCGHDCMBLFH; // 0x18
		::System::UInt32 HOMMGNHELHC; // 0x20
		::System::UInt32 LFFCFHLMHOE; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIMBOJCACI_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIMBOJCACI_PKADDEPKJFN_OFFSET))(this);
		}

	};

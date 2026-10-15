#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOAIMAGDCOH_JHMIPHMOCHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB58D050)

inline static constexpr unsigned int KOAIMAGDCOH_JHMIPHMOCHA_TypeDefinitionIndex = 68805;

	class KOAIMAGDCOH_JHMIPHMOCHA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* HNMFHGADEEO; // 0x10
		::System::Int32 DFFLADLLADD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_JHMIPHMOCHA_CTOR_OFFSET))(this);
		}

	};

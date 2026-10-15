#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKNHOGCDNHH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNHDELFECHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C460520)

inline static constexpr unsigned int HNHDELFECHK_TypeDefinitionIndex = 41464;

	class HNHDELFECHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* ANMIKGHAEFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHDELFECHK_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKCBNBAENIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA42B80)

inline static constexpr unsigned int FKCBNBAENIL_TypeDefinitionIndex = 42122;

	class FKCBNBAENIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* BFMKHHOCBPK; // 0x10
		::System::Int32 INMGEFFKLGM; // 0x18
		::System::Boolean OEBHEECEBJK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCBNBAENIL_CTOR_OFFSET))(this);
		}

	};

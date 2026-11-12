#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPNJDAKAKO.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIADGHGEBPJ_MFPPNLHPEND_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2002F0)
#define MIADGHGEBPJ_MFPPNLHPEND_CTOR_OFFSET UNITYSDK_OFFSET(0xC200350)

inline static constexpr unsigned int MIADGHGEBPJ_MFPPNLHPEND_TypeDefinitionIndex = 58676;

	class MIADGHGEBPJ_MFPPNLHPEND : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HPPNJDAKAKO>* BIHIJHFCPJF; // 0x10
		::System::Single MMNELBFMJOF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_MFPPNLHPEND_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_MFPPNLHPEND_CLEAR_OFFSET))(this);
		}

	};

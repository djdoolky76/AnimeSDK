#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKCHBKHKLO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBEKMNHAJGA_CTOR_OFFSET UNITYSDK_OFFSET(0x19A6B6B0)
#define JBEKMNHAJGA_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x19A6B6A0)

inline static constexpr unsigned int JBEKMNHAJGA_TypeDefinitionIndex = 83533;

	class JBEKMNHAJGA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MFKCHBKHKLO*>* _Entries_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKMNHAJGA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MFKCHBKHKLO*>* get_Entries()
		{
			return ((::System::Collections::Generic::List_1<::MFKCHBKHKLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKMNHAJGA_GET_ENTRIES_OFFSET))(this);
		}

	};

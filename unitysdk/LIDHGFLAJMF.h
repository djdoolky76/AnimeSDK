#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHDPPMNEEB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIDHGFLAJMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0C90)

inline static constexpr unsigned int LIDHGFLAJMF_TypeDefinitionIndex = 43226;

	class LIDHGFLAJMF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FAHDPPMNEEB*>* KNBPOHCGEGB; // 0x10
		::System::Boolean MOKNCFJICIC; // 0x18
		// static const ::System::String* FOLDCNKIINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDHGFLAJMF_CTOR_OFFSET))(this);
		}

	};

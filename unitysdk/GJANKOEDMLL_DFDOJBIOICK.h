#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJANKOEDMLL_DFDOJBIOICK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4D5A0)

inline static constexpr unsigned int GJANKOEDMLL_DFDOJBIOICK_TypeDefinitionIndex = 73259;

	class GJANKOEDMLL_DFDOJBIOICK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* HBLIMNKIPLN; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* PEANIENEKOB; // 0x18
		::System::UInt32 JIDLKIHJLFL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_DFDOJBIOICK_CTOR_OFFSET))(this);
		}

	};

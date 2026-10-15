#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CDKEBLNOEPH_CTOR_OFFSET UNITYSDK_OFFSET(0xC768E80)
#define CDKEBLNOEPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC768E00)

inline static constexpr unsigned int CDKEBLNOEPH_TypeDefinitionIndex = 59623;

	class CDKEBLNOEPH : public ::System::Object
	{
	public:
		::System::String* KELBNBNDKLG; // 0x10
		::System::String* AGONLPCIGHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKEBLNOEPH_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKEBLNOEPH_TOSTRING_OFFSET))(this);
		}

	};

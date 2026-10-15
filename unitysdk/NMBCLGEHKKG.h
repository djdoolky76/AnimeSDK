#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NMBCLGEHKKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C941D90)

inline static constexpr unsigned int NMBCLGEHKKG_TypeDefinitionIndex = 42021;

	class NMBCLGEHKKG : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::Boolean CEJPJNBDMKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBCLGEHKKG_CTOR_OFFSET))(this);
		}

	};

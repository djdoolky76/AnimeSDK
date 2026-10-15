#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define HNIOFIKKCOI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C643320)
#define HNIOFIKKCOI___C__DISPLAYCLASS5_0___FILTERCATVALUEMAPBYEXTREM_B__0_OFFSET UNITYSDK_OFFSET(0x1C645F90)

inline static constexpr unsigned int HNIOFIKKCOI___c__DisplayClass5_0_TypeDefinitionIndex = 37340;

	class HNIOFIKKCOI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 extremValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FilterCatValueMapByExtrem_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C__DISPLAYCLASS5_0___FILTERCATVALUEMAPBYEXTREM_B__0_OFFSET))(this, a1);
		}

	};

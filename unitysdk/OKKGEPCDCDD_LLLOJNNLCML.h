#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define OKKGEPCDCDD_LLLOJNNLCML_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E4010)
#define OKKGEPCDCDD_LLLOJNNLCML_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E4680)

inline static constexpr unsigned int OKKGEPCDCDD_LLLOJNNLCML_TypeDefinitionIndex = 61915;

	class OKKGEPCDCDD_LLLOJNNLCML : public ::System::Object
	{
	public:
		::System::Action* PIBCMNAFAME; // 0x10
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_LLLOJNNLCML_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_LLLOJNNLCML_DISPOSE_OFFSET))(this);
		}

	};

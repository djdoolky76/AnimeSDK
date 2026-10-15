#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools { class TimelineData; }
namespace System { class String; }

#define NCEDGGKOMIH___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB039C0)
#define NCEDGGKOMIH___C__DISPLAYCLASS35_0___GETTIMELINEPATH_B__0_OFFSET UNITYSDK_OFFSET(0xBB039F0)

inline static constexpr unsigned int NCEDGGKOMIH___c__DisplayClass35_0_TypeDefinitionIndex = 48495;

	class NCEDGGKOMIH___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::String* timelineName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEDGGKOMIH___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetTimelinePath_b__0(::RPGTools::TimelineData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::TimelineData*))((::PBYTE)hIl2Cpp + NCEDGGKOMIH___C__DISPLAYCLASS35_0___GETTIMELINEPATH_B__0_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HLFHEENBEPJ___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1989F9F0)
#define HLFHEENBEPJ___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1989FA00)

inline static constexpr unsigned int HLFHEENBEPJ___c__DisplayClass1_0_TypeDefinitionIndex = 53973;

	class HLFHEENBEPJ___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* uniqueName; // 0x10
		::System::String* ownerToken; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFHEENBEPJ___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFHEENBEPJ___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};

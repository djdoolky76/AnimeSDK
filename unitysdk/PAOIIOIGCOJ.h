#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFHKAJPFNE;

#define PAOIIOIGCOJ_AGMANDJBGJJ_OFFSET UNITYSDK_OFFSET(0xBFD2BE0)
#define PAOIIOIGCOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBFF10)

inline static constexpr unsigned int PAOIIOIGCOJ_TypeDefinitionIndex = 73781;

	class PAOIIOIGCOJ : public ::System::Object
	{
	public:
		::LJFHKAJPFNE* BJPKBELGNCM; // 0x10
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + PAOIIOIGCOJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Int32 AGMANDJBGJJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PAOIIOIGCOJ_AGMANDJBGJJ_OFFSET))(a1, a2);
		}

	};

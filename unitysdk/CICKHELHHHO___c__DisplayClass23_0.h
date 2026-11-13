#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFCFNCPPFKI;
namespace System { class Exception; }

#define CICKHELHHHO___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16E36D20)
#define CICKHELHHHO___C__DISPLAYCLASS23_0___COMPLETESESSIONAFTEREXITCOVERED_B__0_OFFSET UNITYSDK_OFFSET(0x16E37180)
#define CICKHELHHHO___C__DISPLAYCLASS23_0___COMPLETESESSIONAFTEREXITCOVERED_B__1_OFFSET UNITYSDK_OFFSET(0x16E371D0)

inline static constexpr unsigned int CICKHELHHHO___c__DisplayClass23_0_TypeDefinitionIndex = 77137;

	class CICKHELHHHO___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::JFCFNCPPFKI* session; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __CompleteSessionAfterExitCovered_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS23_0___COMPLETESESSIONAFTEREXITCOVERED_B__0_OFFSET))(this);
		}

		::System::Void __CompleteSessionAfterExitCovered_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS23_0___COMPLETESESSIONAFTEREXITCOVERED_B__1_OFFSET))(this, a1);
		}

	};

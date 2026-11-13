#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class PEEDFBLADEA;
namespace System { template <typename T> class Action_1; }

#define PEEDFBLADEA___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1044A700)
#define PEEDFBLADEA___C__DISPLAYCLASS14_0___PRELOADEXITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1044A830)

inline static constexpr unsigned int PEEDFBLADEA___c__DisplayClass14_0_TypeDefinitionIndex = 81552;

	class PEEDFBLADEA___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onFinished; // 0x10
		::PEEDFBLADEA* __4__this; // 0x18
		::System::Int32 loadVersion; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __PreloadExitEffect_b__0(::AIBOPLOBAFN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS14_0___PRELOADEXITEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};

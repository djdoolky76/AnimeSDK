#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMHNFBHKCGE_PJGGOBPOHCP;
namespace System { class String; }

#define PMHNFBHKCGE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC31E4F0)
#define PMHNFBHKCGE___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET UNITYSDK_OFFSET(0xC31F0B0)

inline static constexpr unsigned int PMHNFBHKCGE___c__DisplayClass1_0_TypeDefinitionIndex = 56534;

	class PMHNFBHKCGE___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* aliasConfigPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHNFBHKCGE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddDynamicTargetAliasList_b__0(::PMHNFBHKCGE_PJGGOBPOHCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMHNFBHKCGE_PJGGOBPOHCP*))((::PBYTE)hIl2Cpp + PMHNFBHKCGE___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET))(this, a1);
		}

	};

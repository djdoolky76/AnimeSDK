#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOMDAAPCHD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMOJAEDFBID___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0x10C3B510)
#define DMOJAEDFBID___C__DISPLAYCLASS68_0___SETUPLINKEDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x10C3B520)

inline static constexpr unsigned int DMOJAEDFBID___c__DisplayClass68_0_TypeDefinitionIndex = 73298;

	class DMOJAEDFBID___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* iconPaths; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetupLinkedItem_b__0(::JBOMDAAPCHD* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBOMDAAPCHD*, ::System::Int32))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS68_0___SETUPLINKEDITEM_B__0_OFFSET))(this, a1, a2);
		}

	};

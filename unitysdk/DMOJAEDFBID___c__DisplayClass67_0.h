#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOMDAAPCHD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMOJAEDFBID___C__DISPLAYCLASS67_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC5C20)
#define DMOJAEDFBID___C__DISPLAYCLASS67_0___SETUPLINKEDITEM_B__0_OFFSET UNITYSDK_OFFSET(0xFEC75C0)

inline static constexpr unsigned int DMOJAEDFBID___c__DisplayClass67_0_TypeDefinitionIndex = 71320;

	class DMOJAEDFBID___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* iconPaths; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS67_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetupLinkedItem_b__0(::JBOMDAAPCHD* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBOMDAAPCHD*, ::System::Int32))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS67_0___SETUPLINKEDITEM_B__0_OFFSET))(this, a1, a2);
		}

	};

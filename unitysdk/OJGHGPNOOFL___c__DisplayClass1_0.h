#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJGHGPNOOFL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAF880)
#define OJGHGPNOOFL___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET UNITYSDK_OFFSET(0xBEAFDA0)

inline static constexpr unsigned int OJGHGPNOOFL___c__DisplayClass1_0_TypeDefinitionIndex = 71236;

	class OJGHGPNOOFL___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* effectPaths; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGHGPNOOFL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshEffects_b__1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OJGHGPNOOFL___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET))(this, a1);
		}

	};

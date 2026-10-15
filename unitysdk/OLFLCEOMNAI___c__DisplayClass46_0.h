#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class HFCOGLIEHFB;
class IDHNPGBOIKD;
namespace System { class String; }

#define OLFLCEOMNAI___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF07EA0)
#define OLFLCEOMNAI___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xBF08390)
#define OLFLCEOMNAI___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET UNITYSDK_OFFSET(0xBF083E0)

inline static constexpr unsigned int OLFLCEOMNAI___c__DisplayClass46_0_TypeDefinitionIndex = 82264;

	class OLFLCEOMNAI___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInstance_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HFCOGLIEHFB*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HFCOGLIEHFB*>))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetInstance_b__1(::IDHNPGBOIKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDHNPGBOIKD*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET))(this, a1);
		}

	};

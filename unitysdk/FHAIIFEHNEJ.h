#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FHAIIFEHNEJ_COBDNLCNDED_OFFSET UNITYSDK_OFFSET(0x15770DC0)
#define FHAIIFEHNEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15770D70)
#define FHAIIFEHNEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15770D80)
#define FHAIIFEHNEJ_KAOPDJDKIMF_OFFSET UNITYSDK_OFFSET(0x15770EA0)

	class FHAIIFEHNEJ : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FHAIIFEHNEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAIIFEHNEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void COBDNLCNDED(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FHAIIFEHNEJ_COBDNLCNDED_OFFSET))(this, a1, a2);
		}

		::System::Void KAOPDJDKIMF(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FHAIIFEHNEJ_KAOPDJDKIMF_OFFSET))(this, a1, a2);
		}

	};

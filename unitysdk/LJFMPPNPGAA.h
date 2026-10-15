#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACPNMANEGEH;
class CJPDCBEEOKA;
class IJCMAKLBINJ;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define LJFMPPNPGAA_ABFDIFLKGDF_OFFSET UNITYSDK_OFFSET(0xB710D70)
#define LJFMPPNPGAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB710D60)

inline static constexpr unsigned int LJFMPPNPGAA_TypeDefinitionIndex = 73153;

	class LJFMPPNPGAA : public ::System::Object
	{
	public:
		::ACPNMANEGEH* GELGHEBPAFE; // 0x10
		::System::Reflection::MethodInfo* KFGCBHOEIPE; // 0x18
		::IJCMAKLBINJ* FNDHDEOILCK; // 0x20
		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::ACPNMANEGEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::ACPNMANEGEH*))((::PBYTE)hIl2Cpp + LJFMPPNPGAA_CTOR_OFFSET))(this, a1, a2);
		}

		::CJPDCBEEOKA* ABFDIFLKGDF(::System::Object* a1)
		{
			return ((::CJPDCBEEOKA*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJFMPPNPGAA_ABFDIFLKGDF_OFFSET))(this, a1);
		}

	};

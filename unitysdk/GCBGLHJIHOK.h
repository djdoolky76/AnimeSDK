#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }

#define GCBGLHJIHOK_CTOR_OFFSET UNITYSDK_OFFSET(0x159550F0)
#define GCBGLHJIHOK_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x15954EA0)
#define GCBGLHJIHOK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15954E30)

inline static constexpr unsigned int GCBGLHJIHOK_TypeDefinitionIndex = 73355;

	class GCBGLHJIHOK : public ::System::Object
	{
	public:
		// static const ::System::String* HCOFFMKGIIP; // 0x0
		// static const ::System::String* JOPKGKBKBHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGLHJIHOK_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGLHJIHOK_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + GCBGLHJIHOK_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};

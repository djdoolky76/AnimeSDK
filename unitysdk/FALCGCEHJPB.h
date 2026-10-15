#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }

#define FALCGCEHJPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15683310)
#define FALCGCEHJPB_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x15683040)
#define FALCGCEHJPB_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15682FD0)

	class FALCGCEHJPB : public ::System::Object
	{
	public:
		// static const ::System::String* PLHDCPNGMKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCGCEHJPB_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCGCEHJPB_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + FALCGCEHJPB_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};

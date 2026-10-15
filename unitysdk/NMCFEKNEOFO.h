#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }

#define NMCFEKNEOFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7AD90)
#define NMCFEKNEOFO_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xBC7AAB0)
#define NMCFEKNEOFO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBC7AA60)

inline static constexpr unsigned int NMCFEKNEOFO_TypeDefinitionIndex = 73361;

	class NMCFEKNEOFO : public ::System::Object
	{
	public:
		// static const ::System::String* BGFCEOMDJMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCFEKNEOFO_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCFEKNEOFO_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + NMCFEKNEOFO_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};

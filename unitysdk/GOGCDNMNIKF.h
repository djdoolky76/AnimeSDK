#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }

#define GOGCDNMNIKF_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x15B2EF00)
#define GOGCDNMNIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2F140)

inline static constexpr unsigned int GOGCDNMNIKF_TypeDefinitionIndex = 67247;

	class GOGCDNMNIKF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGCDNMNIKF_CTOR_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + GOGCDNMNIKF_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class Type; }

#define PIKHOCDDCNC_CTOR_OFFSET UNITYSDK_OFFSET(0xC266100)
#define PIKHOCDDCNC_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC266110)

inline static constexpr unsigned int PIKHOCDDCNC_TypeDefinitionIndex = 73393;

	class PIKHOCDDCNC : public ::System::Object
	{
	public:
		::Il2CppArray<::DMGLFMNEJGL*>* OGHCLELFCDB; // 0x10
		::System::Void _ctor(::Il2CppArray<::DMGLFMNEJGL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DMGLFMNEJGL*>*))((::PBYTE)hIl2Cpp + PIKHOCDDCNC_CTOR_OFFSET))(this, a1);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIKHOCDDCNC_GETCONTEXT_OFFSET))(this, a1);
		}

	};

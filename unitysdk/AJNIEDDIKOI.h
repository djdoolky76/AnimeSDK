#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLGLJCHNDI;
namespace System { class Object; }

#define AJNIEDDIKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8060)
#define AJNIEDDIKOI_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x12CC8040)
#define AJNIEDDIKOI_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12CC8050)

inline static constexpr unsigned int AJNIEDDIKOI_TypeDefinitionIndex = 78036;

	class AJNIEDDIKOI : public ::System::Object
	{
	public:
		::OLLGLJCHNDI* _Handler_k__BackingField; // 0x10
		::System::Object* _Owner_k__BackingField; // 0x18
		::System::Void _ctor(::OLLGLJCHNDI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OLLGLJCHNDI*, ::System::Object*))((::PBYTE)hIl2Cpp + AJNIEDDIKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::OLLGLJCHNDI* get_Handler()
		{
			return ((::OLLGLJCHNDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNIEDDIKOI_GET_HANDLER_OFFSET))(this);
		}

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNIEDDIKOI_GET_OWNER_OFFSET))(this);
		}

	};

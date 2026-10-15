#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define CNCCDAOLIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F460)
#define CNCCDAOLIHJ_GET_CONSTKEYPREFIX_OFFSET UNITYSDK_OFFSET(0x1CC8F4B0)
#define CNCCDAOLIHJ_GET_FORCEREFLECTIONMAPPER_OFFSET UNITYSDK_OFFSET(0x1CC8F4C0)

inline static constexpr unsigned int CNCCDAOLIHJ_TypeDefinitionIndex = 43870;

	class CNCCDAOLIHJ : public ::System::Attribute
	{
	public:
		::System::String* _ConstKeyPrefix_k__BackingField; // 0x10
		::System::Boolean _ForceReflectionMapper_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNCCDAOLIHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_ConstKeyPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCCDAOLIHJ_GET_CONSTKEYPREFIX_OFFSET))(this);
		}

		::System::Boolean get_ForceReflectionMapper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCCDAOLIHJ_GET_FORCEREFLECTIONMAPPER_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAHKEMMHANM.h"
namespace System { class String; }

#define NICDGKAKNJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDE360)
#define NICDGKAKNJJ_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBBDE0F0)
#define NICDGKAKNJJ_IKDDBODBGGN_OFFSET UNITYSDK_OFFSET(0xBBDE160)

inline static constexpr unsigned int NICDGKAKNJJ_TypeDefinitionIndex = 59494;

	class NICDGKAKNJJ : public ::OAHKEMMHANM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICDGKAKNJJ_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICDGKAKNJJ_GETTYPENAME_OFFSET))(this);
		}

		::System::Boolean IKDDBODBGGN(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NICDGKAKNJJ_IKDDBODBGGN_OFFSET))(this, a1, a2);
		}

	};

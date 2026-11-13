#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }

#define NEJDNGDGLAK_CTOR_OFFSET UNITYSDK_OFFSET(0x16FD8A00)
#define NEJDNGDGLAK_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0x16FD88A0)

inline static constexpr unsigned int NEJDNGDGLAK_TypeDefinitionIndex = 78682;

	class NEJDNGDGLAK : public ::ODLJOLJDLNI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJDNGDGLAK_CTOR_OFFSET))(this);
		}

		::System::String* HKILPOPCDPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJDNGDGLAK_HKILPOPCDPJ_OFFSET))(this, a1, a2);
		}

	};

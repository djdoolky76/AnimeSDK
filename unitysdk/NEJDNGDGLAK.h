#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }

#define NEJDNGDGLAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB59120)
#define NEJDNGDGLAK_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0xBB58FC0)

inline static constexpr unsigned int NEJDNGDGLAK_TypeDefinitionIndex = 76351;

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

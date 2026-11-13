#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }

#define HALDMBFAOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x17DE7E00)
#define HALDMBFAOFN_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0x17DE7D60)

inline static constexpr unsigned int HALDMBFAOFN_TypeDefinitionIndex = 78680;

	class HALDMBFAOFN : public ::ODLJOLJDLNI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDMBFAOFN_CTOR_OFFSET))(this);
		}

		::System::String* HKILPOPCDPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HALDMBFAOFN_HKILPOPCDPJ_OFFSET))(this, a1, a2);
		}

	};

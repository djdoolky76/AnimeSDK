#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }

#define BKLEDBBFIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5AD90)
#define BKLEDBBFIOI_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0xBA5AC30)

inline static constexpr unsigned int BKLEDBBFIOI_TypeDefinitionIndex = 76353;

	class BKLEDBBFIOI : public ::ODLJOLJDLNI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLEDBBFIOI_CTOR_OFFSET))(this);
		}

		::System::String* HKILPOPCDPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKLEDBBFIOI_HKILPOPCDPJ_OFFSET))(this, a1, a2);
		}

	};

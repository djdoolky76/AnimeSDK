#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"
namespace System { class String; }

#define KNBCAIMABMM_ABPJAACLNPL_OFFSET UNITYSDK_OFFSET(0xBDC52A0)
#define KNBCAIMABMM_AEDEKDJNLLL_OFFSET UNITYSDK_OFFSET(0xBDC51F0)
#define KNBCAIMABMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC5370)
#define KNBCAIMABMM_PKCMEGLLGKK_OFFSET UNITYSDK_OFFSET(0xBDC5160)

inline static constexpr unsigned int KNBCAIMABMM_TypeDefinitionIndex = 77166;

	class KNBCAIMABMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBCAIMABMM_CTOR_OFFSET))(this);
		}

		::System::Void PKCMEGLLGKK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBCAIMABMM_PKCMEGLLGKK_OFFSET))(this, a1, a2);
		}

		::System::Void AEDEKDJNLLL(::System::String* a1, ::System::String* a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + KNBCAIMABMM_AEDEKDJNLLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABPJAACLNPL(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Guid a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + KNBCAIMABMM_ABPJAACLNPL_OFFSET))(this, a1, a2, a3, a4);
		}

	};

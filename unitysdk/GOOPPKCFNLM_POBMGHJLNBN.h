#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOPPKCFNLM_POBMGHJLNBN_ACDDHAFNNMF_OFFSET UNITYSDK_OFFSET(0x1C61DCC0)
#define GOOPPKCFNLM_POBMGHJLNBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61B0A0)
#define GOOPPKCFNLM_POBMGHJLNBN_FGBIFEGJPOP_OFFSET UNITYSDK_OFFSET(0x1C61DBC0)

inline static constexpr unsigned int GOOPPKCFNLM_POBMGHJLNBN_TypeDefinitionIndex = 37332;

	class GOOPPKCFNLM_POBMGHJLNBN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GKJIBFINFNL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN_CTOR_OFFSET))(this);
		}

		::System::UInt32 FGBIFEGJPOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN_FGBIFEGJPOP_OFFSET))(this);
		}

		::System::String* ACDDHAFNNMF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN_ACDDHAFNNMF_OFFSET))(this);
		}

	};

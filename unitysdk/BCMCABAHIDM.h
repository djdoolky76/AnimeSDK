#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCMCABAHIDM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D7F330)
#define BCMCABAHIDM_DEBNDBPNNEC_OFFSET UNITYSDK_OFFSET(0x19D7F090)
#define BCMCABAHIDM_FIHHGHOOMHF_OFFSET UNITYSDK_OFFSET(0x19D7F2A0)
#define BCMCABAHIDM_HKCJPOIFBPO_OFFSET UNITYSDK_OFFSET(0x19D7F1F0)
#define BCMCABAHIDM_KAGGMAIBEIF_OFFSET UNITYSDK_OFFSET(0x19D7F160)
#define BCMCABAHIDM_KJABBNPOHCF_OFFSET UNITYSDK_OFFSET(0x19D7F0D0)

inline static constexpr unsigned int BCMCABAHIDM_TypeDefinitionIndex = 73147;

	class BCMCABAHIDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ACOEEIKOMGB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMCABAHIDM_CTOR_OFFSET))(this);
		}

		::System::Void DEBNDBPNNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMCABAHIDM_DEBNDBPNNEC_OFFSET))(this);
		}

		::System::String* KJABBNPOHCF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMCABAHIDM_KJABBNPOHCF_OFFSET))(this);
		}

		::System::Void KAGGMAIBEIF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCMCABAHIDM_KAGGMAIBEIF_OFFSET))(this, a1);
		}

		::System::Void FIHHGHOOMHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCMCABAHIDM_FIHHGHOOMHF_OFFSET))(this, a1);
		}

		::System::Void HKCJPOIFBPO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BCMCABAHIDM_HKCJPOIFBPO_OFFSET))(this, a1, a2);
		}

	};

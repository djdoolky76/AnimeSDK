#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GAHPNAEGACM;
class NFGNOOMMMEK;
class PMMMEFBPCEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJGHGPNOOFL_CTOR_OFFSET UNITYSDK_OFFSET(0x194B48F0)
#define OJGHGPNOOFL_GGEDGBNHGAC_OFFSET UNITYSDK_OFFSET(0x194B32A0)
#define OJGHGPNOOFL_ONCNALEHHKK_OFFSET UNITYSDK_OFFSET(0x194B44E0)
#define OJGHGPNOOFL_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x194B46F0)
#define OJGHGPNOOFL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x194B3250)

inline static constexpr unsigned int OJGHGPNOOFL_TypeDefinitionIndex = 73213;

	class OJGHGPNOOFL : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PMMMEFBPCEK*>* DAIGNINLNKF; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGHGPNOOFL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OJGHGPNOOFL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void GGEDGBNHGAC(::NFGNOOMMMEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFGNOOMMMEK*))((::PBYTE)hIl2Cpp + OJGHGPNOOFL_GGEDGBNHGAC_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + OJGHGPNOOFL_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void ONCNALEHHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGHGPNOOFL_ONCNALEHHKK_OFFSET))(this);
		}

	};

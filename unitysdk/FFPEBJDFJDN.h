#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFPEBJDFJDN_BIDDPPEHBEC_OFFSET UNITYSDK_OFFSET(0x1574DD20)
#define FFPEBJDFJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1574E350)
#define FFPEBJDFJDN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1574E140)
#define FFPEBJDFJDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1574E290)
#define FFPEBJDFJDN_IAJFFMLPBKH_OFFSET UNITYSDK_OFFSET(0x1574DE00)
#define FFPEBJDFJDN_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0x1574DF70)
#define FFPEBJDFJDN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1574E000)
#define FFPEBJDFJDN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1574DC90)
#define FFPEBJDFJDN_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0x1574DE90)

inline static constexpr unsigned int FFPEBJDFJDN_TypeDefinitionIndex = 68858;

	class FFPEBJDFJDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* COJNEEDEPHJ; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* EKDNIPLJDGA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BIDDPPEHBEC(::RPG::Client::BaseShaderPropertyTransition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_BIDDPPEHBEC_OFFSET))(this, a1);
		}

		::System::Void IAJFFMLPBKH(::RPG::Client::BaseShaderPropertyTransition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_IAJFFMLPBKH_OFFSET))(this, a1);
		}

		::System::Void PJPNKHDIPNG(::RPG::Client::BaseShaderPropertyTransition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_PJPNKHDIPNG_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE(::RPG::Client::BaseShaderPropertyTransition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_JCJACDENGNE_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPEBJDFJDN_DISPOSE_OFFSET))(this);
		}

	};

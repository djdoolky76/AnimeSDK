#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Toast { class ToastWindowQueueRequest; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }

#define KMDGNJENFAP_BHDKIOJEFKB_OFFSET UNITYSDK_OFFSET(0xB543A10)
#define KMDGNJENFAP_BJLICDCHIAD_1_OFFSET UNITYSDK_OFFSET(0xB5436D0)
#define KMDGNJENFAP_BJLICDCHIAD_OFFSET UNITYSDK_OFFSET(0xB543670)
#define KMDGNJENFAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB543B10)
#define KMDGNJENFAP_FGPOEAEMFJF_OFFSET UNITYSDK_OFFSET(0xB543830)
#define KMDGNJENFAP_JKJNGADONNJ_OFFSET UNITYSDK_OFFSET(0xB543AB0)
#define KMDGNJENFAP_OADNJCJGKHD_1_OFFSET UNITYSDK_OFFSET(0xB5437B0)
#define KMDGNJENFAP_OADNJCJGKHD_OFFSET UNITYSDK_OFFSET(0xB543750)

inline static constexpr unsigned int KMDGNJENFAP_TypeDefinitionIndex = 79007;

	class KMDGNJENFAP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGNJENFAP_CTOR_OFFSET))(this);
		}

		::System::Void BJLICDCHIAD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMDGNJENFAP_BJLICDCHIAD_OFFSET))(this, a1);
		}

		::System::Void BJLICDCHIAD_1(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KMDGNJENFAP_BJLICDCHIAD_1_OFFSET))(this, a1);
		}

		::System::Void OADNJCJGKHD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMDGNJENFAP_OADNJCJGKHD_OFFSET))(this, a1);
		}

		::System::Void OADNJCJGKHD_1(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KMDGNJENFAP_OADNJCJGKHD_1_OFFSET))(this, a1);
		}

		::System::Void FGPOEAEMFJF(::Sofa::BaseSofaWindow* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KMDGNJENFAP_FGPOEAEMFJF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKJNGADONNJ(::RPG::Client::Toast::ToastWindowQueueRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Toast::ToastWindowQueueRequest*))((::PBYTE)hIl2Cpp + KMDGNJENFAP_JKJNGADONNJ_OFFSET))(this, a1);
		}

		static ::System::String* BHDKIOJEFKB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KMDGNJENFAP_BHDKIOJEFKB_OFFSET))(a1);
		}

	};

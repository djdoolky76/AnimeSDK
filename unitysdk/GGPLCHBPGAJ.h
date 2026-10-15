#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPet; }

#define GGPLCHBPGAJ_AIEDNCJLBJM_OFFSET UNITYSDK_OFFSET(0x15A07910)
#define GGPLCHBPGAJ_DNOPCOBDNBO_OFFSET UNITYSDK_OFFSET(0x15A07BB0)
#define GGPLCHBPGAJ_IBIHKDJNLFD_OFFSET UNITYSDK_OFFSET(0x15A07670)
#define GGPLCHBPGAJ_IHLNIGFNCKH_OFFSET UNITYSDK_OFFSET(0x15A07C90)

inline static constexpr unsigned int GGPLCHBPGAJ_TypeDefinitionIndex = 75719;

	class GGPLCHBPGAJ : public ::System::Object
	{
	public:
		static ::System::Void IBIHKDJNLFD(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + GGPLCHBPGAJ_IBIHKDJNLFD_OFFSET))(a1);
		}

		static ::System::Void AIEDNCJLBJM(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + GGPLCHBPGAJ_AIEDNCJLBJM_OFFSET))(a1);
		}

		static ::System::Void DNOPCOBDNBO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGPLCHBPGAJ_DNOPCOBDNBO_OFFSET))();
		}

		static ::System::Void IHLNIGFNCKH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGPLCHBPGAJ_IHLNIGFNCKH_OFFSET))();
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JLMLHGKFFFD_ACCPOOHOHNC_OFFSET UNITYSDK_OFFSET(0x1C4A7A00)
#define JLMLHGKFFFD_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x1C4A7C60)
#define JLMLHGKFFFD_BNEOIKJBHGI_OFFSET UNITYSDK_OFFSET(0x1C4A78E0)
#define JLMLHGKFFFD_DKFBODDGHIJ_OFFSET UNITYSDK_OFFSET(0x1C4A7AF0)
#define JLMLHGKFFFD_FHFNCAKDCEA_OFFSET UNITYSDK_OFFSET(0x1C4A7C20)
#define JLMLHGKFFFD_GAODDEEKEOE_OFFSET UNITYSDK_OFFSET(0x1C4A7B40)
#define JLMLHGKFFFD_GLJOCJALMLG_OFFSET UNITYSDK_OFFSET(0x1C4A79C0)
#define JLMLHGKFFFD_IOBEMMOLGCO_OFFSET UNITYSDK_OFFSET(0x1C4A7BE0)
#define JLMLHGKFFFD_JEEHHLHENPE_OFFSET UNITYSDK_OFFSET(0x1C4A7A50)
#define JLMLHGKFFFD_JJLJPAKCGLC_OFFSET UNITYSDK_OFFSET(0x1C4A7970)
#define JLMLHGKFFFD_MBILLJCKAEI_OFFSET UNITYSDK_OFFSET(0x1C4A7B90)
#define JLMLHGKFFFD_MHAJFBCKIDE_OFFSET UNITYSDK_OFFSET(0x1C4A7AA0)
#define JLMLHGKFFFD_OBJIGAACMKF_OFFSET UNITYSDK_OFFSET(0x1C4A7920)

inline static constexpr unsigned int JLMLHGKFFFD_TypeDefinitionIndex = 41487;

	class JLMLHGKFFFD : public ::System::Object
	{
	public:
		static ::System::Void BNEOIKJBHGI(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Void(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_BNEOIKJBHGI_OFFSET))(a1);
		}

		static ::System::Boolean OBJIGAACMKF(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_OBJIGAACMKF_OFFSET))(a1);
		}

		static ::System::Void JJLJPAKCGLC(::RPG::Client::BlockFlag a1, ::RPG::Client::BlockFlag a2)
		{
			return ((::System::Void(*)(::RPG::Client::BlockFlag, ::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_JJLJPAKCGLC_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BlockFlag GLJOCJALMLG(::RPG::Client::BlockFlag a1)
		{
			return ((::RPG::Client::BlockFlag(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_GLJOCJALMLG_OFFSET))(a1);
		}

		static ::System::UInt32 ACCPOOHOHNC(::RPG::Client::BlockFlag a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_ACCPOOHOHNC_OFFSET))(a1);
		}

		static ::System::Boolean JEEHHLHENPE(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_JEEHHLHENPE_OFFSET))(a1);
		}

		static ::System::Boolean MHAJFBCKIDE(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_MHAJFBCKIDE_OFFSET))(a1);
		}

		static ::System::Boolean DKFBODDGHIJ(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_DKFBODDGHIJ_OFFSET))(a1);
		}

		static ::System::Boolean GAODDEEKEOE(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_GAODDEEKEOE_OFFSET))(a1);
		}

		static ::System::Boolean MBILLJCKAEI(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_MBILLJCKAEI_OFFSET))(a1);
		}

		static ::System::Void IOBEMMOLGCO(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Void(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_IOBEMMOLGCO_OFFSET))(a1);
		}

		static ::System::Void FHFNCAKDCEA(::RPG::Client::BlockFlag a1)
		{
			return ((::System::Void(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_FHFNCAKDCEA_OFFSET))(a1);
		}

		static ::System::String* BDJPPIMOJBH(::RPG::Client::BlockFlag a1)
		{
			return ((::System::String*(*)(::RPG::Client::BlockFlag))((::PBYTE)hIl2Cpp + JLMLHGKFFFD_BDJPPIMOJBH_OFFSET))(a1);
		}

	};

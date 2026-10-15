#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MECBDPJKMBA_BIFMNKELGCP_OFFSET UNITYSDK_OFFSET(0xB8B40F0)
#define MECBDPJKMBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B3FA0)
#define MECBDPJKMBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8B46D0)
#define MECBDPJKMBA_EHPBKCNOMJM_OFFSET UNITYSDK_OFFSET(0xB8B3FE0)
#define MECBDPJKMBA_KHKICCBPMPF_OFFSET UNITYSDK_OFFSET(0xB8B4180)
#define MECBDPJKMBA_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xB8B4550)
#define MECBDPJKMBA_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB8B43F0)

inline static constexpr unsigned int MECBDPJKMBA_TypeDefinitionIndex = 60948;

	class MECBDPJKMBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* FKJEEFFNHEJ; // 0x10
		::RPG::Client::SpecialVisionSystem* CGKCJPPHKPK; // 0x18
		::System::Void _ctor(::RPG::Client::SpecialVisionSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionSystem*))((::PBYTE)hIl2Cpp + MECBDPJKMBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void EHPBKCNOMJM(::RPG::Client::SmellPathGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + MECBDPJKMBA_EHPBKCNOMJM_OFFSET))(this, a1);
		}

		::System::Void BIFMNKELGCP(::RPG::Client::SmellPathGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + MECBDPJKMBA_BIFMNKELGCP_OFFSET))(this, a1);
		}

		::System::Void KHKICCBPMPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBDPJKMBA_KHKICCBPMPF_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MECBDPJKMBA_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBDPJKMBA_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBDPJKMBA_DISPOSE_OFFSET))(this);
		}

	};

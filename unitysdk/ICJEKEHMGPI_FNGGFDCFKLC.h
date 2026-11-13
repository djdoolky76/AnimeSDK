#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIEEDGHNEP;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define ICJEKEHMGPI_FNGGFDCFKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x188CEB50)
#define ICJEKEHMGPI_FNGGFDCFKLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188CE4A0)
#define ICJEKEHMGPI_FNGGFDCFKLC_FNLJINEKAKJ_OFFSET UNITYSDK_OFFSET(0x188CE4F0)
#define ICJEKEHMGPI_FNGGFDCFKLC_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x188CEAD0)
#define ICJEKEHMGPI_FNGGFDCFKLC_KAMDFKNFHFB_OFFSET UNITYSDK_OFFSET(0x188CE500)
#define ICJEKEHMGPI_FNGGFDCFKLC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x188CE510)

inline static constexpr unsigned int ICJEKEHMGPI_FNGGFDCFKLC_TypeDefinitionIndex = 54474;

	class ICJEKEHMGPI_FNGGFDCFKLC : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::KDIEEDGHNEP* FLMODBLFAGD; // 0x18
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x20
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x28
		::System::String* IJJJEKGCLBD; // 0x30
		::System::Boolean NGJHLIEKOKB; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single EMNHIJAIMBE; // 0x3C
		::System::Single IEHPFADHJFD; // 0x40
		::System::Single NPINECOCALC; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_DISPOSE_OFFSET))(this);
		}

		::KDIEEDGHNEP* FNLJINEKAKJ()
		{
			return ((::KDIEEDGHNEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_FNLJINEKAKJ_OFFSET))(this);
		}

		::System::Void KAMDFKNFHFB(::KDIEEDGHNEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDIEEDGHNEP*))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_KAMDFKNFHFB_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_FNGGFDCFKLC_JDPGFIBLFOP_OFFSET))(this);
		}

	};

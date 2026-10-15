#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIEEDGHNEP;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define ICJEKEHMGPI_FNGGFDCFKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4FFC0)
#define ICJEKEHMGPI_FNGGFDCFKLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4F910)
#define ICJEKEHMGPI_FNGGFDCFKLC_FNLJINEKAKJ_OFFSET UNITYSDK_OFFSET(0x15E4F960)
#define ICJEKEHMGPI_FNGGFDCFKLC_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x15E4FF40)
#define ICJEKEHMGPI_FNGGFDCFKLC_KAMDFKNFHFB_OFFSET UNITYSDK_OFFSET(0x15E4F970)
#define ICJEKEHMGPI_FNGGFDCFKLC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x15E4F980)

inline static constexpr unsigned int ICJEKEHMGPI_FNGGFDCFKLC_TypeDefinitionIndex = 53312;

	class ICJEKEHMGPI_FNGGFDCFKLC : public ::System::Object
	{
	public:
		::KDIEEDGHNEP* FLMODBLFAGD; // 0x10
		::System::Action* MGJLINFADJK; // 0x18
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x20
		::System::String* IJJJEKGCLBD; // 0x28
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x30
		::System::Single IEHPFADHJFD; // 0x38
		::System::Boolean NGJHLIEKOKB; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single NPINECOCALC; // 0x40
		::System::Single EMNHIJAIMBE; // 0x44
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

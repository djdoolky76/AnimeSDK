#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PerformanceManager; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGDCNMMBMKA_ACLPBDEOAIE_OFFSET UNITYSDK_OFFSET(0xE844860)
#define DGDCNMMBMKA_AILOBLEIIAG_OFFSET UNITYSDK_OFFSET(0xE844E30)
#define DGDCNMMBMKA_ALNMELICAJO_OFFSET UNITYSDK_OFFSET(0xE844CB0)
#define DGDCNMMBMKA_BNHIOLLCBOD_OFFSET UNITYSDK_OFFSET(0xE844BA0)
#define DGDCNMMBMKA_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xE844BF0)
#define DGDCNMMBMKA_CTOR_OFFSET UNITYSDK_OFFSET(0xE844470)
#define DGDCNMMBMKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE844520)
#define DGDCNMMBMKA_GJDHKJODPDK_OFFSET UNITYSDK_OFFSET(0xE844DB0)
#define DGDCNMMBMKA_IOFIEOPCOJP_OFFSET UNITYSDK_OFFSET(0xE844A10)
#define DGDCNMMBMKA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xE844FA0)
#define DGDCNMMBMKA_PFJMFECFPBN_OFFSET UNITYSDK_OFFSET(0xE8444C0)
#define DGDCNMMBMKA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE844570)
#define DGDCNMMBMKA_PNACMPEPHCI_OFFSET UNITYSDK_OFFSET(0xE844740)
#define DGDCNMMBMKA_TICK_OFFSET UNITYSDK_OFFSET(0xE8446D0)

	class DGDCNMMBMKA : public ::System::Object
	{
	public:
		::RPG::Client::PerformanceManager* JCLOFEOGKIL; // 0x10
		::System::Collections::Generic::List_1<::RPGTools::MonoTimelineEffect*>* APPIAANONPF; // 0x18
		::System::Single OKJPMCGIIFL; // 0x20
		::System::Boolean AHHJFBAHGHK; // 0x24
		::System::Boolean MCAPIAKDMAA; // 0x25
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean PFJMFECFPBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_PFJMFECFPBN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_TICK_OFFSET))(this, a1);
		}

		::System::Void PNACMPEPHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_PNACMPEPHCI_OFFSET))(this);
		}

		::System::Void ACLPBDEOAIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_ACLPBDEOAIE_OFFSET))(this, a1);
		}

		::System::Void IOFIEOPCOJP(::RPGTools::MonoTimelineEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_IOFIEOPCOJP_OFFSET))(this, a1);
		}

		::System::Void CPNEMOBKHEL(::RPGTools::MonoTimelineEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_CPNEMOBKHEL_OFFSET))(this, a1);
		}

		::RPGTools::MonoTimelineEffect* ALNMELICAJO(::System::String* a1)
		{
			return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_ALNMELICAJO_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void GJDHKJODPDK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_GJDHKJODPDK_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void AILOBLEIIAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_AILOBLEIIAG_OFFSET))(this);
		}

		::System::Single BNHIOLLCBOD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDCNMMBMKA_BNHIOLLCBOD_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"
namespace RPG::GameCore { class EntityScoreConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAOBNMGLDPB_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0xB2E56E0)
#define KAOBNMGLDPB_AGGKMDAHIEE_OFFSET UNITYSDK_OFFSET(0xB2E5810)
#define KAOBNMGLDPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E5B10)
#define KAOBNMGLDPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E5400)
#define KAOBNMGLDPB_INIT_OFFSET UNITYSDK_OFFSET(0xB2E5120)
#define KAOBNMGLDPB_JOPONPBMBFG_OFFSET UNITYSDK_OFFSET(0xB2E5170)
#define KAOBNMGLDPB_KJMONHLJOCI_OFFSET UNITYSDK_OFFSET(0xB2E58D0)
#define KAOBNMGLDPB_NILIEJCCHDN_OFFSET UNITYSDK_OFFSET(0xB2E5610)
#define KAOBNMGLDPB_NKEHJIIGDJI_OFFSET UNITYSDK_OFFSET(0xB2E54A0)
#define KAOBNMGLDPB_NNMMHHGOJEI_OFFSET UNITYSDK_OFFSET(0xB2E5510)
#define KAOBNMGLDPB_ODGPOOLNEGL_OFFSET UNITYSDK_OFFSET(0xB2E5500)
#define KAOBNMGLDPB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB2E5910)

inline static constexpr unsigned int KAOBNMGLDPB_TypeDefinitionIndex = 69167;

	class KAOBNMGLDPB : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PINCPCIHMKM; // 0x10
		::RPG::GameCore::EntityScoreConfig* EJJEEJENLDA; // 0x18
		::System::Single CDNIFHCGPCJ; // 0x20
		// static const ::System::String* JGBEMJAJDAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_DISPOSE_OFFSET))(this);
		}

		::System::Single NKEHJIIGDJI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_NKEHJIIGDJI_OFFSET))(this);
		}

		::System::Single ODGPOOLNEGL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_ODGPOOLNEGL_OFFSET))(this);
		}

		::System::Void NNMMHHGOJEI(::RPG::GameCore::EntityScoreType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityScoreType, ::System::UInt32))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_NNMMHHGOJEI_OFFSET))(this, a1, a2);
		}

		::System::Void AFIJBDMGDPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::System::Single AGGKMDAHIEE(::RPG::GameCore::EntityScoreType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_AGGKMDAHIEE_OFFSET))(this, a1);
		}

		::System::Boolean KJMONHLJOCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_KJMONHLJOCI_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JOPONPBMBFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_JOPONPBMBFG_OFFSET))(this);
		}

		::System::Single NILIEJCCHDN(::RPG::GameCore::EntityScoreType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + KAOBNMGLDPB_NILIEJCCHDN_OFFSET))(this, a1);
		}

	};

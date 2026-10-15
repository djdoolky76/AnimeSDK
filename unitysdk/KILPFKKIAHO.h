#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KILPFKKIAHO_CIPOKJEDLFM_OFFSET UNITYSDK_OFFSET(0xB42EC30)
#define KILPFKKIAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB42EFB0)
#define KILPFKKIAHO_GBCHMFCICNP_OFFSET UNITYSDK_OFFSET(0xB42ECF0)
#define KILPFKKIAHO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB42EBE0)

inline static constexpr unsigned int KILPFKKIAHO_TypeDefinitionIndex = 64572;

	class KILPFKKIAHO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>** StaticGet_DADPNEEFNHB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>**)UnitySDK::FromName("", "KILPFKKIAHO")->GetStaticField(0x500E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILPFKKIAHO_CTOR_OFFSET))(this);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILPFKKIAHO_PJPFIHFAHGO_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipConfigRow* CIPOKJEDLFM(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEquipConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KILPFKKIAHO_CIPOKJEDLFM_OFFSET))(a1);
		}

		static ::System::Void GBCHMFCICNP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILPFKKIAHO_GBCHMFCICNP_OFFSET))();
		}

	};

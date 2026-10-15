#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace System { class Nullable; }

#define NKPNJJMCJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC4D8C0)
#define NKPNJJMCJNB_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBC4D750)
#define NKPNJJMCJNB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC4CF90)
#define NKPNJJMCJNB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC4CE50)
#define NKPNJJMCJNB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBC4D270)
#define NKPNJJMCJNB_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xBC4D7E0)
#define NKPNJJMCJNB_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0xBC4D870)

inline static constexpr unsigned int NKPNJJMCJNB_TypeDefinitionIndex = 56985;

	class NKPNJJMCJNB : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::FreeStyleComponent* KADINPKIGIB; // 0x28
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x30
		::System::Single HDKKECHDBCN; // 0x38
		::System::Boolean OAPHDBCJOPJ; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 EBJLPAFFKOM; // 0x40
		::System::Single HBDJCFFDGDD; // 0x44
		::System::Nullable* HGCCAGKEONO; // 0x48
		::System::Byte _padding1[0x8];
		::System::Nullable* HACHBGJADBI; // 0x58
		// static const ::System::Object FOJFHNENCHJ; // 0x0
		// static const ::System::Object DGBGMMKGMHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Nullable* a4, ::System::Nullable* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_MGJLINFADJK_OFFSET))(this);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_PODJJPBKLDC_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FreeStyleComponent; }

#define NKPNJJMCJNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA100)
#define NKPNJJMCJNB_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1A7C9F90)
#define NKPNJJMCJNB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A7C97C0)
#define NKPNJJMCJNB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A78AEE0)
#define NKPNJJMCJNB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1A7C9AB0)
#define NKPNJJMCJNB_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0x1A7CA020)
#define NKPNJJMCJNB_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0x1A7CA0B0)

inline static constexpr unsigned int NKPNJJMCJNB_TypeDefinitionIndex = 58211;

	class NKPNJJMCJNB : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x28
		::RPG::GameCore::FreeStyleComponent* KADINPKIGIB; // 0x30
		::System::Nullable_1<::UnityEngine::Quaternion> HACHBGJADBI; // 0x38
		::System::Byte _padding0[0xC];
		::System::Single HBDJCFFDGDD; // 0x4C
		::System::UInt32 EBJLPAFFKOM; // 0x50
		::System::Boolean OAPHDBCJOPJ; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single HDKKECHDBCN; // 0x58
		::System::Nullable_1<::UnityEngine::Vector3> HGCCAGKEONO; // 0x5C
		// static const ::System::Object FOJFHNENCHJ; // 0x0
		// static const ::System::Object DGBGMMKGMHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Nullable_1<::UnityEngine::Quaternion> a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NKPNJJMCJNB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
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

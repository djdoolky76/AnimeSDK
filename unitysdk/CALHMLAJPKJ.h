#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DisableNpcSyncMovementReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CALHMLAJPKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC488AA0)
#define CALHMLAJPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC488A90)
#define CALHMLAJPKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC488730)
#define CALHMLAJPKJ_EMGMJJGLNEH_OFFSET UNITYSDK_OFFSET(0xC4887C0)
#define CALHMLAJPKJ_FJFMLMCMAEL_OFFSET UNITYSDK_OFFSET(0xC488770)
#define CALHMLAJPKJ_IJDALCCMPFK_OFFSET UNITYSDK_OFFSET(0xC4888C0)
#define CALHMLAJPKJ_JDGPBEJKFLD_OFFSET UNITYSDK_OFFSET(0xC488830)
#define CALHMLAJPKJ_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC4886B0)

inline static constexpr unsigned int CALHMLAJPKJ_TypeDefinitionIndex = 73307;

	class CALHMLAJPKJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Int32 GIGGAMCGNHL; // 0x18
		::System::Boolean BFCNAEAPOEJ; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single OMPINHODDNK; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>** StaticGet_ADFEOKGIOKB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>**)UnitySDK::FromName("", "CALHMLAJPKJ")->GetStaticField(0x10820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CALHMLAJPKJ_CCTOR_OFFSET))();
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FJFMLMCMAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_FJFMLMCMAEL_OFFSET))(this);
		}

		::System::Void EMGMJJGLNEH(::System::Boolean a1, ::RPG::Client::DisableNpcSyncMovementReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::DisableNpcSyncMovementReason))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_EMGMJJGLNEH_OFFSET))(this, a1, a2);
		}

		::System::Boolean JDGPBEJKFLD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_JDGPBEJKFLD_OFFSET))(this, a1);
		}

		::System::Single IJDALCCMPFK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CALHMLAJPKJ_IJDALCCMPFK_OFFSET))(this);
		}

	};

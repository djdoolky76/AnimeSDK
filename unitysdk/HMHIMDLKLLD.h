#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMHIMDLKLLD_ETurnDirection.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define HMHIMDLKLLD_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x15D827B0)
#define HMHIMDLKLLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D82980)
#define HMHIMDLKLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D82400)
#define HMHIMDLKLLD_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15D82800)
#define HMHIMDLKLLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D82410)
#define HMHIMDLKLLD_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x15D82460)
#define HMHIMDLKLLD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15D824E0)
#define HMHIMDLKLLD_OGBGIMFNGFJ_OFFSET UNITYSDK_OFFSET(0x15D828E0)
#define HMHIMDLKLLD_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x15D825E0)
#define HMHIMDLKLLD_PAPFOAJAHMD_OFFSET UNITYSDK_OFFSET(0x15D82860)
#define HMHIMDLKLLD_TICK_OFFSET UNITYSDK_OFFSET(0x15D82740)

	class HMHIMDLKLLD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x20
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x28
		::System::Single JENOIFAFLLN; // 0x38
		::HMHIMDLKLLD_ETurnDirection BGNACBGBMHG; // 0x3C
		::System::Single ALBEHEENGLC; // 0x40
		static ::System::Int32* StaticGet_EGMAKJECKHA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HMHIMDLKLLD")->GetStaticField(0xA1A0);
		}

		static ::System::Int32* StaticGet_IHJJMJJINCC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HMHIMDLKLLD")->GetStaticField(0xA1A4);
		}

		// static const ::System::Object EBFKPGGLALN; // 0x0
		// static const ::System::String* NGLMDDFKGEA; // 0x0
		// static const ::System::String* BNLLFHNNMLL; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMHIMDLKLLD_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::String* PAPFOAJAHMD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_PAPFOAJAHMD_OFFSET))(this);
		}

		::System::Int32 OGBGIMFNGFJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIMDLKLLD_OGBGIMFNGFJ_OFFSET))(this);
		}

	};

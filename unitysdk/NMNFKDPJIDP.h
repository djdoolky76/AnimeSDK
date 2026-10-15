#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"
class EKFMIDBJDIA;
class HNPHFICLBIB;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMNFKDPJIDP_BCMGIJLPCPE_OFFSET UNITYSDK_OFFSET(0xBC90610)
#define NMNFKDPJIDP_BFFADNDNIGB_OFFSET UNITYSDK_OFFSET(0xBC8FE60)
#define NMNFKDPJIDP_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBC906C0)
#define NMNFKDPJIDP_CCKCJAALPPH_OFFSET UNITYSDK_OFFSET(0xBC905A0)
#define NMNFKDPJIDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC906E0)
#define NMNFKDPJIDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8FCE0)
#define NMNFKDPJIDP_GFAFHPOJLAM_OFFSET UNITYSDK_OFFSET(0xBC90260)
#define NMNFKDPJIDP_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0xBC90050)
#define NMNFKDPJIDP_ILLNHBFACKF_OFFSET UNITYSDK_OFFSET(0xBC902B0)
#define NMNFKDPJIDP_KBHIONPNEKN_OFFSET UNITYSDK_OFFSET(0xBC906D0)
#define NMNFKDPJIDP_KPLOGBJNFPH_OFFSET UNITYSDK_OFFSET(0xBC903E0)
#define NMNFKDPJIDP_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBC8FC10)
#define NMNFKDPJIDP_TICK_OFFSET UNITYSDK_OFFSET(0xBC8FE00)

inline static constexpr unsigned int NMNFKDPJIDP_TypeDefinitionIndex = 57078;

	class NMNFKDPJIDP : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HNPHFICLBIB*>* EEMLILALOJM; // 0x18
		::RPG::GameCore::GameEntity* MIAOGBMCPEK; // 0x20
		::RPG::GameCore::GroupStateType DLNIGFGLPLJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_TICK_OFFSET))(this, a1);
		}

		::System::Void ICJGMELMLGO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_ICJGMELMLGO_OFFSET))(this, a1);
		}

		::System::Void ILLNHBFACKF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_ILLNHBFACKF_OFFSET))(this, a1);
		}

		::System::Void GFAFHPOJLAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_GFAFHPOJLAM_OFFSET))(this);
		}

		::System::Void BFFADNDNIGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_BFFADNDNIGB_OFFSET))(this);
		}

		::System::Void CCKCJAALPPH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_CCKCJAALPPH_OFFSET))(this, a1);
		}

		::System::Void KPLOGBJNFPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_KPLOGBJNFPH_OFFSET))(this);
		}

		::System::Void BCMGIJLPCPE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_BCMGIJLPCPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GroupStateType BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::GroupStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_BGDKFHEBDFJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KBHIONPNEKN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNFKDPJIDP_KBHIONPNEKN_OFFSET))(this);
		}

	};

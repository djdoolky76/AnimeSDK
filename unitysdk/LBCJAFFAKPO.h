#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
class BNGHOKMIDGD;
class GMMEANMBFIK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }

#define LBCJAFFAKPO_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x1B291580)
#define LBCJAFFAKPO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2910D0)
#define LBCJAFFAKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2917A0)
#define LBCJAFFAKPO_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1B291710)
#define LBCJAFFAKPO_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x1B291190)
#define LBCJAFFAKPO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B291760)
#define LBCJAFFAKPO_LBLDHMDICMP_OFFSET UNITYSDK_OFFSET(0x1B290F00)
#define LBCJAFFAKPO_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x1B291670)
#define LBCJAFFAKPO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x1B2915D0)

inline static constexpr unsigned int LBCJAFFAKPO_TypeDefinitionIndex = 62178;

	class LBCJAFFAKPO : public ::System::Object
	{
	public:
		::GMMEANMBFIK* ABLGIJMIFBI; // 0x10
		::BNGHOKMIDGD* EPMPEFJBAPM; // 0x18
		::System::Single CNDJDPHMHNK; // 0x20
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x24
		::System::Single KBDPMBDJIOF; // 0x28
		::System::Boolean GNFOLMAJLBH; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_CTOR_OFFSET))(this);
		}

		::System::Void LBLDHMDICMP(::RPG::GameCore::GameEntity* a1, ::BNGHOKMIDGD* a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::VCameraShakeV2* a5, ::RPG::GameCore::VCameraOverrideShakeV2* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BNGHOKMIDGD*, ::System::Single, ::System::Single, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_LBLDHMDICMP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCJAFFAKPO_JLANKNHFKCN_OFFSET))(this);
		}

	};

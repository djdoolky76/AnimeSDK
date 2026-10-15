#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class ColliderConfig; }

#define HHPNOMCGLEK_BEBLJJOBMOM_OFFSET UNITYSDK_OFFSET(0x3C39AD0)
#define HHPNOMCGLEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define HHPNOMCGLEK_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x3C39B40)
#define HHPNOMCGLEK_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define HHPNOMCGLEK_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define HHPNOMCGLEK_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define HHPNOMCGLEK_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C39B90)
#define HHPNOMCGLEK_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3C39B20)
#define HHPNOMCGLEK_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define HHPNOMCGLEK_JENGLHEBNHB_OFFSET UNITYSDK_OFFSET(0x3C39A60)
#define HHPNOMCGLEK_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x3C39AB0)
#define HHPNOMCGLEK_PIKIJBGILDD_OFFSET UNITYSDK_OFFSET(0x3C39A30)

	struct alignas(8) HHPNOMCGLEK
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AxisType PIKIJBGILDD()
		{
			return ((::RPG::GameCore::AxisType(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_PIKIJBGILDD_OFFSET))(this);
		}

		::System::Void JENGLHEBNHB(::RPG::GameCore::AxisType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AxisType))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_JENGLHEBNHB_OFFSET))(this, a1);
		}

		::RPG::MVector3 MOOENEIANFA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_MOOENEIANFA_OFFSET))(this);
		}

		::System::Void BEBLJJOBMOM(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_BEBLJJOBMOM_OFFSET))(this, a1);
		}

		::RPG::MVector3 IKOCHGBIGPJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_FKHABBFPGFA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ColliderConfig* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::ColliderConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNOMCGLEK_GFLKJLOFIPA_OFFSET))(this);
		}

	};

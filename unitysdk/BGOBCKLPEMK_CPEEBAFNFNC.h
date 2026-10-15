#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TransformComponent; }

#define BGOBCKLPEMK_CPEEBAFNFNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB465910)
#define BGOBCKLPEMK_CPEEBAFNFNC_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB4650A0)
#define BGOBCKLPEMK_CPEEBAFNFNC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB465410)
#define BGOBCKLPEMK_CPEEBAFNFNC_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xB4653A0)
#define BGOBCKLPEMK_CPEEBAFNFNC_LKHEJLJAHBI_OFFSET UNITYSDK_OFFSET(0xB4658B0)

inline static constexpr unsigned int BGOBCKLPEMK_CPEEBAFNFNC_TypeDefinitionIndex = 56958;

	class BGOBCKLPEMK_CPEEBAFNFNC : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatCurve* LMHCCNBFNCD; // 0x10
		::RPG::GameCore::FloatCurve* ECILNMHCMMM; // 0x18
		::RPG::MVector3 JHNOOAKMEOI; // 0x20
		::System::Single LFAJGAMKMNN; // 0x2C
		::System::Single LJPDKMHJFMM; // 0x30
		::RPG::MVector3 PAINPEOBBHE; // 0x34
		::RPG::MVector3 PIOKEAJGMPB; // 0x40
		::System::Single IEHPFADHJFD; // 0x4C
		::RPG::MVector3 IAPGKPKKOOA; // 0x50
		::System::Boolean OOMAMFDJJPM; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Single IOFDOOCFJBE; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPEEBAFNFNC_CTOR_OFFSET))(this);
		}

		::System::Single LKHEJLJAHBI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPEEBAFNFNC_LKHEJLJAHBI_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPEEBAFNFNC_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPEEBAFNFNC_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPEEBAFNFNC_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

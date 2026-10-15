#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class KIEDNKBBOBP;
namespace RPG::GameCore { class GridFightOrbConfigRow; }
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define KIEDNKBBOBP_CGAGPKIMGCC_OFFSET UNITYSDK_OFFSET(0xB415DC0)
#define KIEDNKBBOBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB415CB0)
#define KIEDNKBBOBP_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xB415BD0)
#define KIEDNKBBOBP_GAMHCJHMGHM_OFFSET UNITYSDK_OFFSET(0xB415D50)
#define KIEDNKBBOBP_IHEFFDKFAOA_OFFSET UNITYSDK_OFFSET(0xB415E60)
#define KIEDNKBBOBP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB415E10)
#define KIEDNKBBOBP_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xB415D00)

inline static constexpr unsigned int KIEDNKBBOBP_TypeDefinitionIndex = 64437;

	class KIEDNKBBOBP : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbTypeRow* CHEHGJHAADO; // 0x10
		::RPG::GameCore::GridFightOrbConfigRow* IBPBJBOKKMF; // 0x18
		::System::Void _ctor(::RPG::GameCore::GridFightOrbConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_CTOR_OFFSET))(this, a1);
		}

		static ::KIEDNKBBOBP* FLFLCMEJEPM(::System::UInt32 a1)
		{
			return ((::KIEDNKBBOBP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_FLFLCMEJEPM_OFFSET))(a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_MJGKNFEILLI_OFFSET))(this);
		}

		::RPG::Client::TextID GAMHCJHMGHM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_GAMHCJHMGHM_OFFSET))(this);
		}

		::System::UInt32 CGAGPKIMGCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_CGAGPKIMGCC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightOrbType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::String* IHEFFDKFAOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEDNKBBOBP_IHEFFDKFAOA_OFFSET))(this);
		}

	};

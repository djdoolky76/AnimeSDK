#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
class LPNPMKNMMOK;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AELMAJAHPCP_AGGPHJMHMCL_OFFSET UNITYSDK_OFFSET(0xCF02800)
#define AELMAJAHPCP_CBCGPEDLGNB_OFFSET UNITYSDK_OFFSET(0xCF02880)
#define AELMAJAHPCP_CPKDJAPENGB_OFFSET UNITYSDK_OFFSET(0xCF02730)
#define AELMAJAHPCP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF026D0)
#define AELMAJAHPCP_HHFDAIJIIJN_OFFSET UNITYSDK_OFFSET(0xCF027A0)
#define AELMAJAHPCP_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xCF029E0)
#define AELMAJAHPCP_OEJMLOPMIBP_OFFSET UNITYSDK_OFFSET(0xCF02A30)
#define AELMAJAHPCP_PBFGIFDIAHM_OFFSET UNITYSDK_OFFSET(0xCF028F0)

inline static constexpr unsigned int AELMAJAHPCP_TypeDefinitionIndex = 56185;

	class AELMAJAHPCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::LPNPMKNMMOK*>* CEHJJCJJEIH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_CTOR_OFFSET))(this);
		}

		::LPNPMKNMMOK* CPKDJAPENGB()
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_CPKDJAPENGB_OFFSET))(this);
		}

		::LPNPMKNMMOK* HHFDAIJIIJN()
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_HHFDAIJIIJN_OFFSET))(this);
		}

		::LPNPMKNMMOK* AGGPHJMHMCL(::System::Int32 a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AELMAJAHPCP_AGGPHJMHMCL_OFFSET))(this, a1);
		}

		::System::Void CBCGPEDLGNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_CBCGPEDLGNB_OFFSET))(this);
		}

		::System::Int32 PBFGIFDIAHM(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + AELMAJAHPCP_PBFGIFDIAHM_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_HIDEJDELEEB_OFFSET))(this);
		}

		::LPNPMKNMMOK* OEJMLOPMIBP()
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP_OEJMLOPMIBP_OFFSET))(this);
		}

	};

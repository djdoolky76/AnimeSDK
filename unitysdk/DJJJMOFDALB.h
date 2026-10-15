#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJJJMOFDALB_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xF233D40)
#define DJJJMOFDALB_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xF2339D0)
#define DJJJMOFDALB_CTOR_OFFSET UNITYSDK_OFFSET(0xF233F80)
#define DJJJMOFDALB_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xF233C30)
#define DJJJMOFDALB_NNBHBAAPNEI_OFFSET UNITYSDK_OFFSET(0xF233A90)
#define DJJJMOFDALB_PJIEAONEBJP_OFFSET UNITYSDK_OFFSET(0xF233E90)
#define DJJJMOFDALB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xF233DD0)
#define DJJJMOFDALB_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xF233A30)

inline static constexpr unsigned int DJJJMOFDALB_TypeDefinitionIndex = 55962;

	class DJJJMOFDALB : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* MEEPDDMNLCH; // 0x18
		::RPG::GameCore::FixPoint IGAMHKCHEHK; // 0x20
		::System::Boolean FJMFKJEIOIO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJJMOFDALB_CTOR_OFFSET))(this);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DJJJMOFDALB_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DJJJMOFDALB_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint NNBHBAAPNEI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJJMOFDALB_NNBHBAAPNEI_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DJJJMOFDALB_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean AALCFBOGFKP(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + DJJJMOFDALB_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJJMOFDALB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean PJIEAONEBJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJJMOFDALB_PJIEAONEBJP_OFFSET))(this);
		}

	};

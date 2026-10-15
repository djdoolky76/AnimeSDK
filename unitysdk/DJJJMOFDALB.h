#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJJJMOFDALB_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xF238FC0)
#define DJJJMOFDALB_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xF238C50)
#define DJJJMOFDALB_CTOR_OFFSET UNITYSDK_OFFSET(0xF239200)
#define DJJJMOFDALB_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xF238EB0)
#define DJJJMOFDALB_NNBHBAAPNEI_OFFSET UNITYSDK_OFFSET(0xF238D10)
#define DJJJMOFDALB_PJIEAONEBJP_OFFSET UNITYSDK_OFFSET(0xF239110)
#define DJJJMOFDALB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xF239050)
#define DJJJMOFDALB_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xF238CB0)

	class DJJJMOFDALB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* MEEPDDMNLCH; // 0x10
		::System::Action* OnChanged; // 0x18
		::System::Boolean FJMFKJEIOIO; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint IGAMHKCHEHK; // 0x28
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

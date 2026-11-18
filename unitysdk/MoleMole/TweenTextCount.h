#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TWEENTEXTCOUNT_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x15AFB3C0)
#define MOLEMOLE_TWEENTEXTCOUNT_DILHADGGIKN_OFFSET UNITYSDK_OFFSET(0x15AFB270)
#define MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x15AFB030)
#define MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15AFB200)
#define MOLEMOLE_TWEENTEXTCOUNT_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x15AFB550)
#define MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15AFB210)
#define MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x15AFB530)

namespace MoleMole
{
	inline static constexpr unsigned int TweenTextCount_TypeDefinitionIndex = 46781;

	class TweenTextCount
	{
	public:
		::UnityEngine::UI::Text* KLMJDHHAOJD; // 0x88
		::System::String* mes; // 0x90
		::System::Int32 HHGILNNMNAK; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET))(this);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void DILHADGGIKN(::System::Int32 HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_DILHADGGIKN_OFFSET))(this, HFMHOELKCAJ);
		}

		::System::Void PECPJKGEJKM(::System::Int32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}
	};
}

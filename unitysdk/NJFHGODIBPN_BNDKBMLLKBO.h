#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define NJFHGODIBPN_BNDKBMLLKBO_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x1A78B0D0)
#define NJFHGODIBPN_BNDKBMLLKBO_CFCJEFIECNK_OFFSET UNITYSDK_OFFSET(0x1A78B060)
#define NJFHGODIBPN_BNDKBMLLKBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A78B190)
#define NJFHGODIBPN_BNDKBMLLKBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A78B140)
#define NJFHGODIBPN_BNDKBMLLKBO_OCOGKAHEEHI_OFFSET UNITYSDK_OFFSET(0x1A78B050)

inline static constexpr unsigned int NJFHGODIBPN_BNDKBMLLKBO_TypeDefinitionIndex = 58217;

	class NJFHGODIBPN_BNDKBMLLKBO : public ::System::Object
	{
	public:
		::System::Action* KGOIGDGEJFE; // 0x10
		::System::Boolean GLDEBFOKEMJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BNDKBMLLKBO_CTOR_OFFSET))(this);
		}

		::System::Action* OCOGKAHEEHI()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BNDKBMLLKBO_OCOGKAHEEHI_OFFSET))(this);
		}

		::System::Void CFCJEFIECNK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BNDKBMLLKBO_CFCJEFIECNK_OFFSET))(this, a1);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BNDKBMLLKBO_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BNDKBMLLKBO_DISPOSE_OFFSET))(this);
		}

	};

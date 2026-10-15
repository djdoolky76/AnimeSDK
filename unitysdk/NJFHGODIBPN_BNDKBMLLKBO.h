#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define NJFHGODIBPN_BNDKBMLLKBO_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0xBC0F350)
#define NJFHGODIBPN_BNDKBMLLKBO_CFCJEFIECNK_OFFSET UNITYSDK_OFFSET(0xBC0F2E0)
#define NJFHGODIBPN_BNDKBMLLKBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0F410)
#define NJFHGODIBPN_BNDKBMLLKBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC0F3C0)
#define NJFHGODIBPN_BNDKBMLLKBO_OCOGKAHEEHI_OFFSET UNITYSDK_OFFSET(0xBC0F2D0)

inline static constexpr unsigned int NJFHGODIBPN_BNDKBMLLKBO_TypeDefinitionIndex = 56991;

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

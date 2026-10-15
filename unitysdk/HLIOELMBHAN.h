#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflateIntent.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define HLIOELMBHAN_ANCEOLNCALK_OFFSET UNITYSDK_OFFSET(0x15D53940)
#define HLIOELMBHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D53440)
#define HLIOELMBHAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D535A0)
#define HLIOELMBHAN_GFKBECOKJGJ_OFFSET UNITYSDK_OFFSET(0x15D53850)
#define HLIOELMBHAN_IFDACDBLMBD_OFFSET UNITYSDK_OFFSET(0x15D538A0)
#define HLIOELMBHAN_JEFOOGIBODE_OFFSET UNITYSDK_OFFSET(0x15D538F0)
#define HLIOELMBHAN_KHKDHMEPCOD_OFFSET UNITYSDK_OFFSET(0x15D53800)
#define HLIOELMBHAN_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0x15D53770)
#define HLIOELMBHAN_MBOMDOAMNHP_OFFSET UNITYSDK_OFFSET(0x15D537C0)
#define HLIOELMBHAN_NEHKCKIPBPL_OFFSET UNITYSDK_OFFSET(0x15D53990)

inline static constexpr unsigned int HLIOELMBHAN_TypeDefinitionIndex = 68680;

	class HLIOELMBHAN : public ::System::Object
	{
	public:
		::System::Boolean FMHMODOBNDG; // 0x10
		::System::Boolean EBJCNFLNCAA; // 0x11
		::System::Boolean KMJDIBJLIPE; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::EInflateIntent MBOMDOAMNHP()
		{
			return ((::RPG::Client::EInflateIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_MBOMDOAMNHP_OFFSET))(this);
		}

		::System::Boolean KHKDHMEPCOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_KHKDHMEPCOD_OFFSET))(this);
		}

		::System::Boolean GFKBECOKJGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_GFKBECOKJGJ_OFFSET))(this);
		}

		::System::Void LHHBFAAJHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIOELMBHAN_LHHBFAAJHCI_OFFSET))(this);
		}

		::System::Void IFDACDBLMBD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIOELMBHAN_IFDACDBLMBD_OFFSET))(this, a1);
		}

		::System::Void JEFOOGIBODE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIOELMBHAN_JEFOOGIBODE_OFFSET))(this, a1);
		}

		::System::Void ANCEOLNCALK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIOELMBHAN_ANCEOLNCALK_OFFSET))(this, a1);
		}

		::System::Void NEHKCKIPBPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIOELMBHAN_NEHKCKIPBPL_OFFSET))(this, a1);
		}

	};

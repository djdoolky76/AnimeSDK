#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflateIntent.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define HLIOELMBHAN_ANCEOLNCALK_OFFSET UNITYSDK_OFFSET(0x16CB9920)
#define HLIOELMBHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB9420)
#define HLIOELMBHAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CB9580)
#define HLIOELMBHAN_GFKBECOKJGJ_OFFSET UNITYSDK_OFFSET(0x16CB9830)
#define HLIOELMBHAN_IFDACDBLMBD_OFFSET UNITYSDK_OFFSET(0x16CB9880)
#define HLIOELMBHAN_JEFOOGIBODE_OFFSET UNITYSDK_OFFSET(0x16CB98D0)
#define HLIOELMBHAN_KHKDHMEPCOD_OFFSET UNITYSDK_OFFSET(0x16CB97E0)
#define HLIOELMBHAN_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0x16CB9750)
#define HLIOELMBHAN_MBOMDOAMNHP_OFFSET UNITYSDK_OFFSET(0x16CB97A0)
#define HLIOELMBHAN_NEHKCKIPBPL_OFFSET UNITYSDK_OFFSET(0x16CB9970)

inline static constexpr unsigned int HLIOELMBHAN_TypeDefinitionIndex = 70632;

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

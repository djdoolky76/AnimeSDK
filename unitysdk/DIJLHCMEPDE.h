#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define DIJLHCMEPDE_CTOR_OFFSET UNITYSDK_OFFSET(0xF20B130)
#define DIJLHCMEPDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20B1E0)
#define DIJLHCMEPDE_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xF20B230)
#define DIJLHCMEPDE_HGHFKLCGJLP_OFFSET UNITYSDK_OFFSET(0xF20B3A0)
#define DIJLHCMEPDE_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xF20B410)
#define DIJLHCMEPDE_KEKLIKEIHLB_OFFSET UNITYSDK_OFFSET(0xF20B2F0)

	class DIJLHCMEPDE : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Int32 NEMONPEMLDP; // 0x18
		::System::Boolean AFLGDFPEMNP; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 JHDFLJHFHEI; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_DISPOSE_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void KEKLIKEIHLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_KEKLIKEIHLB_OFFSET))(this, a1);
		}

		::System::Void HGHFKLCGJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_HGHFKLCGJLP_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DIJLHCMEPDE_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};

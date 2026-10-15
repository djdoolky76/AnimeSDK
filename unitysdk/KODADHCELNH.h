#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define KODADHCELNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB590DD0)
#define KODADHCELNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB591280)
#define KODADHCELNH_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xB591170)
#define KODADHCELNH_EBBAIDKDIFG_OFFSET UNITYSDK_OFFSET(0xB590FF0)
#define KODADHCELNH_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xB5910D0)
#define KODADHCELNH_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xB591230)
#define KODADHCELNH_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0xB591110)
#define KODADHCELNH_NBIELHICJKE_OFFSET UNITYSDK_OFFSET(0xB590F20)

inline static constexpr unsigned int KODADHCELNH_TypeDefinitionIndex = 75453;

	class KODADHCELNH : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Boolean AFLGDFPEMNP; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KGPPNBLDECM; // 0x1C
		::System::UInt32 JJPHCKDMDKN; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + KODADHCELNH_CTOR_OFFSET))(this, a1);
		}

		::System::Void NBIELHICJKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KODADHCELNH_NBIELHICJKE_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODADHCELNH_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::UInt32 EBBAIDKDIFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KODADHCELNH_EBBAIDKDIFG_OFFSET))(this);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODADHCELNH_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODADHCELNH_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KODADHCELNH_IIOIMDJJEDG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODADHCELNH_DISPOSE_OFFSET))(this);
		}

	};

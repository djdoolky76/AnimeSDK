#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFHLNGDILJK;
class LCJPDOOLBEC;
namespace System { class Object; }

#define AFHLNGDILJK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD5BE0D0)
#define AFHLNGDILJK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5BE210)
#define AFHLNGDILJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5BE2C0)
#define AFHLNGDILJK_HGHCGLKKHCO_OFFSET UNITYSDK_OFFSET(0xD5BE3B0)
#define AFHLNGDILJK_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xD5BE310)
#define AFHLNGDILJK_JBLANFNMHDC_OFFSET UNITYSDK_OFFSET(0xD5BE3F0)
#define AFHLNGDILJK_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xD5BE220)

inline static constexpr unsigned int AFHLNGDILJK_TypeDefinitionIndex = 74197;

	class AFHLNGDILJK : public ::System::Object
	{
	public:
		::System::Int32 CALNLFBNMPM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLNGDILJK_CTOR_OFFSET))(this);
		}

		static ::AFHLNGDILJK* BPLPBPMEODA(::LCJPDOOLBEC* a1)
		{
			return ((::AFHLNGDILJK*(*)(::LCJPDOOLBEC*))((::PBYTE)hIl2Cpp + AFHLNGDILJK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLNGDILJK_DISPOSE_OFFSET))(this);
		}

		::System::Int32 HGHCGLKKHCO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLNGDILJK_HGHCGLKKHCO_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLNGDILJK_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLNGDILJK_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void JBLANFNMHDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFHLNGDILJK_JBLANFNMHDC_OFFSET))(this, a1);
		}

	};

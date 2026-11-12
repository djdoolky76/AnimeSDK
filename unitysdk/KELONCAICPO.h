#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACJNPGBJEFE.h"
#include "unitysdk/System/Object.h"
class BNCHFPFHIJL;
class KELONCAICPO;
class KELONCAICPO_DLFMOOFKHOC;
class KELONCAICPO_PPJLCJPKCAD;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KELONCAICPO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC08840)
#define KELONCAICPO_CLIGEIAGEIG_OFFSET UNITYSDK_OFFSET(0xBC08980)
#define KELONCAICPO_CPJHCALNJJN_OFFSET UNITYSDK_OFFSET(0xBC08BE0)
#define KELONCAICPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC08900)
#define KELONCAICPO_HPMJGCGIPPE_OFFSET UNITYSDK_OFFSET(0xBC08D60)

inline static constexpr unsigned int KELONCAICPO_TypeDefinitionIndex = 73679;

	class KELONCAICPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ACJNPGBJEFE, ::System::Object*>* JLCDNGKHHPJ; // 0x10
		::KELONCAICPO_PPJLCJPKCAD* EAHGDMAAFDL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_CTOR_OFFSET))(this);
		}

		static ::KELONCAICPO* BPLPBPMEODA()
		{
			return ((::KELONCAICPO*(*)())((::PBYTE)hIl2Cpp + KELONCAICPO_BPLPBPMEODA_OFFSET))();
		}

		::KELONCAICPO_DLFMOOFKHOC* CPJHCALNJJN(::BNCHFPFHIJL* a1)
		{
			return ((::KELONCAICPO_DLFMOOFKHOC*(*)(::PVOID, ::BNCHFPFHIJL*))((::PBYTE)hIl2Cpp + KELONCAICPO_CPJHCALNJJN_OFFSET))(this, a1);
		}

		::KELONCAICPO_DLFMOOFKHOC* HPMJGCGIPPE(::ACJNPGBJEFE a1)
		{
			return ((::KELONCAICPO_DLFMOOFKHOC*(*)(::PVOID, ::ACJNPGBJEFE))((::PBYTE)hIl2Cpp + KELONCAICPO_HPMJGCGIPPE_OFFSET))(this, a1);
		}

		::System::Void CLIGEIAGEIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_CLIGEIAGEIG_OFFSET))(this);
		}

	};

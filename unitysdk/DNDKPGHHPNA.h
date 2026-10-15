#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class PGBLBOJBDGG;
namespace System { class String; }

#define DNDKPGHHPNA_ANOADLIFNDK_OFFSET UNITYSDK_OFFSET(0x11945CD0)
#define DNDKPGHHPNA_COHLHPPEPJO_OFFSET UNITYSDK_OFFSET(0x11945A20)
#define DNDKPGHHPNA_CTOR_OFFSET UNITYSDK_OFFSET(0x11945A10)
#define DNDKPGHHPNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11946360)
#define DNDKPGHHPNA_KNBLJEDBODK_OFFSET UNITYSDK_OFFSET(0x119460C0)
#define DNDKPGHHPNA_NJOLAMKEGND_OFFSET UNITYSDK_OFFSET(0x11945B80)
#define DNDKPGHHPNA_ODBGFIGACDC_OFFSET UNITYSDK_OFFSET(0x11946220)
#define DNDKPGHHPNA_OFKMNJNEOBP_OFFSET UNITYSDK_OFFSET(0x119462C0)

inline static constexpr unsigned int DNDKPGHHPNA_TypeDefinitionIndex = 77255;

	class DNDKPGHHPNA : public ::System::Object
	{
	public:
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x10
		::BNLHGENFEHG* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::BNLHGENFEHG* a1, ::PGBLBOJBDGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLHGENFEHG*, ::PGBLBOJBDGG*))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void COHLHPPEPJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_COHLHPPEPJO_OFFSET))(this, a1);
		}

		::System::Void KNBLJEDBODK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_KNBLJEDBODK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_DISPOSE_OFFSET))(this);
		}

		::System::Void NJOLAMKEGND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_NJOLAMKEGND_OFFSET))(this);
		}

		::System::Void ODBGFIGACDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_ODBGFIGACDC_OFFSET))(this);
		}

		::System::Void ANOADLIFNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_ANOADLIFNDK_OFFSET))(this);
		}

		::System::Void OFKMNJNEOBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDKPGHHPNA_OFKMNJNEOBP_OFFSET))(this);
		}

	};

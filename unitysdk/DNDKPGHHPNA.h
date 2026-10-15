#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class PGBLBOJBDGG;
namespace System { class String; }

#define DNDKPGHHPNA_ANOADLIFNDK_OFFSET UNITYSDK_OFFSET(0x1194B020)
#define DNDKPGHHPNA_COHLHPPEPJO_OFFSET UNITYSDK_OFFSET(0x1194AD70)
#define DNDKPGHHPNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1194AD60)
#define DNDKPGHHPNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194B690)
#define DNDKPGHHPNA_KNBLJEDBODK_OFFSET UNITYSDK_OFFSET(0x1194B410)
#define DNDKPGHHPNA_NJOLAMKEGND_OFFSET UNITYSDK_OFFSET(0x1194AED0)
#define DNDKPGHHPNA_ODBGFIGACDC_OFFSET UNITYSDK_OFFSET(0x1194B570)
#define DNDKPGHHPNA_OFKMNJNEOBP_OFFSET UNITYSDK_OFFSET(0x1194B600)

inline static constexpr unsigned int DNDKPGHHPNA_TypeDefinitionIndex = 77256;

	class DNDKPGHHPNA : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
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

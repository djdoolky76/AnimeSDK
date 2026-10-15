#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class CLNGKOPAMBJ;
class JHJIFOPDDMK;
class KBDDPBPABDD;
class OPPEGLOCAGH;

#define MGCLNHCLKPJ_CKOHLCJGOCI_1_OFFSET UNITYSDK_OFFSET(0xB916E60)
#define MGCLNHCLKPJ_CKOHLCJGOCI_OFFSET UNITYSDK_OFFSET(0xB916DA0)
#define MGCLNHCLKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9170F0)
#define MGCLNHCLKPJ_JCGCEENJMHN_OFFSET UNITYSDK_OFFSET(0xB916C20)
#define MGCLNHCLKPJ_LIGODLHKMJN_OFFSET UNITYSDK_OFFSET(0xB916CE0)
#define MGCLNHCLKPJ_NPJLADPFABC_OFFSET UNITYSDK_OFFSET(0xB917030)

inline static constexpr unsigned int MGCLNHCLKPJ_TypeDefinitionIndex = 80124;

	class MGCLNHCLKPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_CTOR_OFFSET))(this);
		}

		::CLNGKOPAMBJ* JCGCEENJMHN(::System::UInt32 a1)
		{
			return ((::CLNGKOPAMBJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_JCGCEENJMHN_OFFSET))(this, a1);
		}

		::KBDDPBPABDD* LIGODLHKMJN(::System::UInt32 a1)
		{
			return ((::KBDDPBPABDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_LIGODLHKMJN_OFFSET))(this, a1);
		}

		::OPPEGLOCAGH* CKOHLCJGOCI(::System::UInt32 a1)
		{
			return ((::OPPEGLOCAGH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_CKOHLCJGOCI_OFFSET))(this, a1);
		}

		::OPPEGLOCAGH* CKOHLCJGOCI_1(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::OPPEGLOCAGH*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_CKOHLCJGOCI_1_OFFSET))(this, a1);
		}

		::JHJIFOPDDMK* NPJLADPFABC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::JHJIFOPDDMK*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCLNHCLKPJ_NPJLADPFABC_OFFSET))(this, a1, a2);
		}

	};

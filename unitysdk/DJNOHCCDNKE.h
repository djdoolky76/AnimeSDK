#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPNALPCMJCD;
namespace RPG::Client { class AdventurePhase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJNOHCCDNKE_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xF24D540)
#define DJNOHCCDNKE_CMIIAALHEDC_OFFSET UNITYSDK_OFFSET(0xF24DBC0)
#define DJNOHCCDNKE_CTOR_OFFSET UNITYSDK_OFFSET(0xF24DCD0)
#define DJNOHCCDNKE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xF24D590)
#define DJNOHCCDNKE_JNDDGGIMAMJ_OFFSET UNITYSDK_OFFSET(0xF24D8A0)
#define DJNOHCCDNKE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF24D4F0)
#define DJNOHCCDNKE_MIALNMOOHED_OFFSET UNITYSDK_OFFSET(0xF24DA80)
#define DJNOHCCDNKE_OPDPNKBIOAE_OFFSET UNITYSDK_OFFSET(0xF24D5E0)

inline static constexpr unsigned int DJNOHCCDNKE_TypeDefinitionIndex = 60895;

	class DJNOHCCDNKE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OPNALPCMJCD*>* MHKNCNEJGKI; // 0x10
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x18
		::System::Collections::Generic::List_1<::OPNALPCMJCD*>* PHAFAEMLDJC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void OPDPNKBIOAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_OPDPNKBIOAE_OFFSET))(this);
		}

		::System::Void JNDDGGIMAMJ(::OPNALPCMJCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPNALPCMJCD*))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_JNDDGGIMAMJ_OFFSET))(this, a1);
		}

		::System::Void MIALNMOOHED(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_MIALNMOOHED_OFFSET))(this, a1, a2);
		}

		::OPNALPCMJCD* CMIIAALHEDC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::OPNALPCMJCD*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJNOHCCDNKE_CMIIAALHEDC_OFFSET))(this, a1, a2);
		}

	};

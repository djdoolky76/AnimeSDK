#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEHPKBDBMKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E7E40)
#define NEHPKBDBMKB_HFJHOJHENID_OFFSET UNITYSDK_OFFSET(0xC3E7DF0)
#define NEHPKBDBMKB_JPEIGJGPLOA_OFFSET UNITYSDK_OFFSET(0xC3E7D60)
#define NEHPKBDBMKB_LHAGPJMHADB_OFFSET UNITYSDK_OFFSET(0xC3E7D00)
#define NEHPKBDBMKB_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xC3E7C20)

inline static constexpr unsigned int NEHPKBDBMKB_TypeDefinitionIndex = 75046;

	class NEHPKBDBMKB : public ::System::Object
	{
	public:
		// static const ::System::Object OBGKJOOLAIO; // 0x0
		// static const ::System::Object CMCGPBKLGEG; // 0x0
		// static const ::System::Object MNDMEJEMMGG; // 0x0
		// static const ::System::Object LCCNLBBBKCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHPKBDBMKB_CTOR_OFFSET))(this);
		}

		::System::Boolean MIFJNPKACOB(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + NEHPKBDBMKB_MIFJNPKACOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean LHAGPJMHADB(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEHPKBDBMKB_LHAGPJMHADB_OFFSET))(this, a1);
		}

		::System::Boolean HFJHOJHENID(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEHPKBDBMKB_HFJHOJHENID_OFFSET))(this, a1);
		}

		::System::Char JPEIGJGPLOA(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEHPKBDBMKB_JPEIGJGPLOA_OFFSET))(this, a1);
		}

	};

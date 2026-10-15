#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPADOJLOLPH.h"
#include "unitysdk/LNMEGEABJHF.h"
#include "unitysdk/RPG/Client/CompilerFramework/LocationKind.h"
class ABNBHKAEJIP;
class AENEFHBMEMJ;
class KLGICPNPKIC;
namespace System { class Object; }

#define ABNBHKAEJIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C500F50)
#define ABNBHKAEJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C500F30)
#define ABNBHKAEJIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C501290)
#define ABNBHKAEJIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C501050)
#define ABNBHKAEJIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5013D0)
#define ABNBHKAEJIP_LCLFJLLIMCH_OFFSET UNITYSDK_OFFSET(0x1C5016A0)
#define ABNBHKAEJIP_LICEAJDINOM_OFFSET UNITYSDK_OFFSET(0x1C501690)
#define ABNBHKAEJIP_OMKFNPGBODJ_OFFSET UNITYSDK_OFFSET(0x1C5016B0)

inline static constexpr unsigned int ABNBHKAEJIP_TypeDefinitionIndex = 41617;

	class ABNBHKAEJIP : public ::IPADOJLOLPH
	{
	public:
		::AENEFHBMEMJ* DICNPKCPPDJ; // 0x10
		::LNMEGEABJHF HAOKJIDCODI; // 0x18
		::System::Void _ctor(::AENEFHBMEMJ* a1, ::LNMEGEABJHF a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENEFHBMEMJ*, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::ABNBHKAEJIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABNBHKAEJIP*))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_EQUALS_1_OFFSET))(this, a1);
		}

		::RPG::Client::CompilerFramework::LocationKind LICEAJDINOM()
		{
			return ((::RPG::Client::CompilerFramework::LocationKind(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_LICEAJDINOM_OFFSET))(this);
		}

		::AENEFHBMEMJ* LCLFJLLIMCH()
		{
			return ((::AENEFHBMEMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_LCLFJLLIMCH_OFFSET))(this);
		}

		::LNMEGEABJHF OMKFNPGBODJ()
		{
			return ((::LNMEGEABJHF(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBHKAEJIP_OMKFNPGBODJ_OFFSET))(this);
		}

	};

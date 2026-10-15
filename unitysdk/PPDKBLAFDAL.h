#pragma once
#include "unitysdk/unitysdk.h"
class CBEBICGIOAB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPDKBLAFDAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC37CA10)
#define PPDKBLAFDAL_DOAILEHLIKH_OFFSET UNITYSDK_OFFSET(0xC37C750)
#define PPDKBLAFDAL_HIMMIMHNCHA_OFFSET UNITYSDK_OFFSET(0xC37C670)
#define PPDKBLAFDAL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC37C7C0)
#define PPDKBLAFDAL_JOEDLCMMHCD_OFFSET UNITYSDK_OFFSET(0xC37C620)

	class PPDKBLAFDAL
	{
	public:
		::System::Collections::Generic::List_1<::CBEBICGIOAB*>* IKPEEHJKFIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDKBLAFDAL_CTOR_OFFSET))(this);
		}

		::System::Int32 JOEDLCMMHCD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDKBLAFDAL_JOEDLCMMHCD_OFFSET))(this);
		}

		::System::Void HIMMIMHNCHA(::CBEBICGIOAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + PPDKBLAFDAL_HIMMIMHNCHA_OFFSET))(this, a1);
		}

		::System::Void DOAILEHLIKH(::CBEBICGIOAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + PPDKBLAFDAL_DOAILEHLIKH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPDKBLAFDAL_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

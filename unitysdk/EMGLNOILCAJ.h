#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMGLNOILCAJ;
class FCOEMCEDLNL;
namespace System { class String; }

#define EMGLNOILCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA6760)
#define EMGLNOILCAJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDA64C0)

inline static constexpr unsigned int EMGLNOILCAJ_TypeDefinitionIndex = 14417;

	class EMGLNOILCAJ : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* JOAPPDJLNNN; // 0x18
		::System::String* OENAMINOLLF; // 0x20
		::System::String* OLOIFNNLKJP; // 0x28
		::System::String* FJDFAJDHIBI; // 0x30
		::System::String* KILFKBDMJGI; // 0x38
		::System::UInt32 IODLAAIECIG; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGLNOILCAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EMGLNOILCAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EMGLNOILCAJ*))((::PBYTE)hIl2Cpp + EMGLNOILCAJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

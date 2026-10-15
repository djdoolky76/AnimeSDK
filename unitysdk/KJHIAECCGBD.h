#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJHIAECCGBD;
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define KJHIAECCGBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB456C70)
#define KJHIAECCGBD_MPGEGIHLLLE_OFFSET UNITYSDK_OFFSET(0xB456680)

inline static constexpr unsigned int KJHIAECCGBD_TypeDefinitionIndex = 66742;

	class KJHIAECCGBD : public ::System::Object
	{
	public:
		::System::String* EBCFEAHLKPM; // 0x10
		::System::String* LIFBHELMEAI; // 0x18
		::System::Int32 MEDJCOLIFLG; // 0x20
		::System::Int32 BCGCDNLHLCL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHIAECCGBD_CTOR_OFFSET))(this);
		}

		static ::KJHIAECCGBD* MPGEGIHLLLE(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::KJHIAECCGBD*(*)(::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + KJHIAECCGBD_MPGEGIHLLLE_OFFSET))(a1, a2);
		}

	};

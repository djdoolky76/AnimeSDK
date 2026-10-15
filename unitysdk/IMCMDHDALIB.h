#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IMCMDHDALIB;
namespace System { class String; }

#define IMCMDHDALIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF22300)
#define IMCMDHDALIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF21FD0)

inline static constexpr unsigned int IMCMDHDALIB_TypeDefinitionIndex = 13963;

	class IMCMDHDALIB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KPNIGDPANOC; // 0x10
		::System::String* ONDPOGOJIID; // 0x18
		::Il2CppArray<::System::UInt32>* KOAGHJCOOGA; // 0x20
		::System::UInt32 LHCNEHAHKHM; // 0x28
		::System::UInt32 GDEOCHKAEMO; // 0x2C
		::RPG::Client::TextID LLLJACLJAEP; // 0x30
		::System::UInt32 AEONKNDCDKN; // 0x40
		::System::UInt32 GGKPLJJMBBA; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCMDHDALIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IMCMDHDALIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMCMDHDALIB*))((::PBYTE)hIl2Cpp + IMCMDHDALIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDDDCIEFCNJ;
namespace System { class String; }

#define NDDDCIEFCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7B20)
#define NDDDCIEFCNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F78C0)

	class NDDDCIEFCNJ : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* KILFKBDMJGI; // 0x18
		::Il2CppArray<::System::UInt32>* BMCKCHLJFIE; // 0x20
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDCIEFCNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDDDCIEFCNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDDDCIEFCNJ*))((::PBYTE)hIl2Cpp + NDDDCIEFCNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

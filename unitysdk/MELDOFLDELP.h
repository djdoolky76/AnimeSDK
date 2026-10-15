#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MELDOFLDELP;
namespace System { class String; }

#define MELDOFLDELP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D153490)
#define MELDOFLDELP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D153210)

	class MELDOFLDELP : public ::System::Object
	{
	public:
		::System::String* ABJGONAEFCB; // 0x10
		::Il2CppArray<::System::UInt32>* FODGHIDJAPP; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::UInt32 LJGHBEFPOPP; // 0x24
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::System::UInt32 KDKPDJNMMCM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELDOFLDELP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MELDOFLDELP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MELDOFLDELP*))((::PBYTE)hIl2Cpp + MELDOFLDELP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

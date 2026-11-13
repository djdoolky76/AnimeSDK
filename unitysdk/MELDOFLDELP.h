#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MELDOFLDELP;
namespace System { class String; }

#define MELDOFLDELP_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9B9E0)
#define MELDOFLDELP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BB9B760)

inline static constexpr unsigned int MELDOFLDELP_TypeDefinitionIndex = 12057;

	class MELDOFLDELP : public ::System::Object
	{
	public:
		::System::String* ABJGONAEFCB; // 0x10
		::Il2CppArray<::System::UInt32>* FODGHIDJAPP; // 0x18
		::System::UInt32 KDKPDJNMMCM; // 0x20
		::System::UInt32 LJGHBEFPOPP; // 0x24
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELDOFLDELP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MELDOFLDELP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MELDOFLDELP*))((::PBYTE)hIl2Cpp + MELDOFLDELP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

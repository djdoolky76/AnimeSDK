#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAKCGPLBAFI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GPOKNODKHGL;
namespace System { class String; }

#define GPOKNODKHGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CDAF0)
#define GPOKNODKHGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9CD8E0)

inline static constexpr unsigned int GPOKNODKHGL_TypeDefinitionIndex = 11364;

	class GPOKNODKHGL : public ::System::Object
	{
	public:
		::System::String* OOLEAPLDIEA; // 0x10
		::MAKCGPLBAFI LLBDOPKHHEB; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::RPG::Client::TextID PEPOHJHNFHF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOKNODKHGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPOKNODKHGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPOKNODKHGL*))((::PBYTE)hIl2Cpp + GPOKNODKHGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

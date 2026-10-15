#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AEOBCFPOIBP;
class FCOEMCEDLNL;
namespace System { class String; }

#define AEOBCFPOIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC85600)
#define AEOBCFPOIBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC853D0)

inline static constexpr unsigned int AEOBCFPOIBP_TypeDefinitionIndex = 12008;

	class AEOBCFPOIBP : public ::System::Object
	{
	public:
		::System::String* MJPKBIGCFOM; // 0x10
		::NEBMBGBIHHH GMPGDEINODK; // 0x18
		::System::Int32 FLBGELFEBCK; // 0x1C
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOBCFPOIBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEOBCFPOIBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEOBCFPOIBP*))((::PBYTE)hIl2Cpp + AEOBCFPOIBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

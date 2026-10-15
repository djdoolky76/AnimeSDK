#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"
class JDKNLNLGODN;
namespace System { class String; }

#define MJGFBIAEKLO_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xB96C570)
#define MJGFBIAEKLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB96C6E0)
#define MJGFBIAEKLO_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xB96C5B0)
#define MJGFBIAEKLO_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xB96C380)
#define MJGFBIAEKLO_JNJEHDIKJPA_OFFSET UNITYSDK_OFFSET(0xB96C300)
#define MJGFBIAEKLO_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xB96C270)
#define MJGFBIAEKLO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB96C1E0)

inline static constexpr unsigned int MJGFBIAEKLO_TypeDefinitionIndex = 61053;

	class MJGFBIAEKLO : public ::System::Object
	{
	public:
		::JDKNLNLGODN* POBLIBAJEOK; // 0x10
		::Il2CppArray<::RPG::Client::WorkNodeState>* OAAHBFFOKAA; // 0x18
		::System::String* DLLDLAJJOMM; // 0x20
		::JDKNLNLGODN* LBADEFLCBGM; // 0x28
		::System::Single BKDDBPLNKEJ; // 0x30
		::System::Single GNEEMGIJEPJ; // 0x34
		::System::Boolean FCELADAOCCM; // 0x38
		::System::Boolean FOJBENNMKLL; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::JDKNLNLGODN* a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::JDKNLNLGODN*, ::System::String*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP_1(::JDKNLNLGODN* a1, ::JDKNLNLGODN* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::JDKNLNLGODN*, ::JDKNLNLGODN*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JNJEHDIKJPA(::JDKNLNLGODN* a1, ::Il2CppArray<::RPG::Client::WorkNodeState>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::JDKNLNLGODN*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_JNJEHDIKJPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean GLOADGNOLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGFBIAEKLO_GLOADGNOLGE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"
class JDKNLNLGODN;
namespace System { class String; }

#define MJGFBIAEKLO_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xB9664B0)
#define MJGFBIAEKLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB966620)
#define MJGFBIAEKLO_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xB9664F0)
#define MJGFBIAEKLO_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xB9662C0)
#define MJGFBIAEKLO_JNJEHDIKJPA_OFFSET UNITYSDK_OFFSET(0xB966240)
#define MJGFBIAEKLO_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xB9661B0)
#define MJGFBIAEKLO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB966120)

inline static constexpr unsigned int MJGFBIAEKLO_TypeDefinitionIndex = 61053;

	class MJGFBIAEKLO : public ::System::Object
	{
	public:
		::JDKNLNLGODN* LBADEFLCBGM; // 0x10
		::JDKNLNLGODN* POBLIBAJEOK; // 0x18
		::Il2CppArray<::RPG::Client::WorkNodeState>* OAAHBFFOKAA; // 0x20
		::System::String* DLLDLAJJOMM; // 0x28
		::System::Single GNEEMGIJEPJ; // 0x30
		::System::Boolean FCELADAOCCM; // 0x34
		::System::Boolean FOJBENNMKLL; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single BKDDBPLNKEJ; // 0x38
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

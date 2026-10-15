#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
class DPEGLPPPAJJ;
namespace RPG::Client { class IGamePhase; }
namespace System { class Object; }
namespace System { class String; }

#define MDHBLMOKHBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A4440)
#define MDHBLMOKHBA_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xB8A45B0)
#define MDHBLMOKHBA_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xB8A4520)
#define MDHBLMOKHBA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8A44C0)
#define MDHBLMOKHBA_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0xB8A48A0)
#define MDHBLMOKHBA_JNEAEDBPLOE_OFFSET UNITYSDK_OFFSET(0xB8A5090)
#define MDHBLMOKHBA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8A4460)
#define MDHBLMOKHBA_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xB8A46F0)
#define MDHBLMOKHBA_ONIAAGDIGMB_OFFSET UNITYSDK_OFFSET(0xB8A5010)

inline static constexpr unsigned int MDHBLMOKHBA_TypeDefinitionIndex = 61192;

	class MDHBLMOKHBA : public ::HDJIGMBHENE
	{
	public:
		::System::Int32 NCHFNBCDEOO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_EFIJDBHPINI_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_HILHCKLBJOM_OFFSET))(this);
		}

		::System::Void JNEAEDBPLOE(::DPEGLPPPAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPEGLPPPAJJ*))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_JNEAEDBPLOE_OFFSET))(this, a1);
		}

		::System::Void ONIAAGDIGMB(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MDHBLMOKHBA_ONIAAGDIGMB_OFFSET))(this, a1, a2, a3);
		}

	};

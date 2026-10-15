#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class MonoClockParkStoryCharacter; }
namespace RPG::Client { class MonoSpineStoryAnimEventListener; }
namespace RPG::Client { class MonoSpineStoryController; }
namespace RPG::GameCore { class ClockParkStoryConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNBKPPKILBJ_AKPKBEELJOB_OFFSET UNITYSDK_OFFSET(0xDA419F0)
#define CNBKPPKILBJ_AOGFIOMJMBA_OFFSET UNITYSDK_OFFSET(0xDA40C70)
#define CNBKPPKILBJ_BEOJAPKHOAI_OFFSET UNITYSDK_OFFSET(0xDA41CF0)
#define CNBKPPKILBJ_CPOOENLGJNA_OFFSET UNITYSDK_OFFSET(0xDA40770)
#define CNBKPPKILBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3FE90)
#define CNBKPPKILBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA3FFC0)
#define CNBKPPKILBJ_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xDA41890)
#define CNBKPPKILBJ_GAAAFAEOFDI_OFFSET UNITYSDK_OFFSET(0xDA41060)
#define CNBKPPKILBJ_IPAGJBDMKLM_OFFSET UNITYSDK_OFFSET(0xDA42270)
#define CNBKPPKILBJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDA41930)
#define CNBKPPKILBJ_KDNOGFCKBON_OFFSET UNITYSDK_OFFSET(0xDA40F80)
#define CNBKPPKILBJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA411A0)
#define CNBKPPKILBJ_LGPCPPNGCJE_OFFSET UNITYSDK_OFFSET(0xDA41A50)
#define CNBKPPKILBJ_LKFIPBEKPEA_OFFSET UNITYSDK_OFFSET(0xDA42110)
#define CNBKPPKILBJ_LLPKDPGFEME_OFFSET UNITYSDK_OFFSET(0xDA41E10)
#define CNBKPPKILBJ_MHIAHPFDLNJ_OFFSET UNITYSDK_OFFSET(0xDA405E0)
#define CNBKPPKILBJ_MPEHMHMIKPN_OFFSET UNITYSDK_OFFSET(0xDA410B0)
#define CNBKPPKILBJ_NNIABFKELNC_OFFSET UNITYSDK_OFFSET(0xDA40810)
#define CNBKPPKILBJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xDA41780)
#define CNBKPPKILBJ_OICLPOAJEOC_OFFSET UNITYSDK_OFFSET(0xDA41610)

inline static constexpr unsigned int CNBKPPKILBJ_TypeDefinitionIndex = 60284;

	class CNBKPPKILBJ : public ::System::Object
	{
	public:
		::System::Action* JCIFPBNPAIO; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::ClockParkStoryConfig* IGHAHBNLIJA; // 0x20
		::RPG::Client::MonoSpineStoryAnimEventListener* BGFDACCIPJI; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoClockParkStoryCharacter*>* NMMHJPOOPEB; // 0x30
		::RPG::Client::MonoSpineStoryController* CPIIOIPAAKK; // 0x38
		::Il2CppArray<::System::String*>* LCBJGHLBMAM; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* BAHEAMBNLME; // 0x48
		::Il2CppArray<::System::String*>* COLBNHBELCC; // 0x50
		::System::Action* GOKIJLFOJAB; // 0x58
		::System::Single EAFFOJLIIMN; // 0x60
		::System::Boolean LMAJJNKPEPF; // 0x64
		::System::Boolean EJDEKKEOHBE; // 0x65
		// static const ::System::Object LBOLEADEEKK; // 0x0
		// static const ::System::Object POCPBOKKLJB; // 0x0
		::System::Void _ctor(::RPG::Client::MonoSpineStoryController* a1, ::RPG::GameCore::ClockParkStoryConfig* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSpineStoryController*, ::RPG::GameCore::ClockParkStoryConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MonoClockParkStoryCharacter* MHIAHPFDLNJ(::System::String* a1)
		{
			return ((::RPG::Client::MonoClockParkStoryCharacter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_MHIAHPFDLNJ_OFFSET))(this, a1);
		}

		::System::Void CPOOENLGJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_CPOOENLGJNA_OFFSET))(this);
		}

		::System::Void NNIABFKELNC(::System::String* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_NNIABFKELNC_OFFSET))(this, a1, a2);
		}

		::System::Void AOGFIOMJMBA(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_AOGFIOMJMBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GAAAFAEOFDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_GAAAFAEOFDI_OFFSET))(this, a1);
		}

		::System::Void MPEHMHMIKPN(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_MPEHMHMIKPN_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_EEBFMFBOIHN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LGPCPPNGCJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_LGPCPPNGCJE_OFFSET))(this);
		}

		::System::Boolean BEOJAPKHOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_BEOJAPKHOAI_OFFSET))(this);
		}

		::System::Void LLPKDPGFEME(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_LLPKDPGFEME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LKFIPBEKPEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_LKFIPBEKPEA_OFFSET))(this, a1);
		}

		::System::Void OICLPOAJEOC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_OICLPOAJEOC_OFFSET))(this, a1, a2);
		}

		::System::Void AKPKBEELJOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_AKPKBEELJOB_OFFSET))(this);
		}

		::System::Void IPAGJBDMKLM(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_IPAGJBDMKLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDNOGFCKBON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_KDNOGFCKBON_OFFSET))(this);
		}

	};

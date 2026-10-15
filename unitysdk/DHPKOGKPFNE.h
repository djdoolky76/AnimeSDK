#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"
class LLPNJOHJIPN;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHPKOGKPFNE_BECKPOEECIA_OFFSET UNITYSDK_OFFSET(0xEBEE120)
#define DHPKOGKPFNE_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEDA50)
#define DHPKOGKPFNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEDAF0)
#define DHPKOGKPFNE_ENGBEMANCNG_OFFSET UNITYSDK_OFFSET(0xEBEE220)
#define DHPKOGKPFNE_FGFBOKNOLPK_OFFSET UNITYSDK_OFFSET(0xEBEE370)
#define DHPKOGKPFNE_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0xEBEE2D0)
#define DHPKOGKPFNE_GLDFDOAGOJG_OFFSET UNITYSDK_OFFSET(0xEBEDDF0)
#define DHPKOGKPFNE_HDAFJHLJJED_OFFSET UNITYSDK_OFFSET(0xEBEE020)
#define DHPKOGKPFNE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEBEDCA0)
#define DHPKOGKPFNE_ODKJBDIKJNB_OFFSET UNITYSDK_OFFSET(0xEBEDD40)

inline static constexpr unsigned int DHPKOGKPFNE_TypeDefinitionIndex = 60770;

	class DHPKOGKPFNE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ScreenTransferReason, ::LLPNJOHJIPN*>* JHMOGMLKONE; // 0x10
		::System::Collections::Generic::List_1<::LLPNJOHJIPN*>* MLHPHHBNHGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ODKJBDIKJNB(::RPG::GameCore::ScreenTransferReason a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_ODKJBDIKJNB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HDAFJHLJJED(::RPG::GameCore::ScreenTransferReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::Func_1<::System::Boolean>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_HDAFJHLJJED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BECKPOEECIA(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_BECKPOEECIA_OFFSET))(this, a1);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_FMPAOKGPMNG_OFFSET))(this);
		}

		::System::Boolean FGFBOKNOLPK(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_FGFBOKNOLPK_OFFSET))(this, a1);
		}

		::LLPNJOHJIPN* ENGBEMANCNG(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::LLPNJOHJIPN*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_ENGBEMANCNG_OFFSET))(this, a1);
		}

		::LLPNJOHJIPN* GLDFDOAGOJG(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::LLPNJOHJIPN*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + DHPKOGKPFNE_GLDFDOAGOJG_OFFSET))(this, a1);
		}

	};

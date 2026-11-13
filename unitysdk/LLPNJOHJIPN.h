#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"
class LLPNJOHJIPN_ADCKFGEMBDH;
namespace RPG::Client { class UIManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLPNJOHJIPN_ALBLEHNEGIE_OFFSET UNITYSDK_OFFSET(0x1AFC23F0)
#define LLPNJOHJIPN_BAOENBILKPB_OFFSET UNITYSDK_OFFSET(0x1AFC2BC0)
#define LLPNJOHJIPN_BECKPOEECIA_OFFSET UNITYSDK_OFFSET(0x1AFC2830)
#define LLPNJOHJIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC1BD0)
#define LLPNJOHJIPN_FGFBOKNOLPK_OFFSET UNITYSDK_OFFSET(0x1AFC2B50)
#define LLPNJOHJIPN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1AFC1C50)
#define LLPNJOHJIPN_HDAFJHLJJED_OFFSET UNITYSDK_OFFSET(0x1AFC26C0)
#define LLPNJOHJIPN_IBNFLPOJPCH_OFFSET UNITYSDK_OFFSET(0x1AFC25C0)
#define LLPNJOHJIPN_IOCMLLELJGM_OFFSET UNITYSDK_OFFSET(0x1AFC2410)
#define LLPNJOHJIPN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1AFC1E10)
#define LLPNJOHJIPN_ODKJBDIKJNB_OFFSET UNITYSDK_OFFSET(0x1AFC24B0)
#define LLPNJOHJIPN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1AFC1CB0)

inline static constexpr unsigned int LLPNJOHJIPN_TypeDefinitionIndex = 62148;

	class LLPNJOHJIPN : public ::System::Object
	{
	public:
		::RPG::Client::UIManager* IGGHFMJPHHH; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* OMKCCADAKDC; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* IFMDBDJCCCI; // 0x20
		::System::Boolean FKBCNNMKDNE; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ScreenTransferReason HBOPBCMODIE; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ODKJBDIKJNB(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_ODKJBDIKJNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HDAFJHLJJED(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_HDAFJHLJJED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IBNFLPOJPCH(::LLPNJOHJIPN_ADCKFGEMBDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLPNJOHJIPN_ADCKFGEMBDH*))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_IBNFLPOJPCH_OFFSET))(this, a1);
		}

		::System::Void BECKPOEECIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_BECKPOEECIA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean FGFBOKNOLPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_FGFBOKNOLPK_OFFSET))(this);
		}

		::System::Boolean IOCMLLELJGM(::LLPNJOHJIPN_ADCKFGEMBDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLPNJOHJIPN_ADCKFGEMBDH*))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_IOCMLLELJGM_OFFSET))(this, a1);
		}

		::System::Boolean ALBLEHNEGIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_ALBLEHNEGIE_OFFSET))(this);
		}

		::System::Boolean BAOENBILKPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_BAOENBILKPB_OFFSET))(this);
		}

	};

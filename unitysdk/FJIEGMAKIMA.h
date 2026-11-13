#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIEGMAKIMA_EDPIDFIGIIE;
class FJIEGMAKIMA_LMKGCKHMBLP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace RPG::GameCore { class TrainPartyPerformanceActionConfig; }
namespace RPG::GameCore { class TrainPartyPerformanceConfig; }
namespace RPG::GameCore { class TrainPartyPerformanceFreeStyleAction; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJIEGMAKIMA_BAEEJJFAKBE_OFFSET UNITYSDK_OFFSET(0x1982A4F0)
#define FJIEGMAKIMA_BDDAMBPMBEF_OFFSET UNITYSDK_OFFSET(0x1982C940)
#define FJIEGMAKIMA_CJCFHGLIEJO_OFFSET UNITYSDK_OFFSET(0x198296F0)
#define FJIEGMAKIMA_CTOR_OFFSET UNITYSDK_OFFSET(0x19827F20)
#define FJIEGMAKIMA_DFIBCFOOAGB_OFFSET UNITYSDK_OFFSET(0x1982CCE0)
#define FJIEGMAKIMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19828510)
#define FJIEGMAKIMA_ELPEIKAPJJP_OFFSET UNITYSDK_OFFSET(0x198283E0)
#define FJIEGMAKIMA_EMBDHBMPLJB_OFFSET UNITYSDK_OFFSET(0x1982CDE0)
#define FJIEGMAKIMA_HJHLHLMFKFC_OFFSET UNITYSDK_OFFSET(0x1982B110)
#define FJIEGMAKIMA_IAINDOMHOFL_OFFSET UNITYSDK_OFFSET(0x1982B670)
#define FJIEGMAKIMA_IDIILJKGKCJ_OFFSET UNITYSDK_OFFSET(0x1982BEF0)
#define FJIEGMAKIMA_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x198292B0)
#define FJIEGMAKIMA_INGJECPJHNB_OFFSET UNITYSDK_OFFSET(0x1982A310)
#define FJIEGMAKIMA_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0x19829C70)
#define FJIEGMAKIMA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19829E60)
#define FJIEGMAKIMA_KFNLLOPDPAN_OFFSET UNITYSDK_OFFSET(0x1982BC20)
#define FJIEGMAKIMA_KPLNGONDAEL_OFFSET UNITYSDK_OFFSET(0x1982B320)
#define FJIEGMAKIMA_LALJAEILOHL_OFFSET UNITYSDK_OFFSET(0x1982B190)
#define FJIEGMAKIMA_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x1982C780)
#define FJIEGMAKIMA_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1982C720)
#define FJIEGMAKIMA_MCCINJEOEAP_OFFSET UNITYSDK_OFFSET(0x1982CDD0)
#define FJIEGMAKIMA_MHIAHPFDLNJ_OFFSET UNITYSDK_OFFSET(0x1982B240)
#define FJIEGMAKIMA_MJGBMCCEAGF_OFFSET UNITYSDK_OFFSET(0x1982AB60)
#define FJIEGMAKIMA_NEBEJEDJKOK_OFFSET UNITYSDK_OFFSET(0x1982C2C0)
#define FJIEGMAKIMA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x19828DC0)
#define FJIEGMAKIMA_OPOHJGEKAFD_OFFSET UNITYSDK_OFFSET(0x1982CDC0)
#define FJIEGMAKIMA_PFLGKAEFPAK_1_OFFSET UNITYSDK_OFFSET(0x1982C660)
#define FJIEGMAKIMA_PFLGKAEFPAK_OFFSET UNITYSDK_OFFSET(0x1982C530)

inline static constexpr unsigned int FJIEGMAKIMA_TypeDefinitionIndex = 61510;

	class FJIEGMAKIMA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CCECMIKFAME; // 0x10
		::RPG::GameCore::GameEntity* GCLKOPKEMIM; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* GDECGHHGCMP; // 0x20
		::RPG::GameCore::TrainPartyPerformanceConfig* AGMKGBMNMLM; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*>* BJJOONFGFLF; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* OFGPCNKAMGJ; // 0x38
		::FJIEGMAKIMA_LMKGCKHMBLP* BEHHICMOFIE; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* GHBIIAMPHLI; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* PKNPOPDANNH; // 0x50
		::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NMMHJPOOPEB; // 0x60
		::RPG::GameCore::TrainPartyPerformanceActionConfig* OINLNFFMJHH; // 0x68
		::System::Single IBOFDHDNGFD; // 0x70
		::System::Boolean EJDEKKEOHBE; // 0x74
		::System::Boolean GOFKAELMOPB; // 0x75
		// static const ::System::String* IICCONAJCCP; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DISPOSE_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void CJCFHGLIEJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_CJCFHGLIEJO_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_IOIMEFFNGDH_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyPerformanceFreeStyleAction* HJHLHLMFKFC(::System::String* a1)
		{
			return ((::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_HJHLHLMFKFC_OFFSET))(this, a1);
		}

		::System::Boolean LALJAEILOHL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LALJAEILOHL_OFFSET))(this, a1);
		}

		::FJIEGMAKIMA_EDPIDFIGIIE* MHIAHPFDLNJ(::System::String* a1)
		{
			return ((::FJIEGMAKIMA_EDPIDFIGIIE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_MHIAHPFDLNJ_OFFSET))(this, a1);
		}

		::System::Void KPLNGONDAEL(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_KPLNGONDAEL_OFFSET))(this, a1);
		}

		::System::Void IAINDOMHOFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_IAINDOMHOFL_OFFSET))(this, a1);
		}

		::System::Void ELPEIKAPJJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_ELPEIKAPJJP_OFFSET))(this);
		}

		::System::Void BAEEJJFAKBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_BAEEJJFAKBE_OFFSET))(this);
		}

		::System::Void MJGBMCCEAGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_MJGBMCCEAGF_OFFSET))(this);
		}

		::System::Void KFNLLOPDPAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_KFNLLOPDPAN_OFFSET))(this);
		}

		::System::Void IDIILJKGKCJ(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_IDIILJKGKCJ_OFFSET))(this, a1);
		}

		::System::Void INGJECPJHNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_INGJECPJHNB_OFFSET))(this);
		}

		::System::Void NEBEJEDJKOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_NEBEJEDJKOK_OFFSET))(this);
		}

		static ::System::Int32 PFLGKAEFPAK(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_PFLGKAEFPAK_OFFSET))(a1, a2);
		}

		static ::System::Int32 PFLGKAEFPAK_1(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_PFLGKAEFPAK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LCJMKJPECAP(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LCJMKJPECAP_OFFSET))(a1, a2);
		}

		static ::System::Boolean LCJMKJPECAP_1(::RPG::GameCore::TrainPartyPerformance* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TrainPartyPerformance*, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LCJMKJPECAP_1_OFFSET))(a1, a2);
		}

		static ::System::Void BDDAMBPMBEF(::System::Collections::Generic::List_1<::System::Object*>* a1, ::RPG::GameCore::TrainPartyPerformance* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::TrainPartyPerformance*, ::System::UInt32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_BDDAMBPMBEF_OFFSET))(a1, a2, a3);
		}

		::System::Void DFIBCFOOAGB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFIBCFOOAGB_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyPerformanceConfig* OPOHJGEKAFD()
		{
			return ((::RPG::GameCore::TrainPartyPerformanceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_OPOHJGEKAFD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* MCCINJEOEAP()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_MCCINJEOEAP_OFFSET))(this);
		}

		::System::Boolean EMBDHBMPLJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EMBDHBMPLJB_OFFSET))(this);
		}

	};

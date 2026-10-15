#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"
class CKAPDOPHKJB;
namespace RPG::Client { template <typename T> class LoadingTipsRandomPool_1; }
namespace RPG::GameCore { class LoadingDescRow; }
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMGGIDLICBO_BJCJMIHHPLN_OFFSET UNITYSDK_OFFSET(0xFEB8340)
#define DMGGIDLICBO_CBEHMJHPNED_OFFSET UNITYSDK_OFFSET(0xFEB9CB0)
#define DMGGIDLICBO_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB8120)
#define DMGGIDLICBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEB86B0)
#define DMGGIDLICBO_EEBBJAIGJDO_OFFSET UNITYSDK_OFFSET(0xFEB7BB0)
#define DMGGIDLICBO_FGKIJNFGPHJ_OFFSET UNITYSDK_OFFSET(0xFEB9AD0)
#define DMGGIDLICBO_FLOCDIBINPI_OFFSET UNITYSDK_OFFSET(0xFEB9B20)
#define DMGGIDLICBO_FMMICHDNGJJ_OFFSET UNITYSDK_OFFSET(0xFEB7DF0)
#define DMGGIDLICBO_GNOBFPBCHPK_OFFSET UNITYSDK_OFFSET(0xFEB9C30)
#define DMGGIDLICBO_IHOHEKNBHMM_OFFSET UNITYSDK_OFFSET(0xFEB9BC0)
#define DMGGIDLICBO_INIJEADAIIM_OFFSET UNITYSDK_OFFSET(0xFEB8940)
#define DMGGIDLICBO_JFDIDKMDAKP_OFFSET UNITYSDK_OFFSET(0xFEB8030)
#define DMGGIDLICBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFEB83A0)
#define DMGGIDLICBO_LNCCMLHABBO_OFFSET UNITYSDK_OFFSET(0xFEB7910)
#define DMGGIDLICBO_MKCBFCKIMKK_OFFSET UNITYSDK_OFFSET(0xFEB7A50)
#define DMGGIDLICBO_NLHCEANMIPB_OFFSET UNITYSDK_OFFSET(0xFEB7B00)
#define DMGGIDLICBO_PIFKDBBEKFH_OFFSET UNITYSDK_OFFSET(0xFEB9720)
#define DMGGIDLICBO_PODPNMOLIEO_OFFSET UNITYSDK_OFFSET(0xFEB8B00)

inline static constexpr unsigned int DMGGIDLICBO_TypeDefinitionIndex = 65763;

	class DMGGIDLICBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>* POOCEABNNJA; // 0x10
		::RPG::GameCore::LoadingFuncConfigRow* IHGEMOBNFLB; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* CDHOJLJIFGC; // 0x20
		::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* PIBAENJHBJH; // 0x28
		::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* DNEMDCOPOJA; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>*>* KKOHGABGELH; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* KGFECCHFLBL; // 0x40
		::RPG::GameCore::GameModeType GICHGNGMBGD; // 0x48
		::System::UInt32 CGNMMODPMMN; // 0x4C
		::System::Int32 AMNHGOGKBEP; // 0x50
		::System::Boolean EBLPKIOGNCF; // 0x54
		::System::Byte _padding0[0x3];
		::System::UInt32 CCCAHOHOGBE; // 0x58
		::System::UInt32 MLKDMLFAMJC; // 0x5C
		::System::UInt32 CLHLFGJGGCH; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_CTOR_OFFSET))(this);
		}

		::System::Boolean LNCCMLHABBO(::CKAPDOPHKJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKAPDOPHKJB*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_LNCCMLHABBO_OFFSET))(this, a1);
		}

		::System::Boolean MKCBFCKIMKK(::Il2CppArray<::CKAPDOPHKJB*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::CKAPDOPHKJB*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMGGIDLICBO_MKCBFCKIMKK_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLHCEANMIPB(::Il2CppArray<::CKAPDOPHKJB*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::CKAPDOPHKJB*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMGGIDLICBO_NLHCEANMIPB_OFFSET))(this, a1, a2);
		}

		::System::Boolean EEBBJAIGJDO(::Il2CppArray<::CKAPDOPHKJB*>* a1, ::Il2CppArray<::CKAPDOPHKJB*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::CKAPDOPHKJB*>*, ::Il2CppArray<::CKAPDOPHKJB*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMGGIDLICBO_EEBBJAIGJDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* FMMICHDNGJJ()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_FMMICHDNGJJ_OFFSET))(this);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* JFDIDKMDAKP(::Il2CppArray<::CKAPDOPHKJB*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::Il2CppArray<::CKAPDOPHKJB*>*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_JFDIDKMDAKP_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_DISPOSE_OFFSET))(this);
		}

		::System::Void INIJEADAIIM(::RPG::GameCore::LoadingFuncConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_INIJEADAIIM_OFFSET))(this, a1);
		}

		::System::Void FGKIJNFGPHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGGIDLICBO_FGKIJNFGPHJ_OFFSET))(this, a1);
		}

		::System::Void BJCJMIHHPLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_BJCJMIHHPLN_OFFSET))(this);
		}

		::RPG::GameCore::LoadingDescRow* FLOCDIBINPI()
		{
			return ((::RPG::GameCore::LoadingDescRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_FLOCDIBINPI_OFFSET))(this);
		}

		::System::Void PODPNMOLIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_PODPNMOLIEO_OFFSET))(this);
		}

		::System::Void PIFKDBBEKFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGIDLICBO_PIFKDBBEKFH_OFFSET))(this);
		}

		::System::Boolean IHOHEKNBHMM(::RPG::GameCore::LoadingDescRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_IHOHEKNBHMM_OFFSET))(this, a1);
		}

		::System::Boolean GNOBFPBCHPK(::RPG::GameCore::LoadingDescRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_GNOBFPBCHPK_OFFSET))(this, a1);
		}

		::System::Boolean CBEHMJHPNED(::RPG::GameCore::LoadingDescRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + DMGGIDLICBO_CBEHMJHPNED_OFFSET))(this, a1);
		}

	};

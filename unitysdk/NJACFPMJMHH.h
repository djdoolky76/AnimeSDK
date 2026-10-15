#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
class BMICACAAOGP;
class LBOKPEKBPOK;
class NJACFPMJMHH_MOAPAEFODJF;
class OLAPJIKMNMH;
class OPBCNNEEFPP;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJACFPMJMHH_AFFAOINPEKE_OFFSET UNITYSDK_OFFSET(0xBC07BB0)
#define NJACFPMJMHH_AOKGMABPCBG_OFFSET UNITYSDK_OFFSET(0xBC07C70)
#define NJACFPMJMHH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC08D00)
#define NJACFPMJMHH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC08C20)
#define NJACFPMJMHH_FNGMJKBCCEH_OFFSET UNITYSDK_OFFSET(0xBC07310)
#define NJACFPMJMHH_GGOJMDBNJEI_OFFSET UNITYSDK_OFFSET(0xBC07E50)
#define NJACFPMJMHH_HOKEILEDOFO_OFFSET UNITYSDK_OFFSET(0xBC078C0)
#define NJACFPMJMHH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC072C0)
#define NJACFPMJMHH_MHIFBILEMNG_OFFSET UNITYSDK_OFFSET(0xBC07970)
#define NJACFPMJMHH_OKIDGFKENNB_OFFSET UNITYSDK_OFFSET(0xBC08330)

	class NJACFPMJMHH : public ::System::Object
	{
	public:
		::OPBCNNEEFPP* NPMFLJPODJF; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IVec2, ::System::Object*>* ADKMOGEDHKN; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* BGGLCMPFICA; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* NJOJNADLJMN; // 0x28
		static ::Il2CppArray<::RPG::GameCore::IVec2>** StaticGet_GCLOMHAEOIN()
		{
			return (::Il2CppArray<::RPG::GameCore::IVec2>**)UnitySDK::FromName("", "NJACFPMJMHH")->GetStaticField(0x41110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACFPMJMHH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJACFPMJMHH_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::OPBCNNEEFPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPBCNNEEFPP*))((::PBYTE)hIl2Cpp + NJACFPMJMHH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Int32 FNGMJKBCCEH(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::LBOKPEKBPOK*>* a5, ::Il2CppArray<::LBOKPEKBPOK*>* a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::LBOKPEKBPOK*>*, ::Il2CppArray<::LBOKPEKBPOK*>*))((::PBYTE)hIl2Cpp + NJACFPMJMHH_FNGMJKBCCEH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GGOJMDBNJEI(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + NJACFPMJMHH_GGOJMDBNJEI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OKIDGFKENNB(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::OLAPJIKMNMH* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::OLAPJIKMNMH*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + NJACFPMJMHH_OKIDGFKENNB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HOKEILEDOFO(::BMICACAAOGP* a1, ::Il2CppArray<::LBOKPEKBPOK*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMICACAAOGP*, ::Il2CppArray<::LBOKPEKBPOK*>*))((::PBYTE)hIl2Cpp + NJACFPMJMHH_HOKEILEDOFO_OFFSET))(this, a1, a2);
		}

		::System::Void MHIFBILEMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACFPMJMHH_MHIFBILEMNG_OFFSET))(this);
		}

		::System::Void AOKGMABPCBG(::NJACFPMJMHH_MOAPAEFODJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJACFPMJMHH_MOAPAEFODJF*))((::PBYTE)hIl2Cpp + NJACFPMJMHH_AOKGMABPCBG_OFFSET))(this, a1);
		}

		::NJACFPMJMHH_MOAPAEFODJF* AFFAOINPEKE()
		{
			return ((::NJACFPMJMHH_MOAPAEFODJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACFPMJMHH_AFFAOINPEKE_OFFSET))(this);
		}

	};

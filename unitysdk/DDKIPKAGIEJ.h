#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class DFGDEHAHLHC;
class FDPALAEIHPB;
class GFHCKBHCNDF;
class HJNDPHEDAGM;
class LIJFHHMGBFE;
class LKOGAEABGPB;
class MBDOBECHOJA;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDKIPKAGIEJ_ABONHDEGHKN_OFFSET UNITYSDK_OFFSET(0x1C9F2340)
#define DDKIPKAGIEJ_ADDPLECFENK_OFFSET UNITYSDK_OFFSET(0x1C9F35D0)
#define DDKIPKAGIEJ_AFKJEMONJHJ_OFFSET UNITYSDK_OFFSET(0x1C9EFAA0)
#define DDKIPKAGIEJ_AHKDALFEKDM_OFFSET UNITYSDK_OFFSET(0x1C9F40F0)
#define DDKIPKAGIEJ_BIKCBEDLOFB_OFFSET UNITYSDK_OFFSET(0x1C9F3BD0)
#define DDKIPKAGIEJ_CAMEOIBPPLO_OFFSET UNITYSDK_OFFSET(0x1C9EE9B0)
#define DDKIPKAGIEJ_CCCDODFBNKC_OFFSET UNITYSDK_OFFSET(0x1C9F3E80)
#define DDKIPKAGIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9ED610)
#define DDKIPKAGIEJ_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0x1C9EDDF0)
#define DDKIPKAGIEJ_DKLHIKNMLDJ_OFFSET UNITYSDK_OFFSET(0x1C9F1E30)
#define DDKIPKAGIEJ_EJCJIBGHCHA_OFFSET UNITYSDK_OFFSET(0x1C9F5470)
#define DDKIPKAGIEJ_FDBGHGGLNKK_OFFSET UNITYSDK_OFFSET(0x1C9F0030)
#define DDKIPKAGIEJ_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0x1C9F5EA0)
#define DDKIPKAGIEJ_HNEPEICCNAA_OFFSET UNITYSDK_OFFSET(0x1C9EF240)
#define DDKIPKAGIEJ_IOBONMAGIND_OFFSET UNITYSDK_OFFSET(0x1C9F5C60)
#define DDKIPKAGIEJ_KGDOOKGEFLI_OFFSET UNITYSDK_OFFSET(0x1C9EF690)
#define DDKIPKAGIEJ_LDAIKFPEMDF_1_OFFSET UNITYSDK_OFFSET(0x1C9F0910)
#define DDKIPKAGIEJ_LDAIKFPEMDF_OFFSET UNITYSDK_OFFSET(0x1C9EE0E0)
#define DDKIPKAGIEJ_LFDNHHNNOPN_OFFSET UNITYSDK_OFFSET(0x1C9EEDB0)
#define DDKIPKAGIEJ_LGGBGCKDLHK_OFFSET UNITYSDK_OFFSET(0x1C9F6820)
#define DDKIPKAGIEJ_LJFNKIAINEK_OFFSET UNITYSDK_OFFSET(0x1C9F1840)
#define DDKIPKAGIEJ_LJIPCMPLEKB_1_OFFSET UNITYSDK_OFFSET(0x1C9EDA60)
#define DDKIPKAGIEJ_LJIPCMPLEKB_OFFSET UNITYSDK_OFFSET(0x1C9ED6C0)
#define DDKIPKAGIEJ_LMPNNHBIPJH_OFFSET UNITYSDK_OFFSET(0x1C9F0810)
#define DDKIPKAGIEJ_MLGACGCPCNG_OFFSET UNITYSDK_OFFSET(0x1C9F28A0)
#define DDKIPKAGIEJ_NMEKHOAOLGE_OFFSET UNITYSDK_OFFSET(0x1C9F6270)
#define DDKIPKAGIEJ_OHNBFEDLMHL_OFFSET UNITYSDK_OFFSET(0x1C9F4990)
#define DDKIPKAGIEJ_OKKFBKBFENK_OFFSET UNITYSDK_OFFSET(0x1C9F5340)
#define DDKIPKAGIEJ_OOGLONHILEK_OFFSET UNITYSDK_OFFSET(0x1C9F0280)
#define DDKIPKAGIEJ_PHIDANPEMKM_OFFSET UNITYSDK_OFFSET(0x1C9F4B10)

inline static constexpr unsigned int DDKIPKAGIEJ_TypeDefinitionIndex = 42191;

	class DDKIPKAGIEJ : public ::HLFHMKMJNPK
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*>* FPMBPKCJLKN; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::HJNDPHEDAGM* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::HJNDPHEDAGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::HJNDPHEDAGM*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::DFGDEHAHLHC* LJIPCMPLEKB(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LJIPCMPLEKB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DFGDEHAHLHC* LJIPCMPLEKB_1(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LJIPCMPLEKB_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DHMJMEBEBNB(::DFGDEHAHLHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_DHMJMEBEBNB_OFFSET))(this, a1);
		}

		::System::Void LDAIKFPEMDF(::GFHCKBHCNDF* a1, ::LKOGAEABGPB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::LKOGAEABGPB*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LDAIKFPEMDF_OFFSET))(this, a1, a2);
		}

		::System::Void LDAIKFPEMDF_1(::GFHCKBHCNDF* a1, ::MBDOBECHOJA* a2, ::LKOGAEABGPB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::MBDOBECHOJA*, ::LKOGAEABGPB*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LDAIKFPEMDF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ADDPLECFENK(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::LKOGAEABGPB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::LKOGAEABGPB*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_ADDPLECFENK_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* BIKCBEDLOFB(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_BIKCBEDLOFB_OFFSET))(this, a1);
		}

		::System::Void ABONHDEGHKN(::GFHCKBHCNDF* a1, ::MBDOBECHOJA* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::MBDOBECHOJA*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_ABONHDEGHKN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void MLGACGCPCNG(::GFHCKBHCNDF* a1, ::MBDOBECHOJA* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::MBDOBECHOJA*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_MLGACGCPCNG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LJFNKIAINEK(::GFHCKBHCNDF* a1, ::MBDOBECHOJA* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::MBDOBECHOJA*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LJFNKIAINEK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DKLHIKNMLDJ(::GFHCKBHCNDF* a1, ::MBDOBECHOJA* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::MBDOBECHOJA*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_DKLHIKNMLDJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::DFGDEHAHLHC* AHKDALFEKDM(::GFHCKBHCNDF* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::LIJFHHMGBFE* a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a7, ::System::Int32 a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::UInt32 a12, ::System::Nullable_1<::UnityEngine::Vector3> a13)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::LIJFHHMGBFE*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_AHKDALFEKDM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::DFGDEHAHLHC* PHIDANPEMKM(::GFHCKBHCNDF* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::LIJFHHMGBFE* a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a7, ::System::Int32 a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Nullable_1<::UnityEngine::Vector3> a11)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::LIJFHHMGBFE*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_PHIDANPEMKM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void CAMEOIBPPLO(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_CAMEOIBPPLO_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void CCCDODFBNKC(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_CCCDODFBNKC_OFFSET))(a1, a2);
		}

		::System::Void FDBGHGGLNKK(::GFHCKBHCNDF* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_FDBGHGGLNKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KGDOOKGEFLI(::GFHCKBHCNDF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_KGDOOKGEFLI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AFKJEMONJHJ(::GFHCKBHCNDF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_AFKJEMONJHJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LFDNHHNNOPN(::GFHCKBHCNDF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LFDNHHNNOPN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HNEPEICCNAA(::GFHCKBHCNDF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_HNEPEICCNAA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Il2CppArray<::System::UInt32>* OKKFBKBFENK(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_OKKFBKBFENK_OFFSET))(this, a1);
		}

		::DFGDEHAHLHC* NMEKHOAOLGE(::GFHCKBHCNDF* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::UInt32 a9)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_NMEKHOAOLGE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::DFGDEHAHLHC* LGGBGCKDLHK(::GFHCKBHCNDF* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LGGBGCKDLHK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void OHNBFEDLMHL(::DFGDEHAHLHC* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::DFGDEHAHLHC*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_OHNBFEDLMHL_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* EJCJIBGHCHA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_EJCJIBGHCHA_OFFSET))(this, a1, a2);
		}

		::DFGDEHAHLHC* IOBONMAGIND(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_IOBONMAGIND_OFFSET))(this, a1);
		}

		::DFGDEHAHLHC* FDFIBKPPJDK(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_FDFIBKPPJDK_OFFSET))(this, a1);
		}

		::DFGDEHAHLHC* OOGLONHILEK(::GFHCKBHCNDF* a1, ::LKOGAEABGPB* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::System::UInt32>* a6, ::System::Boolean a7, ::System::UInt32 a8, ::Il2CppArray<::System::UInt32>* a9, ::Il2CppArray<::System::UInt32>* a10)
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID, ::GFHCKBHCNDF*, ::LKOGAEABGPB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_OOGLONHILEK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::DFGDEHAHLHC* LMPNNHBIPJH()
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIPKAGIEJ_LMPNNHBIPJH_OFFSET))(this);
		}

	};

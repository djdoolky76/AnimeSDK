#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/NNEFANGOPNK.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LPBCNFBMCJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4C160)
#define LPBCNFBMCJK_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4C200)
#define LPBCNFBMCJK_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C4C2C0)
#define LPBCNFBMCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4C110)
#define LPBCNFBMCJK_FODAAJJGAGL_OFFSET UNITYSDK_OFFSET(0x1DD6F380)
#define LPBCNFBMCJK_GCPFJFHGCJA_1_OFFSET UNITYSDK_OFFSET(0x3C4C410)
#define LPBCNFBMCJK_GCPFJFHGCJA_2_OFFSET UNITYSDK_OFFSET(0x3C4C420)
#define LPBCNFBMCJK_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x3C4C400)
#define LPBCNFBMCJK_GDPPHFKNIPF_OFFSET UNITYSDK_OFFSET(0x3C4C430)
#define LPBCNFBMCJK_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4C450)
#define LPBCNFBMCJK_JNOBFOBKDBM_OFFSET UNITYSDK_OFFSET(0x3C4C390)
#define LPBCNFBMCJK_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4C490)
#define LPBCNFBMCJK_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C4C500)
#define LPBCNFBMCJK_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C4C4F0)
#define LPBCNFBMCJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4C530)

inline static constexpr unsigned int LPBCNFBMCJK_TypeDefinitionIndex = 6290;

	struct alignas(4) LPBCNFBMCJK
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::RPG::MVector3 IIGAMHGPKGE; // 0x1C
		::RPG::MVector3 KBBHCJKLPHH; // 0x28
		::RPG::MVector3 IPBPEPCGLML; // 0x34
		::RPG::MVector3 JKGICKONCKE; // 0x40
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::NNEFANGOPNK a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNEFANGOPNK))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::NNEFANGOPNK a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNEFANGOPNK))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_CTOR_3_OFFSET))(this, a1);
		}

		/*
		static ::LPBCNFBMCJK FODAAJJGAGL(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1)
		{
			return ((::LPBCNFBMCJK(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_FODAAJJGAGL_OFFSET))(a1);
		}
		*/

		::RPG::MVector3 JNOBFOBKDBM(::System::Int32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_JNOBFOBKDBM_OFFSET))(this, a1);
		}

		::System::Void GCPFJFHGCJA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::RPG::MVector3 a7, ::RPG::MVector3 a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_GCPFJFHGCJA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Il2CppArray<::RPG::MVector3>* GCPFJFHGCJA_1()
		{
			return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_GCPFJFHGCJA_1_OFFSET))(this);
		}

		::System::Void GCPFJFHGCJA_2(::Il2CppArray<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_GCPFJFHGCJA_2_OFFSET))(this, a1);
		}

		::System::Single GDPPHFKNIPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_GDPPHFKNIPF_OFFSET))(this);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBCNFBMCJK_TOSTRING_OFFSET))(this);
		}

	};

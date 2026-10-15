#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJJHGJOGOP.h"
#include "unitysdk/RPG/MVector2.h"

#define AMNHOAGPGNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDF6E0)
#define AMNHOAGPGNI_EINLLJGEKJK_1_OFFSET UNITYSDK_OFFSET(0x1DCDFB70)
#define AMNHOAGPGNI_EINLLJGEKJK_OFFSET UNITYSDK_OFFSET(0x1DCDFB30)
#define AMNHOAGPGNI_HCILLEICKGK_OFFSET UNITYSDK_OFFSET(0x1DCDFD20)
#define AMNHOAGPGNI_JCFKEDOHDJE_1_OFFSET UNITYSDK_OFFSET(0x1DCDF9C0)
#define AMNHOAGPGNI_JCFKEDOHDJE_OFFSET UNITYSDK_OFFSET(0x1DCDF840)
#define AMNHOAGPGNI_JCJACJDBPMP_1_OFFSET UNITYSDK_OFFSET(0x1DCDF790)
#define AMNHOAGPGNI_JCJACJDBPMP_OFFSET UNITYSDK_OFFSET(0x1DCDF6F0)
#define AMNHOAGPGNI_JNFHDCCLDCO_OFFSET UNITYSDK_OFFSET(0x1DCDF820)
#define AMNHOAGPGNI_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1DCDFDB0)

inline static constexpr unsigned int AMNHOAGPGNI_TypeDefinitionIndex = 6303;

	class AMNHOAGPGNI : public ::GPJJHGJOGOP
	{
	public:
		::Il2CppArray<::RPG::MVector2>* PFJAFOFKGKL; // 0x10
		static ::System::Single* StaticGet_NKHLMJGGKEM()
		{
			return (::System::Single*)UnitySDK::FromName("", "AMNHOAGPGNI")->GetStaticField(0x9BE0);
		}

		::System::Void _ctor(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 JCJACJDBPMP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_JCJACJDBPMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JCJACJDBPMP_1(::RPG::MVector2 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_JCJACJDBPMP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JCFKEDOHDJE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_JCFKEDOHDJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 JCFKEDOHDJE_1(::RPG::MVector2 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_JCFKEDOHDJE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EINLLJGEKJK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_EINLLJGEKJK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EINLLJGEKJK_1(::RPG::MVector2 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_EINLLJGEKJK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single MLKPOHLOJKI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_MLKPOHLOJKI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single JNFHDCCLDCO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_JNFHDCCLDCO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single HCILLEICKGK(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMNHOAGPGNI_HCILLEICKGK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

	};

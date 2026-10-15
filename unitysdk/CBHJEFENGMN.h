#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJJHGJOGOP.h"
#include "unitysdk/RPG/MVector3.h"

#define CBHJEFENGMN_BNKIMIMMJPD_OFFSET UNITYSDK_OFFSET(0x1DCE7160)
#define CBHJEFENGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE6800)
#define CBHJEFENGMN_HCILLEICKGK_OFFSET UNITYSDK_OFFSET(0x1DCE69D0)
#define CBHJEFENGMN_LBKEGNAHOOA_1_OFFSET UNITYSDK_OFFSET(0x1DCE6C90)
#define CBHJEFENGMN_LBKEGNAHOOA_OFFSET UNITYSDK_OFFSET(0x1DCE6C50)
#define CBHJEFENGMN_MIFDNODGFCP_1_OFFSET UNITYSDK_OFFSET(0x1DCE6B70)
#define CBHJEFENGMN_MIFDNODGFCP_OFFSET UNITYSDK_OFFSET(0x1DCE6A60)
#define CBHJEFENGMN_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1DCE7360)
#define CBHJEFENGMN_PHFIGIBFGKD_1_OFFSET UNITYSDK_OFFSET(0x1DCE6850)
#define CBHJEFENGMN_PHFIGIBFGKD_OFFSET UNITYSDK_OFFSET(0x1DCE6810)

inline static constexpr unsigned int CBHJEFENGMN_TypeDefinitionIndex = 6304;

	class CBHJEFENGMN : public ::GPJJHGJOGOP
	{
	public:
		::Il2CppArray<::RPG::MVector3>* PFJAFOFKGKL; // 0x10
		static ::System::Single* StaticGet_NKHLMJGGKEM()
		{
			return (::System::Single*)UnitySDK::FromName("", "CBHJEFENGMN")->GetStaticField(0x9D50);
		}

		::System::Void _ctor(::Il2CppArray<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + CBHJEFENGMN_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 PHFIGIBFGKD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_PHFIGIBFGKD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 PHFIGIBFGKD_1(::RPG::MVector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_PHFIGIBFGKD_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 MIFDNODGFCP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_MIFDNODGFCP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 MIFDNODGFCP_1(::RPG::MVector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector3, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_MIFDNODGFCP_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 LBKEGNAHOOA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_LBKEGNAHOOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 LBKEGNAHOOA_1(::RPG::MVector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector3, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHJEFENGMN_LBKEGNAHOOA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single MLKPOHLOJKI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CBHJEFENGMN_MLKPOHLOJKI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single HCILLEICKGK(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CBHJEFENGMN_HCILLEICKGK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Single BNKIMIMMJPD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::Single a15, ::System::Single a16)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CBHJEFENGMN_BNKIMIMMJPD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

	};

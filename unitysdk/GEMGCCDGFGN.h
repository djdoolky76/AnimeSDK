#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJAABNBJMEH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HPKBKDHCLKJ;
class OGACEIDNOBC;
namespace System { class String; }

#define GEMGCCDGFGN_BAODNCIJEGG_OFFSET UNITYSDK_OFFSET(0x1E015400)
#define GEMGCCDGFGN_BJNEBGDBCHK_OFFSET UNITYSDK_OFFSET(0x1E014A40)
#define GEMGCCDGFGN_BPOCHFJMPBH_OFFSET UNITYSDK_OFFSET(0x1E0141F0)
#define GEMGCCDGFGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E013970)
#define GEMGCCDGFGN_COFGNBGLFCJ_OFFSET UNITYSDK_OFFSET(0x1E014BC0)
#define GEMGCCDGFGN_ENMIPOPKOOL_OFFSET UNITYSDK_OFFSET(0x1E014470)
#define GEMGCCDGFGN_FLDMMKNMMFD_OFFSET UNITYSDK_OFFSET(0x1E014E80)
#define GEMGCCDGFGN_FPKEKBPFADG_OFFSET UNITYSDK_OFFSET(0x1E014010)
#define GEMGCCDGFGN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1E0138E0)
#define GEMGCCDGFGN_GAIIEKKJCDJ_OFFSET UNITYSDK_OFFSET(0x1E014670)
#define GEMGCCDGFGN_GEICDJMJMIM_OFFSET UNITYSDK_OFFSET(0x1E015140)
#define GEMGCCDGFGN_HCJKDMDAIEA_OFFSET UNITYSDK_OFFSET(0x1E014880)
#define GEMGCCDGFGN_IDGHMONBHOG_OFFSET UNITYSDK_OFFSET(0x1E014580)
#define GEMGCCDGFGN_JBHMKEIJDEE_OFFSET UNITYSDK_OFFSET(0x1E0140D0)
#define GEMGCCDGFGN_JEAKOAACJOJ_OFFSET UNITYSDK_OFFSET(0x1E0147C0)
#define GEMGCCDGFGN_JJPAEGNHPBF_OFFSET UNITYSDK_OFFSET(0x1E014790)
#define GEMGCCDGFGN_LKHDCCLDLGG_OFFSET UNITYSDK_OFFSET(0x1E0148C0)
#define GEMGCCDGFGN_OJDOGPAIHNA_OFFSET UNITYSDK_OFFSET(0x1E013960)
#define GEMGCCDGFGN_PJKFLONMKED_OFFSET UNITYSDK_OFFSET(0x1E014370)

inline static constexpr unsigned int GEMGCCDGFGN_TypeDefinitionIndex = 10822;

	class GEMGCCDGFGN : public ::System::Object
	{
	public:
		static ::OGACEIDNOBC** StaticGet_GGGKDEHGFAC()
		{
			return (::OGACEIDNOBC**)UnitySDK::FromName("", "GEMGCCDGFGN")->GetStaticField(0xEB30);
		}

		static ::HPKBKDHCLKJ** StaticGet_ANBOKMHDDGC()
		{
			return (::HPKBKDHCLKJ**)UnitySDK::FromName("", "GEMGCCDGFGN")->GetStaticField(0xEB38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEMGCCDGFGN_CCTOR_OFFSET))();
		}

		static ::JJAABNBJMEH FPKLDCGAJGP(::System::String* a1)
		{
			return ((::JJAABNBJMEH(*)(::System::String*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_FPKLDCGAJGP_OFFSET))(a1);
		}

		static ::System::String* OJDOGPAIHNA(::JJAABNBJMEH a1)
		{
			return ((::System::String*(*)(::JJAABNBJMEH))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_OJDOGPAIHNA_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FPKEKBPFADG(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_FPKEKBPFADG_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint JBHMKEIJDEE(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_JBHMKEIJDEE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint BPOCHFJMPBH(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_BPOCHFJMPBH_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint PJKFLONMKED(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_PJKFLONMKED_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint ENMIPOPKOOL(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_ENMIPOPKOOL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint IDGHMONBHOG(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_IDGHMONBHOG_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GAIIEKKJCDJ(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_GAIIEKKJCDJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint JJPAEGNHPBF(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_JJPAEGNHPBF_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint JEAKOAACJOJ(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_JEAKOAACJOJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint HCJKDMDAIEA(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_HCJKDMDAIEA_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint LKHDCCLDLGG(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_LKHDCCLDLGG_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint BJNEBGDBCHK(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_BJNEBGDBCHK_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint COFGNBGLFCJ(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_COFGNBGLFCJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FLDMMKNMMFD(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_FLDMMKNMMFD_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GEICDJMJMIM(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_GEICDJMJMIM_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint BAODNCIJEGG(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GEMGCCDGFGN_BAODNCIJEGG_OFFSET))(a1);
		}

	};

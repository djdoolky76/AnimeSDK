#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec2; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIHNPJJFNOA_AIGKIELFIBL_OFFSET UNITYSDK_OFFSET(0xB4245C0)
#define KIHNPJJFNOA_BBLMAMLMNNC_OFFSET UNITYSDK_OFFSET(0xB423780)
#define KIHNPJJFNOA_BLIDPFFNICC_OFFSET UNITYSDK_OFFSET(0xB421B50)
#define KIHNPJJFNOA_BOKKNAGEPBB_OFFSET UNITYSDK_OFFSET(0xB423EC0)
#define KIHNPJJFNOA_BPPDNJCIKCC_OFFSET UNITYSDK_OFFSET(0xB4234C0)
#define KIHNPJJFNOA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB424EA0)
#define KIHNPJJFNOA_CGDJFMBCCCF_OFFSET UNITYSDK_OFFSET(0xB420480)
#define KIHNPJJFNOA_CLMFDKKAPBG_OFFSET UNITYSDK_OFFSET(0xB422710)
#define KIHNPJJFNOA_FEJOLHJIFCM_OFFSET UNITYSDK_OFFSET(0xB422B30)
#define KIHNPJJFNOA_GBBIDFCEGIK_OFFSET UNITYSDK_OFFSET(0xB424A80)
#define KIHNPJJFNOA_GJNBHDIOOAN_OFFSET UNITYSDK_OFFSET(0xB420000)
#define KIHNPJJFNOA_HADCFNLMPFB_OFFSET UNITYSDK_OFFSET(0xB4214E0)
#define KIHNPJJFNOA_HGIILHGDEOM_OFFSET UNITYSDK_OFFSET(0xB420340)
#define KIHNPJJFNOA_IFMGOOKHDFP_OFFSET UNITYSDK_OFFSET(0xB420DE0)
#define KIHNPJJFNOA_IIEIJHGLJHM_OFFSET UNITYSDK_OFFSET(0xB423540)
#define KIHNPJJFNOA_IIINJHBMAFM_OFFSET UNITYSDK_OFFSET(0xB423D20)
#define KIHNPJJFNOA_IPJBPGGCLGJ_OFFSET UNITYSDK_OFFSET(0xB424200)
#define KIHNPJJFNOA_JNFOKKFGENG_OFFSET UNITYSDK_OFFSET(0xB422C70)
#define KIHNPJJFNOA_KAJGNKNPILA_OFFSET UNITYSDK_OFFSET(0xB423A40)
#define KIHNPJJFNOA_KFGJEKJHIMB_1_OFFSET UNITYSDK_OFFSET(0xB421890)
#define KIHNPJJFNOA_KFGJEKJHIMB_2_OFFSET UNITYSDK_OFFSET(0xB4219C0)
#define KIHNPJJFNOA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB420B10)
#define KIHNPJJFNOA_KIMDJKDPCCN_OFFSET UNITYSDK_OFFSET(0xB421200)
#define KIHNPJJFNOA_LLAOGIEKONK_OFFSET UNITYSDK_OFFSET(0xB422530)
#define KIHNPJJFNOA_MDFMDABPPLK_OFFSET UNITYSDK_OFFSET(0xB423100)
#define KIHNPJJFNOA_MKLHJMOLJDF_OFFSET UNITYSDK_OFFSET(0xB422690)
#define KIHNPJJFNOA_PCBOAJJCEBJ_OFFSET UNITYSDK_OFFSET(0xB424940)

	class KIHNPJJFNOA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_LAANOLJPOAM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "KIHNPJJFNOA")->GetStaticField(0x56390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint GJNBHDIOOAN(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_GJNBHDIOOAN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HGIILHGDEOM(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_HGIILHGDEOM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CGDJFMBCCCF(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CGDJFMBCCCF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IFMGOOKHDFP(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_IFMGOOKHDFP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KIMDJKDPCCN(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_KIMDJKDPCCN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HADCFNLMPFB(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_HADCFNLMPFB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 KFGJEKJHIMB_1(::RPG::GameCore::ValueEvaluatorVec2* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::ValueEvaluatorVec2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_KFGJEKJHIMB_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 KFGJEKJHIMB_2(::RPG::GameCore::ValueEvaluatorVec3* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::ValueEvaluatorVec3*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_KFGJEKJHIMB_2_OFFSET))(a1, a2);
		}

		static ::System::Void BLIDPFFNICC(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_BLIDPFFNICC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::FixPoint LLAOGIEKONK(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_LLAOGIEKONK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MKLHJMOLJDF(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_MKLHJMOLJDF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CLMFDKKAPBG(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CLMFDKKAPBG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FEJOLHJIFCM(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_FEJOLHJIFCM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint JNFOKKFGENG(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_JNFOKKFGENG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MDFMDABPPLK(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_MDFMDABPPLK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint BPPDNJCIKCC(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_BPPDNJCIKCC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IIEIJHGLJHM(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_IIEIJHGLJHM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint BBLMAMLMNNC(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_BBLMAMLMNNC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KAJGNKNPILA(::RPG::GameCore::RtDirConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtDirConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_KAJGNKNPILA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IIINJHBMAFM(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_IIINJHBMAFM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint BOKKNAGEPBB(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_BOKKNAGEPBB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IPJBPGGCLGJ(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_IPJBPGGCLGJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint AIGKIELFIBL(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_AIGKIELFIBL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint PCBOAJJCEBJ(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_PCBOAJJCEBJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint GBBIDFCEGIK(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_GBBIDFCEGIK_OFFSET))(a1, a2);
		}

	};

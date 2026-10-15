#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_BatchState.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_IEAIEMNHEJC.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class SimpleTextManagerMono; }
namespace RPG::Client { class SimpleTextManagerMono_EGBPIIIMGFJ; }
namespace RPG::Client { class SimpleTextManagerMono_PFEPEAGNFNN; }
namespace RPG::Client { class SimpleTextTextureConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0C9A50)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_BHAFOMMDDLN_OFFSET UNITYSDK_OFFSET(0xE0D2DA0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0D3860)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CEPIHPLKPOG_OFFSET UNITYSDK_OFFSET(0xE0C6B70)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xE0D3560)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_DBHHDMLNNDC_OFFSET UNITYSDK_OFFSET(0xE0CE5D0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_DEOGKJNNEFA_OFFSET UNITYSDK_OFFSET(0xE0CC2C0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_DGELAAHPFEH_OFFSET UNITYSDK_OFFSET(0xE0CA800)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_DLHJAHJNLHK_OFFSET UNITYSDK_OFFSET(0xE0D3370)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_EFEJLLLCJDF_OFFSET UNITYSDK_OFFSET(0xE0D33E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xE0C5140)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xE0C6850)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET UNITYSDK_OFFSET(0xE0C2CE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GFPAHIBNMAG_OFFSET UNITYSDK_OFFSET(0xE0CF380)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_HKOHHFLGCOG_OFFSET UNITYSDK_OFFSET(0xE0C7140)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_HMFNAEBCGAM_OFFSET UNITYSDK_OFFSET(0xE0CC5E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_IAEFBFAJCLA_OFFSET UNITYSDK_OFFSET(0xE0D2D20)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ILOILKFGGPM_OFFSET UNITYSDK_OFFSET(0xE0CE340)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_IPICLPBNJNF_OFFSET UNITYSDK_OFFSET(0xE0CC410)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_JJJDLFLBBHI_OFFSET UNITYSDK_OFFSET(0xE0C9F90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_JLLMLLPLDKC_OFFSET UNITYSDK_OFFSET(0xE0CD710)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_KMEFBEFDMMK_OFFSET UNITYSDK_OFFSET(0xE0CF610)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_LJOAKIHNENA_OFFSET UNITYSDK_OFFSET(0xE0CF7B0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_LNKJMKCFFNH_OFFSET UNITYSDK_OFFSET(0xE0CB3E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_NKCEEJJLIFO_OFFSET UNITYSDK_OFFSET(0xE0D3090)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_NKMCDHLFAOI_OFFSET UNITYSDK_OFFSET(0xE0CDFE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE0CA100)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE0C9AE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xE0CA7B0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETBATCHORDERDIRTY_OFFSET UNITYSDK_OFFSET(0xE0C3900)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKDIRTY_OFFSET UNITYSDK_OFFSET(0xE0C29A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKFONTDIRTY_OFFSET UNITYSDK_OFFSET(0xE0C2B10)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_UPDATEBATCH_OFFSET UNITYSDK_OFFSET(0xE0C69A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_4_0_OFFSET UNITYSDK_OFFSET(0xE0C9AB0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__UPDATETRACKEDTEXT_G__UPDATEIMPL_16_0_OFFSET UNITYSDK_OFFSET(0xE0CB6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_TypeDefinitionIndex = 72644;

	class SimpleTextManagerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::TextGenerator* MAJPAJNLKNM; // 0x18
		::UnityEngine::Material* DDONFNGMNOI; // 0x20
		::UnityEngine::Material* CGHKHJEBJNP; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::UnityEngine::Material*>* MMAIKIMKCJF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Font*, ::System::Int32>, ::System::Object*>* ENILFCNHPAN; // 0x38
		::RPG::Client::SimpleTextManagerMono_PFEPEAGNFNN* BCLKFHBHBEM; // 0x40
		::UnityEngine::Canvas* HEDBJGFDNBN; // 0x48
		::RPG::Client::SimpleTextTextureConfig* FMHLDDIPMHI; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* HCJLAGALICG; // 0x58
		::Il2CppArray<::UnityEngine::Color32>* CGHNCPBLNBL; // 0x60
		::Il2CppArray<::UnityEngine::Vector4>* EPBJOHGCDEM; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* JEKNOKFKNHK; // 0x70
		::Il2CppArray<::UnityEngine::Vector4>* GDNHIIPPKFJ; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* KEDFADOILHI; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* KMFDJOMMONG; // 0x88
		::Il2CppArray<::System::Int32>* MBJCFDJCLNM; // 0x90
		::System::Int32 KGKLENNICOL; // 0x98
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ELFCMCHGFPG; // 0xA0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleText*>*>* MALFNOKKIGG; // 0xA8
		::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>* OPLAGNIIBEC; // 0xB0
		::System::Boolean HENBOOJOPFO; // 0xB8
		::System::Boolean PAAFBPDANIB; // 0xB9
		::System::Boolean DNKKPLDAACH; // 0xBA
		::System::Boolean OMJCHOFKBME; // 0xBB
		::RPG::Client::SimpleTextManagerMono_BatchState JIDAOBNPCDD; // 0xBC
		static ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>** StaticGet_DFIEIMEAIAP()
		{
			return (::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>**)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x6F2C0);
		}

		static ::System::Int32* StaticGet_Layer()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158E0);
		}

		static ::System::Int32* StaticGet_PDBEDDNEHKH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158E4);
		}

		static ::System::Int32* StaticGet_JNHEIPBJAJF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158E8);
		}

		static ::System::Int32* StaticGet_JMCAODFDFNH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158EC);
		}

		static ::System::Int32* StaticGet_IMIHBONNNGA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158F0);
		}

		static ::Unity::Profiling::ProfilerMarker* StaticGet_EJBNEGFPJOH()
		{
			return (::Unity::Profiling::ProfilerMarker*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x158F8);
		}

		static ::System::Int32* StaticGet_OFCOJGEKMML()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x15900);
		}

		static ::System::Int32* StaticGet_KDJLFBKOFIF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x15904);
		}

		static ::Unity::Profiling::ProfilerMarker* StaticGet_MFMPAAHOCGP()
		{
			return (::Unity::Profiling::ProfilerMarker*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x15908);
		}

		static ::Unity::Profiling::ProfilerMarker* StaticGet_GPKFNIPPBHC()
		{
			return (::Unity::Profiling::ProfilerMarker*)UnitySDK::FromName("RPG.Client", "SimpleTextManagerMono")->GetStaticField(0x15910);
		}

		// static const ::System::Object DEJIGGDHACD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CCTOR_OFFSET))();
		}

		static ::System::Void SetTrackDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKDIRTY_OFFSET))();
		}

		static ::System::Void SetTrackFontDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKFONTDIRTY_OFFSET))();
		}

		::System::Void SetBatchOrderDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETBATCHORDERDIRTY_OFFSET))(this);
		}

		::System::Void UpdateBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_UPDATEBATCH_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void GenerateTextMesh(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GENERATETEXTMESH_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::SimpleTextManagerMono_PFEPEAGNFNN* get_SDFGenerator()
		{
			return ((::RPG::Client::SimpleTextManagerMono_PFEPEAGNFNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET))(this);
		}

		static ::UnityEngine::TextGenerationSettings get_DefaultTextGenerationSettings()
		{
			return ((::UnityEngine::TextGenerationSettings(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET))();
		}

		::System::Void JJJDLFLBBHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_JJJDLFLBBHI_OFFSET))(this);
		}

		::System::Void CEPIHPLKPOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CEPIHPLKPOG_OFFSET))(this);
		}

		::System::Void HKOHHFLGCOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_HKOHHFLGCOG_OFFSET))(this, a1);
		}

		::System::Void HMFNAEBCGAM(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector2 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_HMFNAEBCGAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLLMLLPLDKC(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_JLLMLLPLDKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DBHHDMLNNDC(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_DBHHDMLNNDC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKMCDHLFAOI(::UnityEngine::Font* a1, ::UnityEngine::Font* a2, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Font*, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_NKMCDHLFAOI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IPICLPBNJNF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_IPICLPBNJNF_OFFSET))(this, a1);
		}

		::System::Void LJOAKIHNENA(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_LJOAKIHNENA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGELAAHPFEH(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_DGELAAHPFEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNKJMKCFFNH(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_LNKJMKCFFNH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::SimpleTextManagerMono_IEAIEMNHEJC ILOILKFGGPM(::RPG::Client::SimpleText* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::RPG::Client::SimpleTextManagerMono_IEAIEMNHEJC(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ILOILKFGGPM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* IAEFBFAJCLA()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_IAEFBFAJCLA_OFFSET))(this);
		}

		::UnityEngine::Material* GFPAHIBNMAG(::UnityEngine::Font* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GFPAHIBNMAG_OFFSET))(this, a1);
		}

		::RPG::Client::SimpleTextManagerMono_EGBPIIIMGFJ* KMEFBEFDMMK(::UnityEngine::Font* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::SimpleTextManagerMono_EGBPIIIMGFJ*(*)(::PVOID, ::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_KMEFBEFDMMK_OFFSET))(this, a1, a2);
		}

		::System::Void DEOGKJNNEFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_DEOGKJNNEFA_OFFSET))(this);
		}

		::System::Void NKCEEJJLIFO(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_NKCEEJJLIFO_OFFSET))(this, a1);
		}

		::System::Void DLHJAHJNLHK(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_DLHJAHJNLHK_OFFSET))(this, a1);
		}

		static ::System::Void BHAFOMMDDLN(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_BHAFOMMDDLN_OFFSET))(a1);
		}

		static ::System::Int32 EFEJLLLCJDF(::RPG::Client::SimpleText* a1, ::RPG::Client::SimpleText* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_EFEJLLLCJDF_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* _Awake_g__Setup_4_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_4_0_OFFSET))(this);
		}

		::System::Void _UpdateTrackedText_g__UpdateImpl_16_0(::UnityEngine::Pooled::PooledList_1<::RPG::Client::SimpleText*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::RPG::Client::SimpleText*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__UPDATETRACKEDTEXT_G__UPDATEIMPL_16_0_OFFSET))(this, a1);
		}

	};
}

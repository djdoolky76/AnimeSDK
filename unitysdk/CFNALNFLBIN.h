#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/IAJPMNLEFLJ.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class IRI_BaseBuildingCustomData;
class IRI_BuildingRendererList;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class LJFHKAJPFNE_DMPFJOFLMEM;
class NFJIADFIJKO;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { template <typename T> class ChunkedStructList_1; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { template <typename T> class NativeContainer_1; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CFNALNFLBIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC58680)
#define CFNALNFLBIN_CNHNHPCLBGE_OFFSET UNITYSDK_OFFSET(0xCC56260)
#define CFNALNFLBIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC551F0)
#define CFNALNFLBIN_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0xCC55000)
#define CFNALNFLBIN_DNAAPLBBBIF_OFFSET UNITYSDK_OFFSET(0xCC564F0)
#define CFNALNFLBIN_FBFLKNGNCOC_OFFSET UNITYSDK_OFFSET(0xCC55970)
#define CFNALNFLBIN_JKHBCAMJMNL_1_OFFSET UNITYSDK_OFFSET(0xCC581D0)
#define CFNALNFLBIN_JKHBCAMJMNL_2_OFFSET UNITYSDK_OFFSET(0xCC58400)
#define CFNALNFLBIN_JKHBCAMJMNL_OFFSET UNITYSDK_OFFSET(0xCC57720)
#define CFNALNFLBIN_JPIJDLDKGHM_OFFSET UNITYSDK_OFFSET(0xCC55F60)
#define CFNALNFLBIN_LMKKGAHJKBP_1_OFFSET UNITYSDK_OFFSET(0xCC56810)
#define CFNALNFLBIN_LMKKGAHJKBP_OFFSET UNITYSDK_OFFSET(0xCC562B0)
#define CFNALNFLBIN_LNPEPBEIABL_OFFSET UNITYSDK_OFFSET(0xCC561F0)
#define CFNALNFLBIN_MLDBCKDDOMI_OFFSET UNITYSDK_OFFSET(0xCC57B90)
#define CFNALNFLBIN_NNGJOACGKLC_OFFSET UNITYSDK_OFFSET(0xCC56D80)
#define CFNALNFLBIN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCC55770)

inline static constexpr unsigned int CFNALNFLBIN_TypeDefinitionIndex = 73747;

	class CFNALNFLBIN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FBJGGCHDBJJ; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* INKMMAPGEMP; // 0x18
		::System::String* ELNJHIBMKEF; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* PEFHBJPPOHJ; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* KMABJFMFLIG; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* MOMCBHDNIMK; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* EBPCLMPIBJO; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* AECKIHDLIOG; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* FPLKKCHBNMB; // 0x50
		::LJFHKAJPFNE_DMPFJOFLMEM* HLKKIMJKPEA; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* BNKFDJOMHFN; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Object*>* AGCJFLAOLFN; // 0x68
		::NFJIADFIJKO* PFOBDINCJDI; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* IKFOOBKMDHI; // 0x78
		::System::Collections::Generic::List_1<::System::ValueTuple>* EGJHCKFCCLE; // 0x80
		::LJFHKAJPFNE* BJPKBELGNCM; // 0x88
		::RPG::Client::ChunkedStructList_1<::UnityEngine::Matrix4x4>* AKMMPPFIMOO; // 0x90
		::System::Collections::Generic::List_1<::System::Int64>* MLIGICGFBGK; // 0x98
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> OFFNNNKILLA; // 0xA0
		::System::Byte _padding0[0x8];
		::System::UInt32 MFHCPLBEBHI; // 0xB0
		::System::Int32 CJNKMEPBEEM; // 0xB4
		::Unity::Collections::NativeArray_1<::System::Single> COLDFNHHFLA; // 0xB8
		::System::Byte _padding1[0x8];
		::System::UInt64 PJDJNFIMJFK; // 0xC8
		::System::UInt32 FMHPFJMFICI; // 0xD0
		::UnityEngine::Matrix4x4 KHFINMBNGBE; // 0xD4
		::System::UInt32 JEMPFNHDPIA; // 0x114
		::System::UInt32 FBIJDBKFNMM; // 0x118
		::UnityEngine::Bounds JHACKAOENJJ; // 0x11C
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_AEFKMILECGM()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "CFNALNFLBIN")->GetStaticField(0x24470);
		}

		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNALNFLBIN_CCTOR_OFFSET))();
		}

		::System::String* DBIELBAPKIK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DBIELBAPKIK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void FBFLKNGNCOC(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_FBFLKNGNCOC_OFFSET))(this, a1);
		}

		::System::Void JPIJDLDKGHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_JPIJDLDKGHM_OFFSET))(this);
		}

		::System::Void LNPEPBEIABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_LNPEPBEIABL_OFFSET))(this);
		}

		::System::Boolean CNHNHPCLBGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNALNFLBIN_CNHNHPCLBGE_OFFSET))(this);
		}

		::System::Void LMKKGAHJKBP(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::IRI_BuildingRendererList* a3, ::IRI_BaseBuildingCustomData* a4, ::KLEFGGIHGMI* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::IRI_BuildingRendererList*, ::IRI_BaseBuildingCustomData*, ::KLEFGGIHGMI*, ::System::Action*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_LMKKGAHJKBP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LMKKGAHJKBP_1(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::IAJPMNLEFLJ a4, ::IRI_BaseBuildingCustomData* a5, ::KLEFGGIHGMI* a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::IAJPMNLEFLJ, ::IRI_BaseBuildingCustomData*, ::KLEFGGIHGMI*, ::System::Action*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_LMKKGAHJKBP_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DNAAPLBBBIF(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::KLEFGGIHGMI* a4, ::System::Action* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::UInt32 a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::KLEFGGIHGMI*, ::System::Action*, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CFNALNFLBIN_DNAAPLBBBIF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void NNGJOACGKLC(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::LodDetail*>* a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::UInt32 a7, ::System::String* a8, ::KLEFGGIHGMI* a9, ::System::Action* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::LodDetail*>*, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::String*, ::KLEFGGIHGMI*, ::System::Action*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_NNGJOACGKLC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void JKHBCAMJMNL(::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>* a1, ::System::Nullable* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>*, ::System::Nullable*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_JKHBCAMJMNL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKHBCAMJMNL_1(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK> a1, ::System::Nullable* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK>, ::System::Nullable*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_JKHBCAMJMNL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKHBCAMJMNL_2(::RPG::GameCore::NativeContainer_1<::CNHKFCHOEHK>* a1, ::System::Nullable* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NativeContainer_1<::CNHKFCHOEHK>*, ::System::Nullable*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CFNALNFLBIN_JKHBCAMJMNL_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLDBCKDDOMI(::UnityEngine::Matrix4x4 a1, ::System::Nullable* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::System::Nullable*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CFNALNFLBIN_MLDBCKDDOMI_OFFSET))(this, a1, a2, a3, a4);
		}

	};

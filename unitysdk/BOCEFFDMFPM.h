#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"
class BOCEFFDMFPM;
class BOPECJBFFNJ;
class GEJLKIPLALB;
class NFCPIKFFCNA;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define BOCEFFDMFPM_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1D5C55E0)
#define BOCEFFDMFPM_ANLHMMBAPOK_OFFSET UNITYSDK_OFFSET(0x1D5C0AF0)
#define BOCEFFDMFPM_BAPFJCHNHGM_OFFSET UNITYSDK_OFFSET(0x1D5C5140)
#define BOCEFFDMFPM_BEIMOJICJPM_OFFSET UNITYSDK_OFFSET(0x1D5C5710)
#define BOCEFFDMFPM_CLCBPCCLNBC_OFFSET UNITYSDK_OFFSET(0x1D5C0D30)
#define BOCEFFDMFPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BE970)
#define BOCEFFDMFPM_DDEHCKBKIMM_OFFSET UNITYSDK_OFFSET(0x1D5C50D0)
#define BOCEFFDMFPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5C0DE0)
#define BOCEFFDMFPM_DJNOJDBCAOH_OFFSET UNITYSDK_OFFSET(0x1D5BEDF0)
#define BOCEFFDMFPM_ECJDGMKLNJJ_OFFSET UNITYSDK_OFFSET(0x1D5BEFB0)
#define BOCEFFDMFPM_EOJHNIELNHH_OFFSET UNITYSDK_OFFSET(0x1D5C24D0)
#define BOCEFFDMFPM_EOMCGPBDEJF_OFFSET UNITYSDK_OFFSET(0x1D5C6060)
#define BOCEFFDMFPM_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1D5C6670)
#define BOCEFFDMFPM_GDAEHJEJDAG_OFFSET UNITYSDK_OFFSET(0x1D5C5590)
#define BOCEFFDMFPM_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1D5BED90)
#define BOCEFFDMFPM_GETLOADER_OFFSET UNITYSDK_OFFSET(0x1D5C0D80)
#define BOCEFFDMFPM_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1D5BE950)
#define BOCEFFDMFPM_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1D5BE740)
#define BOCEFFDMFPM_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1D5BE8D0)
#define BOCEFFDMFPM_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1D5BE930)
#define BOCEFFDMFPM_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D5BE7F0)
#define BOCEFFDMFPM_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1D5BE850)
#define BOCEFFDMFPM_GET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x1D5BE870)
#define BOCEFFDMFPM_GET_DEPENDENCYOFFSET_OFFSET UNITYSDK_OFFSET(0x1D5BE890)
#define BOCEFFDMFPM_GET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET UNITYSDK_OFFSET(0x1D5BE8B0)
#define BOCEFFDMFPM_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1D5BE910)
#define BOCEFFDMFPM_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x1D5BE7B0)
#define BOCEFFDMFPM_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1D5BE810)
#define BOCEFFDMFPM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D5BE830)
#define BOCEFFDMFPM_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1D5BE8F0)
#define BOCEFFDMFPM_GHANAHEEBIM_OFFSET UNITYSDK_OFFSET(0x1D5C3E50)
#define BOCEFFDMFPM_GIIKKPDCNAE_OFFSET UNITYSDK_OFFSET(0x1D5BE760)
#define BOCEFFDMFPM_HDFLJJAAJBL_OFFSET UNITYSDK_OFFSET(0x1D5BE750)
#define BOCEFFDMFPM_HMELAFCBEMG_OFFSET UNITYSDK_OFFSET(0x1D5C1A10)
#define BOCEFFDMFPM_IIIJICBENNM_OFFSET UNITYSDK_OFFSET(0x1D5C28F0)
#define BOCEFFDMFPM_IONNCJBGEIO_OFFSET UNITYSDK_OFFSET(0x1D5C3120)
#define BOCEFFDMFPM_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1D5BEDE0)
#define BOCEFFDMFPM_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x1D5C0D90)
#define BOCEFFDMFPM_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1D5BEDA0)
#define BOCEFFDMFPM_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1D5BEDB0)
#define BOCEFFDMFPM_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1D5BEDD0)
#define BOCEFFDMFPM_JDMLKGGPKCL_OFFSET UNITYSDK_OFFSET(0x1D5C1410)
#define BOCEFFDMFPM_JJHAPBNODIK_OFFSET UNITYSDK_OFFSET(0x1D5C0390)
#define BOCEFFDMFPM_JJJGIKNMEED_OFFSET UNITYSDK_OFFSET(0x1D5C5040)
#define BOCEFFDMFPM_JJNIFBMIENA_OFFSET UNITYSDK_OFFSET(0x1D5BFE60)
#define BOCEFFDMFPM_KAAGKGAJMIG_OFFSET UNITYSDK_OFFSET(0x1D5C31C0)
#define BOCEFFDMFPM_KEHIHFJELEH_OFFSET UNITYSDK_OFFSET(0x1D5C1460)
#define BOCEFFDMFPM_KHOMJLFKNDA_OFFSET UNITYSDK_OFFSET(0x1D5C3B50)
#define BOCEFFDMFPM_KMODDIGINKE_OFFSET UNITYSDK_OFFSET(0x1D5C48E0)
#define BOCEFFDMFPM_LJBGNFBJHNK_OFFSET UNITYSDK_OFFSET(0x1D5C4F10)
#define BOCEFFDMFPM_LMLGJEFHMCI_OFFSET UNITYSDK_OFFSET(0x1D5C1340)
#define BOCEFFDMFPM_MAHCDPALOCK_OFFSET UNITYSDK_OFFSET(0x1D5C6350)
#define BOCEFFDMFPM_MDEFBCLCHHC_OFFSET UNITYSDK_OFFSET(0x1D5BEE00)
#define BOCEFFDMFPM_MDIPKPOEDMH_OFFSET UNITYSDK_OFFSET(0x1D5C48A0)
#define BOCEFFDMFPM_MKDMJLCHBBF_OFFSET UNITYSDK_OFFSET(0x1D5C62E0)
#define BOCEFFDMFPM_NAIAKIFEMDE_OFFSET UNITYSDK_OFFSET(0x1D5C1440)
#define BOCEFFDMFPM_NHABEKDGLCB_OFFSET UNITYSDK_OFFSET(0x1D5C02F0)
#define BOCEFFDMFPM_NLFMDKKPLJK_OFFSET UNITYSDK_OFFSET(0x1D5C59B0)
#define BOCEFFDMFPM_NOHICPCPCDH_OFFSET UNITYSDK_OFFSET(0x1D5BE730)
#define BOCEFFDMFPM_NPHCMPKLGFB_OFFSET UNITYSDK_OFFSET(0x1D5C53E0)
#define BOCEFFDMFPM_OBMGFOBIOPO_OFFSET UNITYSDK_OFFSET(0x1D5C0340)
#define BOCEFFDMFPM_OLGIHFOEBMN_OFFSET UNITYSDK_OFFSET(0x1D5BECE0)
#define BOCEFFDMFPM_OMOFHOEHBJC_OFFSET UNITYSDK_OFFSET(0x1D5C1F70)
#define BOCEFFDMFPM_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1D5C4320)
#define BOCEFFDMFPM_PCOEMGBLABH_OFFSET UNITYSDK_OFFSET(0x1D5C02A0)
#define BOCEFFDMFPM_PDCJJINBLNH_OFFSET UNITYSDK_OFFSET(0x1D5C0620)
#define BOCEFFDMFPM_PHHINNMJPII_OFFSET UNITYSDK_OFFSET(0x1D5C5B50)
#define BOCEFFDMFPM_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1D5C5690)
#define BOCEFFDMFPM_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1D5C0F50)
#define BOCEFFDMFPM_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1D5BE960)
#define BOCEFFDMFPM_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1D5BE8E0)
#define BOCEFFDMFPM_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1D5BE940)
#define BOCEFFDMFPM_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D5BE800)
#define BOCEFFDMFPM_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1D5BE860)
#define BOCEFFDMFPM_SET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x1D5BE880)
#define BOCEFFDMFPM_SET_DEPENDENCYOFFSET_OFFSET UNITYSDK_OFFSET(0x1D5BE8A0)
#define BOCEFFDMFPM_SET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET UNITYSDK_OFFSET(0x1D5BE8C0)
#define BOCEFFDMFPM_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1D5BE920)
#define BOCEFFDMFPM_SET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1D5BE820)
#define BOCEFFDMFPM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D5BE840)
#define BOCEFFDMFPM_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1D5BE900)
#define BOCEFFDMFPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D5C6360)

inline static constexpr unsigned int BOCEFFDMFPM_TypeDefinitionIndex = 42542;

	class BOCEFFDMFPM : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledSet_1<::RPG::Client::AssetSystem::AssetLoader*>* FPHDAAHPIJJ; // 0x10
		::System::String* PKJEJMJDEKN; // 0x18
		::System::Type* _AssetType_k__BackingField; // 0x20
		::RPG::Client::OnAssetOperationDelegate* KCECKGDKKAH; // 0x28
		::UnityEngine::AssetBundleCreateRequest* ECOFOIBEKEG; // 0x30
		::System::Object* OAONOGFEOMB; // 0x38
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> EHFINKMLBJI; // 0x40
		::System::Byte _padding0[0x68];
		::UnityEngine::AssetBundle* APMACEACOJP; // 0xB0
		::Collections::Pooled::PooledSet_1<::System::UInt64>* GENFPJCGPAP; // 0xB8
		::Collections::Pooled::PooledList_1<::BOCEFFDMFPM*>* FJGNHPMCBIF; // 0xC0
		::Collections::Pooled::PooledSet_1<::BOCEFFDMFPM*>* DPAOOJCPFDD; // 0xC8
		::GEJLKIPLALB* LABBJDBMHJM; // 0xD0
		::System::Int32 _DependencyOffset_k__BackingField; // 0xD8
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xDC
		::RPG::Client::AssetState FLLJKGCOCJC; // 0xE0
		::System::Int32 _BlockIndex_k__BackingField; // 0xE4
		::System::Byte HFCKJGCJCDJ; // 0xE8
		::System::Boolean PKHNLKAGCLD; // 0xE9
		::System::Boolean _IsCircularDependencyBundle_k__BackingField; // 0xEA
		::System::Byte _padding1[0x1];
		::System::Int32 KHNNFPPOMCL; // 0xEC
		::System::Int32 DFJEMGJDFKN; // 0xF0
		::System::Byte _padding2[0x4];
		::System::UInt64 _NameHash_k__BackingField; // 0xF8
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0x100
		::System::UInt32 _Offset_k__BackingField; // 0x104
		::System::Int32 _DependencyCount_k__BackingField; // 0x108
		::RPG::Client::OpType _OpType_k__BackingField; // 0x10C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_CTOR_OFFSET))(this);
		}

		::System::Boolean NOHICPCPCDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_NOHICPCPCDH_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void HDFLJJAAJBL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_HDFLJJAAJBL_OFFSET))(this, a1);
		}

		::System::Int32 GIIKKPDCNAE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GIIKKPDCNAE_OFFSET))(this);
		}

		::System::String* get_LoaderType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_ASSETTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_NameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Void set_NameHash(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_NAMEHASH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::Int32 get_BlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_BLOCKINDEX_OFFSET))(this);
		}

		::System::Void set_BlockIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_BLOCKINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_DependencyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_DEPENDENCYCOUNT_OFFSET))(this);
		}

		::System::Void set_DependencyCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_DEPENDENCYCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_DependencyOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_DEPENDENCYOFFSET_OFFSET))(this);
		}

		::System::Void set_DependencyOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_DEPENDENCYOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCircularDependencyBundle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET))(this);
		}

		::System::Void set_IsCircularDependencyBundle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET))(this, a1);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_ASSETOPERATIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_OPTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_LOADERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SET_ASSETSTATE_OFFSET))(this, a1);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_SETUSERPARAM_OFFSET))(this, a1);
		}

		::System::Void OLGIHFOEBMN(::System::UInt64 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_OLGIHFOEBMN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GETASSETOBJECT_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ISFAILED_OFFSET))(this);
		}

		::System::Boolean DJNOJDBCAOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_DJNOJDBCAOH_OFFSET))(this);
		}

		::System::Void MDEFBCLCHHC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_MDEFBCLCHHC_OFFSET))(this, a1);
		}

		::System::Void ECJDGMKLNJJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ECJDGMKLNJJ_OFFSET))(this, a1);
		}

		::System::Void JJNIFBMIENA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_JJNIFBMIENA_OFFSET))(this);
		}

		::System::Boolean PCOEMGBLABH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_PCOEMGBLABH_OFFSET))(this);
		}

		::System::Int32 NHABEKDGLCB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_NHABEKDGLCB_OFFSET))(this);
		}

		::System::Void OBMGFOBIOPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_OBMGFOBIOPO_OFFSET))(this);
		}

		::System::Void JJHAPBNODIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_JJHAPBNODIK_OFFSET))(this);
		}

		::System::Void PDCJJINBLNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_PDCJJINBLNH_OFFSET))(this);
		}

		::System::Void ANLHMMBAPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ANLHMMBAPOK_OFFSET))(this);
		}

		::System::Int32 CLCBPCCLNBC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_CLCBPCCLNBC_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GETLOADER_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ISHANDLECALLED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_RESETDATA_OFFSET))(this);
		}

		::System::Boolean LMLGJEFHMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_LMLGJEFHMCI_OFFSET))(this);
		}

		::System::Boolean JDMLKGGPKCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_JDMLKGGPKCL_OFFSET))(this);
		}

		::System::Boolean NAIAKIFEMDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_NAIAKIFEMDE_OFFSET))(this);
		}

		::System::Void KEHIHFJELEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_KEHIHFJELEH_OFFSET))(this);
		}

		::System::Void IIIJICBENNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_IIIJICBENNM_OFFSET))(this);
		}

		::System::Void HMELAFCBEMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_HMELAFCBEMG_OFFSET))(this);
		}

		::System::Void KAAGKGAJMIG(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_KAAGKGAJMIG_OFFSET))(this, a1);
		}

		::System::Void GHANAHEEBIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GHANAHEEBIM_OFFSET))(this);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::Void OMOFHOEHBJC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_OMOFHOEHBJC_OFFSET))(this, a1);
		}

		::System::Void KHOMJLFKNDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_KHOMJLFKNDA_OFFSET))(this, a1);
		}

		::System::Boolean JJJGIKNMEED(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_JJJGIKNMEED_OFFSET))(this, a1);
		}

		::System::Boolean DDEHCKBKIMM(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_DDEHCKBKIMM_OFFSET))(this, a1);
		}

		::System::Void BAPFJCHNHGM(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_BAPFJCHNHGM_OFFSET))(this, a1);
		}

		::System::Void NPHCMPKLGFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_NPHCMPKLGFB_OFFSET))(this);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_ADDLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_REMOVELOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void GDAEHJEJDAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_GDAEHJEJDAG_OFFSET))(this);
		}

		::System::Void BEIMOJICJPM(::BOPECJBFFNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPECJBFFNJ*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_BEIMOJICJPM_OFFSET))(this, a1);
		}

		::System::Void NLFMDKKPLJK(::BOPECJBFFNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPECJBFFNJ*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_NLFMDKKPLJK_OFFSET))(this, a1);
		}

		::System::Void PHHINNMJPII(::BOPECJBFFNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPECJBFFNJ*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_PHHINNMJPII_OFFSET))(this, a1);
		}

		::System::Void KMODDIGINKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_KMODDIGINKE_OFFSET))(this);
		}

		::System::Void LJBGNFBJHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_LJBGNFBJHNK_OFFSET))(this);
		}

		::System::Void EOMCGPBDEJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_EOMCGPBDEJF_OFFSET))(this);
		}

		::System::Void MKDMJLCHBBF(::NFCPIKFFCNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFCPIKFFCNA*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_MKDMJLCHBBF_OFFSET))(this, a1);
		}

		::System::Boolean IONNCJBGEIO(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_IONNCJBGEIO_OFFSET))(this, a1);
		}

		::System::Boolean EOJHNIELNHH(::BOCEFFDMFPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_EOJHNIELNHH_OFFSET))(this, a1);
		}

		::System::Boolean MAHCDPALOCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_MAHCDPALOCK_OFFSET))(this);
		}

		::System::Void MDIPKPOEDMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_MDIPKPOEDMH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_TOSTRING_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM_FORCESYNCLOAD_OFFSET))(this);
		}

	};

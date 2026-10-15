#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBHJHADOEID;
class IEEICGEBPNF;
class NCELBOIBLCL;
class PFBLMLOGGOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BBHJHADOEID_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0x15E8AE50)
#define BBHJHADOEID_CJNDHFGCFFL_OFFSET UNITYSDK_OFFSET(0x15E8BCD0)
#define BBHJHADOEID_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8AE00)
#define BBHJHADOEID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E8AED0)
#define BBHJHADOEID_DMLFDHEIMJE_OFFSET UNITYSDK_OFFSET(0x15E8C580)
#define BBHJHADOEID_EHFHEODCBBA_OFFSET UNITYSDK_OFFSET(0x15E8B560)
#define BBHJHADOEID_FAHFGDHGFLG_OFFSET UNITYSDK_OFFSET(0x15E8B280)
#define BBHJHADOEID_FKAPKFGDFBN_OFFSET UNITYSDK_OFFSET(0x15E8C000)
#define BBHJHADOEID_FLBAOOFJPNO_OFFSET UNITYSDK_OFFSET(0x15E8D080)
#define BBHJHADOEID_FPIKGFFOENN_OFFSET UNITYSDK_OFFSET(0x15E8BA70)
#define BBHJHADOEID_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15E8D3F0)
#define BBHJHADOEID_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3D0)
#define BBHJHADOEID_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3B0)
#define BBHJHADOEID_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15E8D390)
#define BBHJHADOEID_HFNAOBEBGDE_OFFSET UNITYSDK_OFFSET(0x15E8CCB0)
#define BBHJHADOEID_IGKENAKGMLP_OFFSET UNITYSDK_OFFSET(0x15E8CC10)
#define BBHJHADOEID_JCOIBCAHKME_OFFSET UNITYSDK_OFFSET(0x15E8C1A0)
#define BBHJHADOEID_KEANPJMOLGI_OFFSET UNITYSDK_OFFSET(0x15E8BE30)
#define BBHJHADOEID_KKHEBJEDAAH_OFFSET UNITYSDK_OFFSET(0x15E8CF50)
#define BBHJHADOEID_LMFENIGLLJP_OFFSET UNITYSDK_OFFSET(0x15E8C690)
#define BBHJHADOEID_MCBHDPKGBBL_OFFSET UNITYSDK_OFFSET(0x15E8B120)
#define BBHJHADOEID_MOKCJHFOAGP_OFFSET UNITYSDK_OFFSET(0x15E8B3E0)
#define BBHJHADOEID_NPALFEJCCPH_OFFSET UNITYSDK_OFFSET(0x15E8CA60)
#define BBHJHADOEID_NPNJJFKPPNJ_OFFSET UNITYSDK_OFFSET(0x15E8BB60)
#define BBHJHADOEID_OMCMNPMAMDI_OFFSET UNITYSDK_OFFSET(0x15E8CD50)
#define BBHJHADOEID_PCGDGIMAIPP_OFFSET UNITYSDK_OFFSET(0x15E8CDE0)
#define BBHJHADOEID_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15E8D400)
#define BBHJHADOEID_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3E0)
#define BBHJHADOEID_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3C0)
#define BBHJHADOEID_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15E8D3A0)

inline static constexpr unsigned int BBHJHADOEID_TypeDefinitionIndex = 69435;

	class BBHJHADOEID : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x10
		::System::String* KDJGDLAHDNI; // 0x18
		::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x20
		::Il2CppArray<::BBHJHADOEID*>* NNJIGNBAHHL; // 0x28
		::System::Collections::Generic::List_1<::IEEICGEBPNF*>* AHIDIFHJHFF; // 0x30
		::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x38
		::System::Int32 KJJJPMAPFOH; // 0x3C
		::System::Int32 PDDDKGKCAEL; // 0x40
		::System::Int32 BGOECBIKDEG; // 0x44
		::System::Int32 JPLDMLLPHOL; // 0x48
		::System::Boolean MEHPGGNLNGJ; // 0x4C
		::System::Boolean _IsVisibleCache_k__BackingField; // 0x4D
		::System::Boolean _IsInRangeCache_k__BackingField; // 0x4E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::PhotoGraphAimContainerLogicOperator GAKBBEHODFF; // 0x50
		::System::Int32 ADEKJDAPHFL; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_CTOR_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BBHJHADOEID_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MCBHDPKGBBL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BBHJHADOEID_MCBHDPKGBBL_OFFSET))(this, a1, a2);
		}

		::System::Boolean FAHFGDHGFLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_FAHFGDHGFLG_OFFSET))(this);
		}

		::System::Boolean MOKCJHFOAGP(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + BBHJHADOEID_MOKCJHFOAGP_OFFSET))(this, a1, a2);
		}

		::System::Boolean EHFHEODCBBA(::IEEICGEBPNF* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEEICGEBPNF*, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + BBHJHADOEID_EHFHEODCBBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPIKGFFOENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_FPIKGFFOENN_OFFSET))(this);
		}

		::System::Boolean NPNJJFKPPNJ(::IEEICGEBPNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEEICGEBPNF*))((::PBYTE)hIl2Cpp + BBHJHADOEID_NPNJJFKPPNJ_OFFSET))(this, a1);
		}

		::System::Int32 CJNDHFGCFFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_CJNDHFGCFFL_OFFSET))(this);
		}

		::System::Void FKAPKFGDFBN(::UnityEngine::Vector3 a1, ::PFBLMLOGGOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::PFBLMLOGGOK*))((::PBYTE)hIl2Cpp + BBHJHADOEID_FKAPKFGDFBN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JCOIBCAHKME(::UnityEngine::Vector3 a1, ::PFBLMLOGGOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::PFBLMLOGGOK*))((::PBYTE)hIl2Cpp + BBHJHADOEID_JCOIBCAHKME_OFFSET))(this, a1, a2);
		}

		::System::Int32 KEANPJMOLGI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_KEANPJMOLGI_OFFSET))(this);
		}

		::System::Int32 LMFENIGLLJP(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::NCELBOIBLCL* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::NCELBOIBLCL*))((::PBYTE)hIl2Cpp + BBHJHADOEID_LMFENIGLLJP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NPALFEJCCPH(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::NCELBOIBLCL* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::NCELBOIBLCL*))((::PBYTE)hIl2Cpp + BBHJHADOEID_NPALFEJCCPH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IGKENAKGMLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_IGKENAKGMLP_OFFSET))(this);
		}

		::System::Boolean HFNAOBEBGDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_HFNAOBEBGDE_OFFSET))(this);
		}

		::System::Void OMCMNPMAMDI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBHJHADOEID_OMCMNPMAMDI_OFFSET))(this, a1);
		}

		::System::Void PCGDGIMAIPP(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BBHJHADOEID_PCGDGIMAIPP_OFFSET))(this, a1, a2);
		}

		::System::Void KKHEBJEDAAH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBHJHADOEID_KKHEBJEDAAH_OFFSET))(this, a1);
		}

		::System::Void FLBAOOFJPNO(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BBHJHADOEID_FLBAOOFJPNO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DMLFDHEIMJE(::System::Single a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BBHJHADOEID_DMLFDHEIMJE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PhotoGraphAimUnionNodeType get_NodeType()
		{
			return ((::RPG::Client::PhotoGraphAimUnionNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::Client::PhotoGraphAimUnionNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimUnionNodeType))((::PBYTE)hIl2Cpp + BBHJHADOEID_SET_NODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisibleCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_GET_ISVISIBLECACHE_OFFSET))(this);
		}

		::System::Void set_IsVisibleCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBHJHADOEID_SET_ISVISIBLECACHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInRangeCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_GET_ISINRANGECACHE_OFFSET))(this);
		}

		::System::Void set_IsInRangeCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBHJHADOEID_SET_ISINRANGECACHE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
		{
			return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHJHADOEID_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + BBHJHADOEID_SET_CONFIG_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class MaterialGroup_RendererMaterials; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MATERIALGROUP_BEIEDHFLCEL_OFFSET UNITYSDK_OFFSET(0x135A3C80)
#define MOLEMOLE_MATERIALGROUP_BLKPPNAOJMK_OFFSET UNITYSDK_OFFSET(0x135A2CA0)
#define MOLEMOLE_MATERIALGROUP_DEPOEEFCBFL_OFFSET UNITYSDK_OFFSET(0x135A2050)
#define MOLEMOLE_MATERIALGROUP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x135A46C0)
#define MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135A12B0)
#define MOLEMOLE_MATERIALGROUP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x135A4A00)
#define MOLEMOLE_MATERIALGROUP_EDCDNMDLKBA_OFFSET UNITYSDK_OFFSET(0x135A23A0)
#define MOLEMOLE_MATERIALGROUP_EEKEHNHBIIA_OFFSET UNITYSDK_OFFSET(0x135A25E0)
#define MOLEMOLE_MATERIALGROUP_EHCLANCAPOL_OFFSET UNITYSDK_OFFSET(0x135A4520)
#define MOLEMOLE_MATERIALGROUP_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x135A4B50)
#define MOLEMOLE_MATERIALGROUP_FAGAGHEJBOO_OFFSET UNITYSDK_OFFSET(0x135A1DA0)
#define MOLEMOLE_MATERIALGROUP_FCPKJPBOLNC_OFFSET UNITYSDK_OFFSET(0x135A1340)
#define MOLEMOLE_MATERIALGROUP_HLLDEDDMAFA_OFFSET UNITYSDK_OFFSET(0x135A3500)
#define MOLEMOLE_MATERIALGROUP_IPNIPMIHJBG_OFFSET UNITYSDK_OFFSET(0x135A2490)
#define MOLEMOLE_MATERIALGROUP_JFMCDDAFPEM_OFFSET UNITYSDK_OFFSET(0x135A20A0)
#define MOLEMOLE_MATERIALGROUP_JODKHDMAHPM_OFFSET UNITYSDK_OFFSET(0x135A4A40)
#define MOLEMOLE_MATERIALGROUP_KAPACODHJHI_OFFSET UNITYSDK_OFFSET(0x135A3040)
#define MOLEMOLE_MATERIALGROUP_LJPHFIGGOJJ_OFFSET UNITYSDK_OFFSET(0x135A35D0)
#define MOLEMOLE_MATERIALGROUP_NKLIPEFHBON_OFFSET UNITYSDK_OFFSET(0x135A16B0)
#define MOLEMOLE_MATERIALGROUP_NONLGJIGJFJ_OFFSET UNITYSDK_OFFSET(0x135A37A0)
#define MOLEMOLE_MATERIALGROUP_OJJAHCDMHFG_1_OFFSET UNITYSDK_OFFSET(0x135A4C20)
#define MOLEMOLE_MATERIALGROUP_OJJAHCDMHFG_OFFSET UNITYSDK_OFFSET(0x135A3560)
#define MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135A1250)
#define MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x135A1660)
#define MOLEMOLE_MATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x135A11E0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_TypeDefinitionIndex = 48527;

	class MaterialGroup : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_EMPTY_RENDERER_MATERIALS()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_TypeDefinitionIndex)->GetStaticField(0x50C50);
		}
		::Il2CppArray<::System::Object*>* entries; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* allInstancedMats; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* matInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* matOriginalShaders; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* _materialInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Int32 NKLIPEFHBON(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* CKPOFHOEFOD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_NKLIPEFHBON_OFFSET))(this, CKPOFHOEFOD);
		}

		::Il2CppArray<::UnityEngine::Material*>* EDCDNMDLKBA(::System::Int32 EALOBKIJLND)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_EDCDNMDLKBA_OFFSET))(this, EALOBKIJLND);
		}

		::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32> IPNIPMIHJBG(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32>(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_IPNIPMIHJBG_OFFSET))(this, KNNDDLMOKCG);
		}

		::System::Void FCPKJPBOLNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_FCPKJPBOLNC_OFFSET))(this);
		}

		::System::Int32 EEKEHNHBIIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_EEKEHNHBIIA_OFFSET))(this);
		}

		::System::Void BLKPPNAOJMK(::Il2CppArray<::UnityEngine::Material*>* NGOIGCBKNGA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_BLKPPNAOJMK_OFFSET))(this, NGOIGCBKNGA);
		}

		::System::Void OJJAHCDMHFG(::System::String* BHCDICHLODJ, ::Il2CppArray<::UnityEngine::Material*>* NGOIGCBKNGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_OJJAHCDMHFG_OFFSET))(this, BHCDICHLODJ, NGOIGCBKNGA);
		}

		::System::Void NONLGJIGJFJ(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_NONLGJIGJFJ_OFFSET))(this, AEPONOJONAA);
		}

		::System::Void JFMCDDAFPEM(::System::Int32 GOECEKJPAMG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_JFMCDDAFPEM_OFFSET))(this, GOECEKJPAMG);
		}

		::System::Void LJPHFIGGOJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_LJPHFIGGOJJ_OFFSET))(this);
		}

		::System::Int32 BEIEDHFLCEL(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* IOJGBEMMBLI)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_BEIEDHFLCEL_OFFSET))(this, IOJGBEMMBLI);
		}

		::MoleMole::MaterialGroup* DGNAAPGKIPL()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* HLLDEDDMAFA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_HLLDEDDMAFA_OFFSET))(this);
		}

		static ::System::Boolean EHCLANCAPOL(::MoleMole::MaterialGroup_RendererMaterials* AAIJGGIEOGK, ::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* NEHIDKKIDGL)
		{
			return ((::System::Boolean(*)(::MoleMole::MaterialGroup_RendererMaterials*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_EHCLANCAPOL_OFFSET))(AAIJGGIEOGK, NEHIDKKIDGL);
		}

		::MoleMole::MaterialGroup_RendererMaterials* FAGAGHEJBOO(::UnityEngine::Renderer* OCFHGOGFGPE)
		{
			return ((::MoleMole::MaterialGroup_RendererMaterials*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_FAGAGHEJBOO_OFFSET))(this, OCFHGOGFGPE);
		}

		::System::Void DEPOEEFCBFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DEPOEEFCBFL_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void JODKHDMAHPM(::System::Int32 EALOBKIJLND, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_JODKHDMAHPM_OFFSET))(this, EALOBKIJLND, DJLOKMMLFJC);
		}

		::System::Void EMLDIHEBNBO(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_EMLDIHEBNBO_OFFSET))(this, AEPONOJONAA);
		}

		::System::Void OJJAHCDMHFG_1(::UnityEngine::Shader* JMHHPCPIDPE, ::Il2CppArray<::UnityEngine::Material*>* NGOIGCBKNGA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_OJJAHCDMHFG_1_OFFSET))(this, JMHHPCPIDPE, NGOIGCBKNGA);
		}

		::Il2CppArray<::UnityEngine::Material*>* KAPACODHJHI()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_KAPACODHJHI_OFFSET))(this);
		}
	};
}

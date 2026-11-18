#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class GIGFDLPMNND;
class ILLCEFBALCI;
class MOELDGPPDPM;
class NOHOGHGPBAG;
namespace MoleMole { class MaterialGroup; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
template <typename T> class FBNJEKDLMOO_1;

#define MOLEMOLE_MONORENDERHANDLER_AANILLJJIFH_OFFSET UNITYSDK_OFFSET(0x12B78FE0)
#define MOLEMOLE_MONORENDERHANDLER_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x12B7F040)
#define MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x12B7BFB0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12B7E1A0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B78C40)
#define MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x12B78E20)
#define MOLEMOLE_MONORENDERHANDLER_APPENDDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x12B768A0)
#define MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B75700)
#define MOLEMOLE_MONORENDERHANDLER_BDGOEEFJBEF_OFFSET UNITYSDK_OFFSET(0x12B78770)
#define MOLEMOLE_MONORENDERHANDLER_BHOEADGDFEP_OFFSET UNITYSDK_OFFSET(0x12B791C0)
#define MOLEMOLE_MONORENDERHANDLER_CHECKMATISNULL_OFFSET UNITYSDK_OFFSET(0x12B7D590)
#define MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x12B7D1B0)
#define MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x12B79770)
#define MOLEMOLE_MONORENDERHANDLER_DGONNHHMJGD_OFFSET UNITYSDK_OFFSET(0x12B759B0)
#define MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET UNITYSDK_OFFSET(0x12B75320)
#define MOLEMOLE_MONORENDERHANDLER_ENFEPLDBLDB_OFFSET UNITYSDK_OFFSET(0x12B785B0)
#define MOLEMOLE_MONORENDERHANDLER_FDNGIKLBJLN_OFFSET UNITYSDK_OFFSET(0x12B77700)
#define MOLEMOLE_MONORENDERHANDLER_FDPJPPFHJJK_OFFSET UNITYSDK_OFFSET(0x12B75AB0)
#define MOLEMOLE_MONORENDERHANDLER_FIDFHCEAJCD_OFFSET UNITYSDK_OFFSET(0x12B7EF00)
#define MOLEMOLE_MONORENDERHANDLER_FMBDPIEBEMA_OFFSET UNITYSDK_OFFSET(0x12B76F80)
#define MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x12B766F0)
#define MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x12B755D0)
#define MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x12B7D910)
#define MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B788C0)
#define MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET UNITYSDK_OFFSET(0x12B7D040)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x12B7B710)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET UNITYSDK_OFFSET(0x12B7B310)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x12B7AB40)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET UNITYSDK_OFFSET(0x12B7B910)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x12B7AF20)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET UNITYSDK_OFFSET(0x12B7B110)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET UNITYSDK_OFFSET(0x12B7AD30)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x12B7B510)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x12B7BC00)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x12B7BB10)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET UNITYSDK_OFFSET(0x12B7E150)
#define MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET UNITYSDK_OFFSET(0x12B75140)
#define MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x12B75150)
#define MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x12B75170)
#define MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x12B75160)
#define MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x12B751D0)
#define MOLEMOLE_MONORENDERHANDLER_GFDCOOCBKAD_OFFSET UNITYSDK_OFFSET(0x12B77E50)
#define MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET UNITYSDK_OFFSET(0x12B7BD40)
#define MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x12B7BCE0)
#define MOLEMOLE_MONORENDERHANDLER_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0x12B76580)
#define MOLEMOLE_MONORENDERHANDLER_HIGGILGKMBH_OFFSET UNITYSDK_OFFSET(0x12B75910)
#define MOLEMOLE_MONORENDERHANDLER_ICKHMNCNFJL_OFFSET UNITYSDK_OFFSET(0x12B79990)
#define MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET UNITYSDK_OFFSET(0x12B757C0)
#define MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x12B75750)
#define MOLEMOLE_MONORENDERHANDLER_JCBIOAOFLJD_OFFSET UNITYSDK_OFFSET(0x12B7C2D0)
#define MOLEMOLE_MONORENDERHANDLER_JGALOOOJNAB_OFFSET UNITYSDK_OFFSET(0x12B7E9B0)
#define MOLEMOLE_MONORENDERHANDLER_KAMAFDHEBPG_OFFSET UNITYSDK_OFFSET(0x12B78390)
#define MOLEMOLE_MONORENDERHANDLER_KBHCLELEFHC_OFFSET UNITYSDK_OFFSET(0x12B76030)
#define MOLEMOLE_MONORENDERHANDLER_KELPNJINBEC_OFFSET UNITYSDK_OFFSET(0x12B75DF0)
#define MOLEMOLE_MONORENDERHANDLER_KJOOHPFEGEI_OFFSET UNITYSDK_OFFSET(0x12B7EA10)
#define MOLEMOLE_MONORENDERHANDLER_KPPGDLNFJFG_OFFSET UNITYSDK_OFFSET(0x12B797E0)
#define MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x12B76530)
#define MOLEMOLE_MONORENDERHANDLER_NECDLHNJABG_OFFSET UNITYSDK_OFFSET(0x12B7ED90)
#define MOLEMOLE_MONORENDERHANDLER_OGHHACPAHBH_OFFSET UNITYSDK_OFFSET(0x12B76E00)
#define MOLEMOLE_MONORENDERHANDLER_OHLIIFFFAMN_OFFSET UNITYSDK_OFFSET(0x12B7ED80)
#define MOLEMOLE_MONORENDERHANDLER_OJLGBCPAKFD_OFFSET UNITYSDK_OFFSET(0x12B79BD0)
#define MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B76070)
#define MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B75C60)
#define MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B75B60)
#define MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET UNITYSDK_OFFSET(0x12B7C400)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x12B77040)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x12B75430)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x12B7C7E0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12B7E510)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B78D70)
#define MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x12B79080)
#define MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET UNITYSDK_OFFSET(0x12B79460)
#define MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x12B7D6E0)
#define MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET UNITYSDK_OFFSET(0x12B750E0)
#define MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x12B78A10)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x12B78A50)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x12B78CD0)
#define MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x12B751E0)
#define MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x12B75E30)
#define MOLEMOLE_MONORENDERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x12B75D60)
#define MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B78D20)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET UNITYSDK_OFFSET(0x12B7CED0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET UNITYSDK_OFFSET(0x12B7DD10)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET UNITYSDK_OFFSET(0x12B7DE80)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET UNITYSDK_OFFSET(0x12B7DFE0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x12B79510)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x12B79570)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x12B795E0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x12B79650)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x12B796B0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x12B79710)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET UNITYSDK_OFFSET(0x12B7CBF0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET UNITYSDK_OFFSET(0x12B7DA30)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET UNITYSDK_OFFSET(0x12B7DBA0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x12B794B0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET UNITYSDK_OFFSET(0x12B7CD50)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET UNITYSDK_OFFSET(0x12B7CAC0)
#define MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET UNITYSDK_OFFSET(0x12B75FC0)
#define MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x12B79420)
#define MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x12B79260)
#define MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B7E910)
#define MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7E830)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandler_TypeDefinitionIndex = 48836;

	class MonoRenderHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>** StaticGet_NDNEMBCBAOF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandler_TypeDefinitionIndex)->GetStaticField(0x4D880);
		}
		// static const ::System::Int32 NORMALMATNUM = 0x13; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::System::Boolean GIPECNMEEPB; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* KGBHEDOOBEJ; // 0x28
		::System::Boolean BIPEKJMMGPP; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 BMLCIJACGDL; // 0x34
		::System::Boolean DDEIBDCLHJD; // 0x38
		::System::Boolean LJLNAAKLCON; // 0x39
		::System::Byte _padding2[0x6];
		::System::Collections::Generic::List_1<::MOELDGPPDPM*>* PEILPMICOFJ; // 0x40
		::MoleMole::MaterialGroup* KELKHEMGHNN; // 0x48
		::MoleMole::MaterialGroup* GIAALGEMBCA; // 0x50
		::MoleMole::Battle::Entity* LDLMPHEEKBG; // 0x58
		::GIGFDLPMNND* matComponent; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::System::Single>*>* LDIOIIMLFGI; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::UnityEngine::Texture*>*>* DKFBMCNBFEL; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::UnityEngine::Vector2>*>* NDPNIGHCDMJ; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::UnityEngine::Vector2>*>* CAHNPPDPHDI; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::UnityEngine::Color>*>* LDLMEGEJFLL; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::UnityEngine::Vector4>*>* DPBJNLCAPAE; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::System::Boolean>*>* GJGKNMEEACL; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FBNJEKDLMOO_1<::System::Boolean>*>* GDCPEPFEHAE; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NOHOGHGPBAG*>* AFLFCICGMDF; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::NOHOGHGPBAG*>*>* OJNCPALPEAP; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>* INKLKKNMCCE; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::String*, ::UnityEngine::Material*, ::System::Int32>, ::System::Boolean>* ABPBJNDGDNH; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* maWorkingProperties; // 0xC8
		::System::Comparison_1<::System::String*>* EMLEEFPKAHF; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET))();
		}

		::System::Void SetModifierInstanceDirty(::System::Boolean FBIGBAFMMNF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET))(this, FBIGBAFMMNF);
		}

		::System::Collections::Generic::List_1<::MOELDGPPDPM*>* get_AllMaterialModifierInstanceList()
		{
			return ((::System::Collections::Generic::List_1<::MOELDGPPDPM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET))(this);
		}

		::MoleMole::MaterialGroup* get_DefaultGroup()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET))(this);
		}

		::MoleMole::MaterialGroup* get_OriginalInstancedMaterialGroup()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_InstancedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* get_ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_ownerEntity(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET))();
		}

		static ::System::Void RemoveEntity(::System::UInt32 NJNCGJLHLKC)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET))(NJNCGJLHLKC);
		}

		static ::MoleMole::MonoRenderHandler* GetComponentSafely(::System::UInt32 NJNCGJLHLKC)
		{
			return ((::MoleMole::MonoRenderHandler*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET))(NJNCGJLHLKC);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_START_OFFSET))(this);
		}

		::System::Void TryReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET))(this);
		}

		::System::Void KBHCLELEFHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_KBHCLELEFHC_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdateFromManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET))(this);
		}

		::System::Void ForceSyncMaterialsEffectsToRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET))(this);
		}

		::System::Boolean InitRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET))(this);
		}

		::System::Void AppendDynamicAccessoryRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* CKPOFHOEFOD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_APPENDDYNAMICACCESSORYRENDERERS_OFFSET))(this, CKPOFHOEFOD);
		}

		::System::Void RemoveDynamicAccessoryRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IOJGBEMMBLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEDYNAMICACCESSORYRENDERERS_OFFSET))(this, IOJGBEMMBLI);
		}

		::System::Void KAMAFDHEBPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_KAMAFDHEBPG_OFFSET))(this);
		}

		::MOELDGPPDPM* GetMaterialModifierInstance(::LGBIMGEFJCE BGJOPBCCMOC)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET))(this, BGJOPBCCMOC);
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void SetupAndStartMaterialInstances(::LGBIMGEFJCE BGJOPBCCMOC, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG)
		{
			return ((::System::Void(*)(::PVOID, ::LGBIMGEFJCE, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET))(this, BGJOPBCCMOC, OAHJHLFIFBG);
		}

		::NOHOGHGPBAG* SetupAndStartMatPropertiesPattern(::ILLCEFBALCI* ECMMKCJLBMD)
		{
			return ((::NOHOGHGPBAG*(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, ECMMKCJLBMD);
		}

		::MOELDGPPDPM* TryCreateMaterialModifierInstance(::LGBIMGEFJCE MDLHJONGOPK)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, MDLHJONGOPK);
		}

		::System::Void AddModifierInstance(::MOELDGPPDPM* ECMMKCJLBMD)
		{
			return ((::System::Void(*)(::PVOID, ::MOELDGPPDPM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET))(this, ECMMKCJLBMD);
		}

		::System::Void RemoveModifierInstance(::MOELDGPPDPM* ECMMKCJLBMD)
		{
			return ((::System::Void(*)(::PVOID, ::MOELDGPPDPM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET))(this, ECMMKCJLBMD);
		}

		::System::Void AddRunningMatPropertiesPattern(::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, JGAPMMNNBPE);
		}

		::System::Void RemoveRunningMatPropertiesPattern(::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET))(this, JGAPMMNNBPE);
		}

		::System::Void StartAllMaterialModifierInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET))(this);
		}

		::System::Void UpdateMaterialModifierInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET))(this);
		}

		::System::Void UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void ResetDirtyCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET))(this);
		}

		::System::Boolean TryGetMaterialModifier(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_6(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void ClearMaterialGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET))(this);
		}

		::System::Void KPPGDLNFJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_KPPGDLNFJFG_OFFSET))(this);
		}

		::FBNJEKDLMOO_1<::System::Single>* GetMatValueFloat(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::UnityEngine::Texture*>* GetMatValueTexture(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::UnityEngine::Texture*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::UnityEngine::Vector2>* GetMatValueTextureOffset(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::UnityEngine::Vector2>* GetMatValueTextureTilling(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::UnityEngine::Color>* GetMatValueColor(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::UnityEngine::Vector4>* GetMatValueVector(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::System::Boolean>* GetMatValueBool(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET))(this, ACHJGIJBGMH);
		}

		::FBNJEKDLMOO_1<::System::Boolean>* GetMatValueKeyword(::System::Int32 ACHJGIJBGMH)
		{
			return ((::FBNJEKDLMOO_1<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET))(this, ACHJGIJBGMH);
		}

		::NOHOGHGPBAG* GetRunningMatPropertiesPattern(::System::String* HAGJAKBMPOI)
		{
			return ((::NOHOGHGPBAG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, HAGJAKBMPOI);
		}

		::System::Collections::Generic::HashSet_1<::NOHOGHGPBAG*>* GetRunningMatPropertiesPatternsByType(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
		{
			return ((::System::Collections::Generic::HashSet_1<::NOHOGHGPBAG*>*(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET))(this, JLFOCLDLHAH);
		}

		::System::Boolean HasRunningMatPropertiesPatternsByType(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET))(this, JLFOCLDLHAH);
		}

		::System::Boolean HasHigherRunningMatPropertiesPatterns(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET))(this, JLFOCLDLHAH);
		}

		::System::Void AddMatPriority(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 ACHJGIJBGMH, ::System::String* HOMMOPENBBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET))(this, KNNDDLMOKCG, ACHJGIJBGMH, HOMMOPENBBM);
		}

		::System::Void RefreshMatPripority(::System::String* HOMMOPENBBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET))(this, HOMMOPENBBM);
		}

		::System::Void RemoveMatPriority(::System::String* HOMMOPENBBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET))(this, HOMMOPENBBM);
		}

		::System::Boolean TryGetSecondPriorityItem(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 CBIEJMBPAIC, ::LGBIMGEFJCE MDLHJONGOPK, ::System::Single& IGAAKDOIPNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::LGBIMGEFJCE, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET))(this, KNNDDLMOKCG, CBIEJMBPAIC, MDLHJONGOPK, IGAAKDOIPNN);
		}

		::System::Boolean TryGetSecondPriorityItem_1(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 CBIEJMBPAIC, ::LGBIMGEFJCE MDLHJONGOPK, ::UnityEngine::Color& IGAAKDOIPNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::LGBIMGEFJCE, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET))(this, KNNDDLMOKCG, CBIEJMBPAIC, MDLHJONGOPK, IGAAKDOIPNN);
		}

		::System::String* GetMatPriorityPropertyKey(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 ACHJGIJBGMH)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET))(this, KNNDDLMOKCG, ACHJGIJBGMH);
		}

		::System::Boolean CheckWriteMatPropertyAuthority(::System::String* HAGJAKBMPOI, ::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 ACHJGIJBGMH, ::System::Boolean DMFKNIBAJME)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET))(this, HAGJAKBMPOI, KNNDDLMOKCG, ACHJGIJBGMH, DMFKNIBAJME);
		}

		::System::Void SetLastWriteMatPropertyAuthority(::System::String* HAGJAKBMPOI, ::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 ACHJGIJBGMH, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, HAGJAKBMPOI, KNNDDLMOKCG, ACHJGIJBGMH, GEGOALONGBI);
		}

		::System::Boolean GetLastWriteMatPropertyAuthority(::System::String* HAGJAKBMPOI, ::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 ACHJGIJBGMH)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, HAGJAKBMPOI, KNNDDLMOKCG, ACHJGIJBGMH);
		}

		::System::Boolean TryGetMaterialModifier_7(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_8(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_9(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_10(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_11(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_12(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_13(::System::String* HAGJAKBMPOI, ::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET))(this, HAGJAKBMPOI, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void GetRunningPatternNonAlloc(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET))(this, JLFOCLDLHAH);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AddMaWorkingProperties(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::System::Int32>* JLKLCPIJKPJ)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET))(this, JLFOCLDLHAH, JLKLCPIJKPJ);
		}

		::System::Void RemoveMaWorkingProperties(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::System::Int32>* JLKLCPIJKPJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET))(this, JLFOCLDLHAH, JLKLCPIJKPJ);
		}

		static ::System::Boolean CheckMatIsNull(::UnityEngine::Material* KNNDDLMOKCG, ::System::Boolean PGHPFPMCJOJ)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CHECKMATISNULL_OFFSET))(KNNDDLMOKCG, PGHPFPMCJOJ);
		}

		::System::Boolean JGALOOOJNAB(::LGBIMGEFJCE BGJOPBCCMOC)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_JGALOOOJNAB_OFFSET))(this, BGJOPBCCMOC);
		}

		::System::Void FDNGIKLBJLN(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IOJGBEMMBLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FDNGIKLBJLN_OFFSET))(this, IOJGBEMMBLI);
		}

		::System::Void HIGGILGKMBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HIGGILGKMBH_OFFSET))(this);
		}

		::System::Void ICKHMNCNFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ICKHMNCNFJL_OFFSET))(this);
		}

		::System::Void KJOOHPFEGEI(::MoleMole::Config::MaterialPropertyType JAEJEMNGCCA, ::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_KJOOHPFEGEI_OFFSET))(this, JAEJEMNGCCA, JGAPMMNNBPE);
		}

		::System::Void ENFEPLDBLDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ENFEPLDBLDB_OFFSET))(this);
		}

		::System::Void HCJGGHLFKKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HCJGGHLFKKE_OFFSET))(this);
		}

		::System::Void BDGOEEFJBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_BDGOEEFJBEF_OFFSET))(this);
		}

		::System::Void BHOEADGDFEP(::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_BHOEADGDFEP_OFFSET))(this, JGAPMMNNBPE);
		}

		::System::Int32 FIDFHCEAJCD(::System::String* EJCBEJMGFAJ, ::System::String* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FIDFHCEAJCD_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		::System::Boolean OHLIIFFFAMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_OHLIIFFFAMN_OFFSET))(this);
		}

		::System::Void JCBIOAOFLJD(::System::Collections::Generic::List_1<::System::String*>* LPDEDJMDNEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_JCBIOAOFLJD_OFFSET))(this, LPDEDJMDNEC);
		}

		::System::Void FDPJPPFHJJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FDPJPPFHJJK_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ABDLEONNPAJ_OFFSET))(this);
		}

		::System::Void DGONNHHMJGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_DGONNHHMJGD_OFFSET))(this);
		}

		::System::Int32 GFDCOOCBKAD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GFDCOOCBKAD_OFFSET))(this);
		}

		static ::System::Boolean OGHHACPAHBH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_OGHHACPAHBH_OFFSET))();
		}

		::System::Void FMBDPIEBEMA(::Il2CppArray<::UnityEngine::Renderer*>* CKPOFHOEFOD, ::System::Boolean EODEMKOANBA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FMBDPIEBEMA_OFFSET))(this, CKPOFHOEFOD, EODEMKOANBA);
		}

		::System::Void AANILLJJIFH(::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_AANILLJJIFH_OFFSET))(this, JGAPMMNNBPE);
		}

		::System::Void OJLGBCPAKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_OJLGBCPAKFD_OFFSET))(this);
		}

		::System::Void KELPNJINBEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_KELPNJINBEC_OFFSET))(this);
		}

		::System::Void NECDLHNJABG(::MoleMole::Config::MaterialPropertyType JAEJEMNGCCA, ::NOHOGHGPBAG* JGAPMMNNBPE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::NOHOGHGPBAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_NECDLHNJABG_OFFSET))(this, JAEJEMNGCCA, JGAPMMNNBPE);
		}
	};
}

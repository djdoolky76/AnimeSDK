#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapNREHarness_PosKey.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapNREHarness_RendererVisibilityRecord.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapNREHarness___c__DisplayClass45_0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityPrepareInputCustom.h"

class IPerObjectShadowEntity;
class NapRenderEntity;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class NapNREHarness_POSSortSnapshot; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_BEGINLIGHTINPUTCAPTURE_OFFSET UNITYSDK_OFFSET(0x16E62040)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_BEGINPOSSORTCAPTURE_OFFSET UNITYSDK_OFFSET(0x16E6F2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURELIGHTINPUTS_OFFSET UNITYSDK_OFFSET(0x16E62C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREPOSSORTEARLYEXIT_OFFSET UNITYSDK_OFFSET(0x16E6F4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREPOSSORT_OFFSET UNITYSDK_OFFSET(0x16E6F6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0x16E795D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURERENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16E74910)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16E60950)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREFAILEDATLAS_OFFSET UNITYSDK_OFFSET(0x16E6E570)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREFINALVISIBLEPOS_OFFSET UNITYSDK_OFFSET(0x16E6B7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARELIGHTINPUTS_OFFSET UNITYSDK_OFFSET(0x16E63390)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREMONOPOSREGISTRY_OFFSET UNITYSDK_OFFSET(0x16E6A560)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARENAPCB_OFFSET UNITYSDK_OFFSET(0x16E676F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREPEROBJECTSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x16E67050)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREPOSSORT_OFFSET UNITYSDK_OFFSET(0x16E71780)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREREGISTRY_OFFSET UNITYSDK_OFFSET(0x16E5F790)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARERENDERERVISIBILITYBATCHONLY_OFFSET UNITYSDK_OFFSET(0x16E799B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARERENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16E75350)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16E60C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CULLRESULTNAME_OFFSET UNITYSDK_OFFSET(0x16E70B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_DUMPPOSSORTLIST_OFFSET UNITYSDK_OFFSET(0x16E70C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENCODEMANAGEDINPUT_OFFSET UNITYSDK_OFFSET(0x16E62210)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_1_OFFSET UNITYSDK_OFFSET(0x16E65BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_2_OFFSET UNITYSDK_OFFSET(0x16E747D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_3_OFFSET UNITYSDK_OFFSET(0x16E74870)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x16E65B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_EXITREASONNAME_OFFSET UNITYSDK_OFFSET(0x16E703D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FILLENTITYNAMEMAP_OFFSET UNITYSDK_OFFSET(0x16E6E080)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FLOATSEQUAL_OFFSET UNITYSDK_OFFSET(0x16E631E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATMANAGEDKEY_OFFSET UNITYSDK_OFFSET(0x16E78DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATNATIVERV_OFFSET UNITYSDK_OFFSET(0x16E79160)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATPOSKEY_OFFSET UNITYSDK_OFFSET(0x16E6D840)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATPOSSORTKEY_OFFSET UNITYSDK_OFFSET(0x16E70500)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GETAMBIENTLIGHTSOURCELABEL_OFFSET UNITYSDK_OFFSET(0x16E66F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GETINDICATEDAMBIENTLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x16E66C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GET_HARNESS_OFFSET UNITYSDK_OFFSET(0x16E5E920)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISADDLIGHTFORWARDSLOT_OFFSET UNITYSDK_OFFSET(0x16E66820)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISHEADBONEDEPENDENTSLOT_OFFSET UNITYSDK_OFFSET(0x16E66890)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISMATRIXSLOT_OFFSET UNITYSDK_OFFSET(0x16E63340)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_LOGHARNESSSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x16E5EC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBCOMPONENTSKIPPED_OFFSET UNITYSDK_OFFSET(0x16E666F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBSLOTLABEL_OFFSET UNITYSDK_OFFSET(0x16E668E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBSLOTSKIPPED_OFFSET UNITYSDK_OFFSET(0x16E666A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_PROBEENTITYLAYOUT_OFFSET UNITYSDK_OFFSET(0x16E5EE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_PROBEMONOLAYOUT_OFFSET UNITYSDK_OFFSET(0x16E5F370)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_REFRESH_OFFSET UNITYSDK_OFFSET(0x16E5E980)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERKEY_OFFSET UNITYSDK_OFFSET(0x16E752E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RESETNATIVEBACKENDSTATE_OFFSET UNITYSDK_OFFSET(0x16E5EBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RESOLVEROOTNAME_OFFSET UNITYSDK_OFFSET(0x16E65C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RUNLAYOUTPROBE_OFFSET UNITYSDK_OFFSET(0x16E5EAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x16E7A9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_TYPENAME_OFFSET UNITYSDK_OFFSET(0x16E6A4D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E7AB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS__COMPARELIGHTINPUTS_G__VALIDATEPARTITION_45_0_OFFSET UNITYSDK_OFFSET(0x16E66060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_TypeDefinitionIndex = 26851;

	class NapNREHarness : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_s_POSSortNativeValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x224E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_NapCBNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x224E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_LightNativeInts()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x224F0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_PosNativeKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x224F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_LightManagedIndexByRoot()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22500);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_FailedAtlasNativeKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22508);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_NapCBNativeData()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22510);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet_s_POSSortManagedIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22518);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeFadeTargets()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22520);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_s_PosNativeValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22528);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_FailedAtlasNativeTypes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22530);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_MonoNativeIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22538);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_POSSortNativeKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22540);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_FailedAtlasNativeEntityIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22548);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVNativeRendererIndices()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22550);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_NapCBManagedIndicatedAmbientCountByRoot()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22558);
		}
		static ::System::String** StaticGet_s_PosManagedDuplicateText()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22560);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVCamMeta()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22568);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_NapCBManagedIndexByRoot()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22570);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_AddLightPropNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22578);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>** StaticGet_s_RVNativeByKey()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22580);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_RendererBatchByCamera()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22588);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_RVNativeQueryResults()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22590);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22598);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeCullResults()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225A0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_RVNativeQueryValid()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225A8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_MonoManagedIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_LightNativeBlend()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_LightInputFloatNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet_s_POSSortNativeIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225C8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_POSSortNativeSortPriorities()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225D0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVNativeQueryIndices()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225D8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_RVNativeVisibleFlags()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_FailedAtlasNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVBatchRendererIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_LightInputIntNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x225F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_s_DispatchByCamera()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22600);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeMeta()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22608);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_RVBatchVisibleFlags()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22610);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_LightNativeFloats()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22618);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_LightNativeIndexByRoot()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22620);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_PosNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22628);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22630);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_PosManagedKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22638);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_NapCBPosVisibleRoots()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22640);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_PosNativeTypes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22648);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_POSSortManagedKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22650);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_LightNativeRootIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22658);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_POSSortByCamera()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22660);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativePriorities()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22668);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_RegistryPriNative()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22670);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_PosNameByRootId()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22678);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_RendererVisibilityByCamera()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22680);
		}
		static ::Il2CppArray<::System::Int64>** StaticGet_s_RVBatchHandles()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22688);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_MonoNativeComponentIDsTmp()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22690);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_MonoComponentRootByID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22698);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeEntityIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_LightInputByCamera()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226A8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Object*>** StaticGet_s_FailedAtlasManagedKeys()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_s_POSSortManagedValues()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226B8);
		}
		static ::System::String** StaticGet_s_PosNativeDuplicateText()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226C0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_PosNativeEntityIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226C8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_MonoNativeRootIDsTmp()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_RegistryPriManaged()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226D8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_PosNativeCullResults()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_NapCBNativeIndexByRoot()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_POSSortNativeTypes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226F0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_POSSortNativeAlphas()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x226F8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_RVNativeRendererIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22700);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>** StaticGet_s_RVManagedByKey()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22708);
		}
		static ::Il2CppArray<::System::Int64>** StaticGet_s_RVNativeHandles()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x22710);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet_s_LayoutProbePassed()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x5280);
		}
		static ::System::Boolean* StaticGet_s_StartGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x5282);
		}
		static ::System::Boolean* StaticGet_s_Harness()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x5283);
		}
		static ::System::Boolean* StaticGet_s_LastLogged()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness_TypeDefinitionIndex)->GetStaticField(0x5284);
		}
		// static const ::System::Byte B = 0x1; // 0x0
		// static const ::System::Byte b = 0x0; // 0x0
		// static const ::System::Byte Pad = 0xAA; // 0x0
		// static const ::System::Int32 LightInputFloatStride = 0x34; // 0x0
		// static const ::System::Int32 LightInputIntStride = 0x4; // 0x0
		// static const ::System::Int32 IndexChangedFloatSlot = 0x13; // 0x0
		// static const ::System::Int32 BlendLightStartIntSlot = 0x0; // 0x0
		// static const ::System::Int32 BlendLightEndIntSlot = 0x1; // 0x0
		// static const ::System::Single FloatAbsEpsilon; // 0x0
		// static const ::System::Single FloatRelEpsilon; // 0x0
		// static const ::System::Single MatrixAbsEpsilon; // 0x0
		// static const ::System::Single MatrixRelEpsilon; // 0x0
		// static const ::System::Int32 NapCBPropertyCount = 0x29; // 0x0
		// static const ::System::Int32 NapCBFloatPerEntity = 0xA4; // 0x0
		// static const ::System::Single PerObjectShadowOffsetAbsEpsilon; // 0x0
		// static const ::System::Int32 AddLightPropCount = 0x4; // 0x0
		// static const ::System::Int32 MonoPOSTypeValue = 0x0; // 0x0
		// static const ::System::Int32 NapEntityTypeValue = 0x1; // 0x0
		// static const ::System::Int32 UnknownTypeValue = -0x1; // 0x0
		// static const ::System::Int32 POSSortExitIncomplete = 0x0; // 0x0
		// static const ::System::Int32 POSSortExitNone = 0x1; // 0x0
		// static const ::System::Int32 POSSortExitDebugPause = 0x2; // 0x0
		// static const ::System::Int32 POSSortExitDisabled = 0x3; // 0x0
		// static const ::System::Int32 POSSortExitBlackCanvas = 0x4; // 0x0
		// static const ::System::Int32 POSSortExitNoMainLight = 0x5; // 0x0
		// static const ::System::Int32 POSSortExitNoVisibleLights = 0x6; // 0x0
		// static const ::System::Int32 POSSortMetaStride = 0x7; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_Harness()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GET_HARNESS_OFFSET))();
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_REFRESH_OFFSET))();
		}

		static ::System::Void ResetNativeBackendState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RESETNATIVEBACKENDSTATE_OFFSET))();
		}

		static ::System::Void LogHarnessStateChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_LOGHARNESSSTATECHANGE_OFFSET))();
		}

		static ::System::Void RunLayoutProbe()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RUNLAYOUTPROBE_OFFSET))();
		}

		static ::System::Boolean ProbeEntityLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_PROBEENTITYLAYOUT_OFFSET))();
		}

		static ::System::Boolean ProbeMonoLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_PROBEMONOLAYOUT_OFFSET))();
		}

		static ::System::Void CompareRegistry(::System::Int32 frame)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREREGISTRY_OFFSET))(frame);
		}

		static ::System::Void CaptureVisibility(::System::Int32 cameraInstanceID, ::System::Collections::Generic::List_1<::NapRenderEntity*>* dispatchList)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::NapRenderEntity*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREVISIBILITY_OFFSET))(cameraInstanceID, dispatchList);
		}

		static ::System::Void CompareVisibility(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREVISIBILITY_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::Void BeginLightInputCapture(::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_BEGINLIGHTINPUTCAPTURE_OFFSET))(cameraInstanceID);
		}

		static ::System::Void EncodeManagedInput(::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom& input, ::Il2CppArray<::System::Single>* f, ::System::Int32 fBase, ::Il2CppArray<::System::Int32>* iv, ::System::Int32 ivBase)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom&, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENCODEMANAGEDINPUT_OFFSET))(input, f, fBase, iv, ivBase);
		}

		static ::System::Void CaptureLightInputs(::System::Int32 cameraInstanceID, ::System::Collections::Generic::List_1<::NapRenderEntity*>* visibleEntities, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom>* prepareInput, ::System::Collections::Generic::List_1<::System::Int32>* blendLights)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::NapRenderEntity*>*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURELIGHTINPUTS_OFFSET))(cameraInstanceID, visibleEntities, prepareInput, blendLights);
		}

		static ::System::Boolean FloatsEqual(::System::Single managed, ::System::Single native, ::System::Single absEpsilon, ::System::Single relEpsilon, ::System::Single& absDiff, ::System::Single& tolerance)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FLOATSEQUAL_OFFSET))(managed, native, absEpsilon, relEpsilon, absDiff, tolerance);
		}

		static ::System::Boolean IsMatrixSlot(::System::Int32 slot)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISMATRIXSLOT_OFFSET))(slot);
		}

		static ::System::Void CompareLightInputs(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARELIGHTINPUTS_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::String* ResolveRootName(::System::Int32 rootId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RESOLVEROOTNAME_OFFSET))(rootId);
		}

		static ::System::Boolean NapCBSlotSkipped(::System::Int32 slot)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBSLOTSKIPPED_OFFSET))(slot);
		}

		static ::System::Boolean NapCBComponentSkipped(::System::Int32 slot, ::System::Int32 comp)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBCOMPONENTSKIPPED_OFFSET))(slot, comp);
		}

		static ::System::Boolean IsAddLightForwardSlot(::System::Int32 slot)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISADDLIGHTFORWARDSLOT_OFFSET))(slot);
		}

		static ::System::Boolean IsHeadBoneDependentSlot(::System::Int32 slot)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ISHEADBONEDEPENDENTSLOT_OFFSET))(slot);
		}

		static ::System::String* NapCBSlotLabel(::System::Int32 slot)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_NAPCBSLOTLABEL_OFFSET))(slot);
		}

		static ::System::Int32 GetIndicatedAmbientLightCount(::NapRenderEntity* entity)
		{
			return ((::System::Int32(*)(::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GETINDICATEDAMBIENTLIGHTCOUNT_OFFSET))(entity);
		}

		static ::System::String* GetAmbientLightSourceLabel(::System::Int32 root, ::System::Int32 slot)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_GETAMBIENTLIGHTSOURCELABEL_OFFSET))(root, slot);
		}

		static ::System::Void ComparePerObjectShadowSettings(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREPEROBJECTSHADOWSETTINGS_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::Void CompareNapCB(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARENAPCB_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::String* TypeName(::System::Int32 type)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_TYPENAME_OFFSET))(type);
		}

		static ::System::Void EnsureCapacity(::Il2CppArray<::System::Int32>*& array, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_OFFSET))(array, count);
		}

		static ::System::Void EnsureCapacity_1(::Il2CppArray<::System::Single>*& array, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_1_OFFSET))(array, count);
		}

		static ::System::Void CompareMonoPOSRegistry(::System::Int32 frame)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREMONOPOSREGISTRY_OFFSET))(frame);
		}

		static ::System::Void CompareFinalVisiblePOS(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREFINALVISIBLEPOS_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::Void CompareFailedAtlas(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREFAILEDATLAS_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::Void FillEntityNameMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FILLENTITYNAMEMAP_OFFSET))();
		}

		static ::System::String* FormatPosKey(::UnityEngine::Rendering::Universal::NapNREHarness_PosKey key, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* nativeValues, ::System::Boolean native)
		{
			return ((::System::String*(*)(::UnityEngine::Rendering::Universal::NapNREHarness_PosKey, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATPOSKEY_OFFSET))(key, nativeValues, native);
		}

		static ::System::Void BeginPOSSortCapture(::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_BEGINPOSSORTCAPTURE_OFFSET))(cameraInstanceID);
		}

		static ::System::Void CapturePOSSortEarlyExit(::System::Int32 cameraInstanceID, ::System::Int32 reason, ::System::Int32 settingsMaxCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREPOSSORTEARLYEXIT_OFFSET))(cameraInstanceID, reason, settingsMaxCount);
		}

		static ::System::Void CapturePOSSort(::System::Int32 cameraInstanceID, ::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* sortList, ::System::Int32 settingsMaxCount, ::System::Int32 maxDrawCount, ::System::Boolean sortedThisFrame)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTUREPOSSORT_OFFSET))(cameraInstanceID, sortList, settingsMaxCount, maxDrawCount, sortedThisFrame);
		}

		static ::System::String* ExitReasonName(::System::Int32 reason)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_EXITREASONNAME_OFFSET))(reason);
		}

		static ::System::String* FormatPOSSortKey(::UnityEngine::Rendering::Universal::NapNREHarness_PosKey key, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* values)
		{
			return ((::System::String*(*)(::UnityEngine::Rendering::Universal::NapNREHarness_PosKey, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATPOSSORTKEY_OFFSET))(key, values);
		}

		static ::System::String* CullResultName(::System::Int32 cull)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CULLRESULTNAME_OFFSET))(cull);
		}

		static ::System::Void DumpPOSSortList(::System::String* side, ::System::Int32 frame, ::System::Int32 cameraInstanceID, ::UnityEngine::Rendering::Universal::NapNREHarness_POSSortSnapshot* managed, ::System::Int32 nativeCount)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::Universal::NapNREHarness_POSSortSnapshot*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_DUMPPOSSORTLIST_OFFSET))(side, frame, cameraInstanceID, managed, nativeCount);
		}

		static ::System::Void ComparePOSSort(::System::Int32 frame, ::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPAREPOSSORT_OFFSET))(frame, cameraInstanceID);
		}

		static ::System::Void EnsureCapacity_2(::Il2CppArray<::System::Int64>*& array, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int64>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_2_OFFSET))(array, count);
		}

		static ::System::Void EnsureCapacity_3(::Il2CppArray<::System::Byte>*& array, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_ENSURECAPACITY_3_OFFSET))(array, count);
		}

		static ::System::Void CaptureRendererVisibility(::System::Int32 cameraInstanceID, ::System::Int32 frame, ::System::Collections::Generic::IReadOnlyList_1<::NapRenderEntity*>* entities, ::Unity::Collections::NativeList_1<::System::Boolean> queryResult0)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::NapRenderEntity*>*, ::Unity::Collections::NativeList_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURERENDERERVISIBILITY_OFFSET))(cameraInstanceID, frame, entities, queryResult0);
		}

		static ::System::Int64 RendererKey(::System::Int32 rendererInstanceID, ::System::Int64 nativeHandle, ::System::Int32 rootId, ::System::Int32 index)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERKEY_OFFSET))(rendererInstanceID, nativeHandle, rootId, index);
		}

		static ::System::Void CompareRendererVisibility(::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARERENDERERVISIBILITY_OFFSET))(cameraInstanceID);
		}

		static ::System::Void CaptureRendererVisibilityBatch(::System::Int32 cameraInstanceID, ::System::Int32 frame, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData, ::Unity::Collections::NativeList_1<::System::Boolean> queryResult0)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::Unity::Collections::NativeList_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_CAPTURERENDERERVISIBILITYBATCH_OFFSET))(cameraInstanceID, frame, visibilityQueryData, queryResult0);
		}

		static ::System::Void CompareRendererVisibilityBatchOnly(::System::Int32 cameraInstanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_COMPARERENDERERVISIBILITYBATCHONLY_OFFSET))(cameraInstanceID);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Truncate(::System::Collections::Generic::List_1<::System::String*>* list, ::System::Int32 max)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_TRUNCATE_OFFSET))(list, max);
		}

		static ::System::String* FormatManagedKey(::UnityEngine::Rendering::Universal::NapNREHarness_RendererVisibilityRecord r)
		{
			return ((::System::String*(*)(::UnityEngine::Rendering::Universal::NapNREHarness_RendererVisibilityRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATMANAGEDKEY_OFFSET))(r);
		}

		static ::System::String* FormatNativeRV(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_FORMATNATIVERV_OFFSET))(index);
		}

		static ::System::Boolean _CompareLightInputs_g__ValidatePartition_45_0(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* intValues, ::System::Int32 entityCount, ::System::Int32 blendCount, ::System::String* side, ::UnityEngine::Rendering::Universal::NapNREHarness___c__DisplayClass45_0& param_5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::Universal::NapNREHarness___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS__COMPARELIGHTINPUTS_G__VALIDATEPARTITION_45_0_OFFSET))(rootIDs, intValues, entityCount, blendCount, side, param_5);
		}
	};
}

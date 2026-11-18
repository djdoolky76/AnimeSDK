#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialParameterRewriter_ApplicationScope.h"
#include "unitysdk/MaterialParameterRewriter_ParameterType.h"
#include "unitysdk/MaterialParameterRewriter_RewriterMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x1D434F10)
#define MATERIALPARAMETERREWRITER_APPLYCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D433150)
#define MATERIALPARAMETERREWRITER_APPLYEXTENDEDGLOBALPARAMSTOMPB_OFFSET UNITYSDK_OFFSET(0x1D432B30)
#define MATERIALPARAMETERREWRITER_APPLYEXTENDEDNODEPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x1D4331F0)
#define MATERIALPARAMETERREWRITER_APPLYLEGACYGLOBALPARAMSTOMPB_OFFSET UNITYSDK_OFFSET(0x1D433F10)
#define MATERIALPARAMETERREWRITER_APPLYLEGACYNODEPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x1D434390)
#define MATERIALPARAMETERREWRITER_APPLYLEGACYNODESINGLEPARAM_OFFSET UNITYSDK_OFFSET(0x1D434720)
#define MATERIALPARAMETERREWRITER_APPLYLEGACYSINGLEPARAM_OFFSET UNITYSDK_OFFSET(0x1D434200)
#define MATERIALPARAMETERREWRITER_APPLYLEGACYVALUETOMPB_OFFSET UNITYSDK_OFFSET(0x1D4348F0)
#define MATERIALPARAMETERREWRITER_APPLYNOW_OFFSET UNITYSDK_OFFSET(0x1D434B90)
#define MATERIALPARAMETERREWRITER_CLEANUPSTALEMPBCACHEENTRIES_OFFSET UNITYSDK_OFFSET(0x1D4358F0)
#define MATERIALPARAMETERREWRITER_CLEARALLPROPERTYBLOCKS_OFFSET UNITYSDK_OFFSET(0x1D435160)
#define MATERIALPARAMETERREWRITER_COLLECTEXTCOLORSLOTS_OFFSET UNITYSDK_OFFSET(0x1D4318E0)
#define MATERIALPARAMETERREWRITER_COLLECTEXTFLOATSLOTS_OFFSET UNITYSDK_OFFSET(0x1D4310E0)
#define MATERIALPARAMETERREWRITER_COLLECTEXTVECTORSLOTS_OFFSET UNITYSDK_OFFSET(0x1D432220)
#define MATERIALPARAMETERREWRITER_COMMIT_OFFSET UNITYSDK_OFFSET(0x1D4356C0)
#define MATERIALPARAMETERREWRITER_GATHERALLCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D434CD0)
#define MATERIALPARAMETERREWRITER_GETORCREATEMPB_OFFSET UNITYSDK_OFFSET(0x1D435530)
#define MATERIALPARAMETERREWRITER_GETPROPERTYID_OFFSET UNITYSDK_OFFSET(0x1D432F70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x1D433990)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x1D433AD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x1D433C10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x1D433D50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x1D433E90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x1D4338F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x1D433A30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x1D433B70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x1D433CB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x1D433DF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x1D433950)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x1D433A90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x1D433BD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x1D433D10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x1D433E50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x1D4338D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x1D433A10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x1D433B50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x1D433C90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x1D433DD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x1D4339D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x1D433B10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x1D433C50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x1D433D90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x1D433ED0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x1D433970)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x1D433AB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x1D433BF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x1D433D30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x1D433E70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x1D4339F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x1D433B30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x1D433C70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x1D433DB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x1D433EF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x1D4339B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x1D433AF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x1D433C30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x1D433D70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x1D433EB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x1D433930)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x1D433A70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x1D433BB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x1D433CF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x1D433E30)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x1D433910)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x1D433A50)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1D433B90)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x1D433CD0)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x1D433E10)
#define MATERIALPARAMETERREWRITER_ISRENDERERINTARGETNODE_OFFSET UNITYSDK_OFFSET(0x1D4336E0)
#define MATERIALPARAMETERREWRITER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D4354E0)
#define MATERIALPARAMETERREWRITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D435490)
#define MATERIALPARAMETERREWRITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D4353E0)
#define MATERIALPARAMETERREWRITER_REFRESHCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D435390)
#define MATERIALPARAMETERREWRITER_RESCANCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D435790)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x1D4339A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x1D433AE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x1D433C20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x1D433D60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x1D433EA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x1D433900)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x1D433A40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x1D433B80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x1D433CC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x1D433E00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x1D433960)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x1D433AA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x1D433BE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x1D433D20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x1D433E60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x1D4338E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x1D433A20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x1D433B60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x1D433CA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x1D433DE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x1D4339E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x1D433B20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x1D433C60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x1D433DA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x1D433EE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x1D433980)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x1D433AC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x1D433C00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x1D433D40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x1D433E80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x1D433A00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x1D433B40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x1D433C80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x1D433DC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x1D433F00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x1D4339C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x1D433B00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x1D433C40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x1D433D80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x1D433EC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x1D433940)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x1D433A80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x1D433BC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x1D433D00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x1D433E40)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x1D433920)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x1D433A60)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1D433BA0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x1D433CE0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x1D433E20)
#define MATERIALPARAMETERREWRITER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D435430)
#define MATERIALPARAMETERREWRITER_VALIDATEPARAMNAME_OFFSET UNITYSDK_OFFSET(0x1D435730)
#define MATERIALPARAMETERREWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D436320)
#define MATERIALPARAMETERREWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D435C40)

inline static constexpr unsigned int MaterialParameterRewriter_TypeDefinitionIndex = 26446;

class MaterialParameterRewriter : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet__propertyIdCache()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialParameterRewriter_TypeDefinitionIndex)->GetStaticField(0x24A10);
	}
	// static const ::System::Int32 ExtSlotGroupCapacity = 0xC; // 0x0
	::Il2CppArray<::System::Object*>* _extFloatSlotsBuffer; // 0x18
	::Il2CppArray<::System::Object*>* _extColorSlotsBuffer; // 0x20
	::Il2CppArray<::System::Object*>* _extVectorSlotsBuffer; // 0x28
	::System::Boolean _extColorEnabled0; // 0x30
	::System::Byte _padding0[0x7];
	::System::String* _extColorParamName0; // 0x38
	::UnityEngine::Color _extColorValue0; // 0x40
	::System::Single _extColorIntensity0; // 0x50
	::MaterialParameterRewriter_ApplicationScope _extColorScope0; // 0x54
	::UnityEngine::Transform* _extColorTargetNode0; // 0x58
	::System::Boolean _extColorIncludeChildren0; // 0x60
	::System::Boolean _extColorEnabled1; // 0x61
	::System::Byte _padding1[0x6];
	::System::String* _extColorParamName1; // 0x68
	::UnityEngine::Color _extColorValue1; // 0x70
	::System::Single _extColorIntensity1; // 0x80
	::MaterialParameterRewriter_ApplicationScope _extColorScope1; // 0x84
	::UnityEngine::Transform* _extColorTargetNode1; // 0x88
	::System::Boolean _extColorIncludeChildren1; // 0x90
	::System::Boolean _extColorEnabled2; // 0x91
	::System::Byte _padding2[0x6];
	::System::String* _extColorParamName2; // 0x98
	::UnityEngine::Color _extColorValue2; // 0xA0
	::System::Single _extColorIntensity2; // 0xB0
	::MaterialParameterRewriter_ApplicationScope _extColorScope2; // 0xB4
	::UnityEngine::Transform* _extColorTargetNode2; // 0xB8
	::System::Boolean _extColorIncludeChildren2; // 0xC0
	::System::Boolean _extColorEnabled3; // 0xC1
	::System::Byte _padding3[0x6];
	::System::String* _extColorParamName3; // 0xC8
	::UnityEngine::Color _extColorValue3; // 0xD0
	::System::Single _extColorIntensity3; // 0xE0
	::MaterialParameterRewriter_ApplicationScope _extColorScope3; // 0xE4
	::UnityEngine::Transform* _extColorTargetNode3; // 0xE8
	::System::Boolean _extColorIncludeChildren3; // 0xF0
	::System::Boolean _extColorEnabled4; // 0xF1
	::System::Byte _padding4[0x6];
	::System::String* _extColorParamName4; // 0xF8
	::UnityEngine::Color _extColorValue4; // 0x100
	::System::Single _extColorIntensity4; // 0x110
	::MaterialParameterRewriter_ApplicationScope _extColorScope4; // 0x114
	::UnityEngine::Transform* _extColorTargetNode4; // 0x118
	::System::Boolean _extColorIncludeChildren4; // 0x120
	::System::Boolean _extColorEnabled5; // 0x121
	::System::Byte _padding5[0x6];
	::System::String* _extColorParamName5; // 0x128
	::UnityEngine::Color _extColorValue5; // 0x130
	::System::Single _extColorIntensity5; // 0x140
	::MaterialParameterRewriter_ApplicationScope _extColorScope5; // 0x144
	::UnityEngine::Transform* _extColorTargetNode5; // 0x148
	::System::Boolean _extColorIncludeChildren5; // 0x150
	::System::Boolean _extColorEnabled6; // 0x151
	::System::Byte _padding6[0x6];
	::System::String* _extColorParamName6; // 0x158
	::UnityEngine::Color _extColorValue6; // 0x160
	::System::Single _extColorIntensity6; // 0x170
	::MaterialParameterRewriter_ApplicationScope _extColorScope6; // 0x174
	::UnityEngine::Transform* _extColorTargetNode6; // 0x178
	::System::Boolean _extColorIncludeChildren6; // 0x180
	::System::Boolean _extColorEnabled7; // 0x181
	::System::Byte _padding7[0x6];
	::System::String* _extColorParamName7; // 0x188
	::UnityEngine::Color _extColorValue7; // 0x190
	::System::Single _extColorIntensity7; // 0x1A0
	::MaterialParameterRewriter_ApplicationScope _extColorScope7; // 0x1A4
	::UnityEngine::Transform* _extColorTargetNode7; // 0x1A8
	::System::Boolean _extColorIncludeChildren7; // 0x1B0
	::System::Boolean _extColorEnabled8; // 0x1B1
	::System::Byte _padding8[0x6];
	::System::String* _extColorParamName8; // 0x1B8
	::UnityEngine::Color _extColorValue8; // 0x1C0
	::System::Single _extColorIntensity8; // 0x1D0
	::MaterialParameterRewriter_ApplicationScope _extColorScope8; // 0x1D4
	::UnityEngine::Transform* _extColorTargetNode8; // 0x1D8
	::System::Boolean _extColorIncludeChildren8; // 0x1E0
	::System::Boolean _extColorEnabled9; // 0x1E1
	::System::Byte _padding9[0x6];
	::System::String* _extColorParamName9; // 0x1E8
	::UnityEngine::Color _extColorValue9; // 0x1F0
	::System::Single _extColorIntensity9; // 0x200
	::MaterialParameterRewriter_ApplicationScope _extColorScope9; // 0x204
	::UnityEngine::Transform* _extColorTargetNode9; // 0x208
	::System::Boolean _extColorIncludeChildren9; // 0x210
	::System::Boolean _extColorEnabled10; // 0x211
	::System::Byte _padding10[0x6];
	::System::String* _extColorParamName10; // 0x218
	::UnityEngine::Color _extColorValue10; // 0x220
	::System::Single _extColorIntensity10; // 0x230
	::MaterialParameterRewriter_ApplicationScope _extColorScope10; // 0x234
	::UnityEngine::Transform* _extColorTargetNode10; // 0x238
	::System::Boolean _extColorIncludeChildren10; // 0x240
	::System::Boolean _extColorEnabled11; // 0x241
	::System::Byte _padding11[0x6];
	::System::String* _extColorParamName11; // 0x248
	::UnityEngine::Color _extColorValue11; // 0x250
	::System::Single _extColorIntensity11; // 0x260
	::MaterialParameterRewriter_ApplicationScope _extColorScope11; // 0x264
	::UnityEngine::Transform* _extColorTargetNode11; // 0x268
	::System::Boolean _extColorIncludeChildren11; // 0x270
	::System::Boolean _extFloatEnabled0; // 0x271
	::System::Byte _padding12[0x6];
	::System::String* _extFloatParamName0; // 0x278
	::System::Single _extFloatValue0; // 0x280
	::MaterialParameterRewriter_ApplicationScope _extFloatScope0; // 0x284
	::UnityEngine::Transform* _extFloatTargetNode0; // 0x288
	::System::Boolean _extFloatIncludeChildren0; // 0x290
	::System::Boolean _extFloatEnabled1; // 0x291
	::System::Byte _padding13[0x6];
	::System::String* _extFloatParamName1; // 0x298
	::System::Single _extFloatValue1; // 0x2A0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope1; // 0x2A4
	::UnityEngine::Transform* _extFloatTargetNode1; // 0x2A8
	::System::Boolean _extFloatIncludeChildren1; // 0x2B0
	::System::Boolean _extFloatEnabled2; // 0x2B1
	::System::Byte _padding14[0x6];
	::System::String* _extFloatParamName2; // 0x2B8
	::System::Single _extFloatValue2; // 0x2C0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope2; // 0x2C4
	::UnityEngine::Transform* _extFloatTargetNode2; // 0x2C8
	::System::Boolean _extFloatIncludeChildren2; // 0x2D0
	::System::Boolean _extFloatEnabled3; // 0x2D1
	::System::Byte _padding15[0x6];
	::System::String* _extFloatParamName3; // 0x2D8
	::System::Single _extFloatValue3; // 0x2E0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope3; // 0x2E4
	::UnityEngine::Transform* _extFloatTargetNode3; // 0x2E8
	::System::Boolean _extFloatIncludeChildren3; // 0x2F0
	::System::Boolean _extFloatEnabled4; // 0x2F1
	::System::Byte _padding16[0x6];
	::System::String* _extFloatParamName4; // 0x2F8
	::System::Single _extFloatValue4; // 0x300
	::MaterialParameterRewriter_ApplicationScope _extFloatScope4; // 0x304
	::UnityEngine::Transform* _extFloatTargetNode4; // 0x308
	::System::Boolean _extFloatIncludeChildren4; // 0x310
	::System::Boolean _extFloatEnabled5; // 0x311
	::System::Byte _padding17[0x6];
	::System::String* _extFloatParamName5; // 0x318
	::System::Single _extFloatValue5; // 0x320
	::MaterialParameterRewriter_ApplicationScope _extFloatScope5; // 0x324
	::UnityEngine::Transform* _extFloatTargetNode5; // 0x328
	::System::Boolean _extFloatIncludeChildren5; // 0x330
	::System::Boolean _extFloatEnabled6; // 0x331
	::System::Byte _padding18[0x6];
	::System::String* _extFloatParamName6; // 0x338
	::System::Single _extFloatValue6; // 0x340
	::MaterialParameterRewriter_ApplicationScope _extFloatScope6; // 0x344
	::UnityEngine::Transform* _extFloatTargetNode6; // 0x348
	::System::Boolean _extFloatIncludeChildren6; // 0x350
	::System::Boolean _extFloatEnabled7; // 0x351
	::System::Byte _padding19[0x6];
	::System::String* _extFloatParamName7; // 0x358
	::System::Single _extFloatValue7; // 0x360
	::MaterialParameterRewriter_ApplicationScope _extFloatScope7; // 0x364
	::UnityEngine::Transform* _extFloatTargetNode7; // 0x368
	::System::Boolean _extFloatIncludeChildren7; // 0x370
	::System::Boolean _extFloatEnabled8; // 0x371
	::System::Byte _padding20[0x6];
	::System::String* _extFloatParamName8; // 0x378
	::System::Single _extFloatValue8; // 0x380
	::MaterialParameterRewriter_ApplicationScope _extFloatScope8; // 0x384
	::UnityEngine::Transform* _extFloatTargetNode8; // 0x388
	::System::Boolean _extFloatIncludeChildren8; // 0x390
	::System::Boolean _extFloatEnabled9; // 0x391
	::System::Byte _padding21[0x6];
	::System::String* _extFloatParamName9; // 0x398
	::System::Single _extFloatValue9; // 0x3A0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope9; // 0x3A4
	::UnityEngine::Transform* _extFloatTargetNode9; // 0x3A8
	::System::Boolean _extFloatIncludeChildren9; // 0x3B0
	::System::Boolean _extFloatEnabled10; // 0x3B1
	::System::Byte _padding22[0x6];
	::System::String* _extFloatParamName10; // 0x3B8
	::System::Single _extFloatValue10; // 0x3C0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope10; // 0x3C4
	::UnityEngine::Transform* _extFloatTargetNode10; // 0x3C8
	::System::Boolean _extFloatIncludeChildren10; // 0x3D0
	::System::Boolean _extFloatEnabled11; // 0x3D1
	::System::Byte _padding23[0x6];
	::System::String* _extFloatParamName11; // 0x3D8
	::System::Single _extFloatValue11; // 0x3E0
	::MaterialParameterRewriter_ApplicationScope _extFloatScope11; // 0x3E4
	::UnityEngine::Transform* _extFloatTargetNode11; // 0x3E8
	::System::Boolean _extFloatIncludeChildren11; // 0x3F0
	::System::Boolean _extVectorEnabled0; // 0x3F1
	::System::Byte _padding24[0x6];
	::System::String* _extVectorParamName0; // 0x3F8
	::UnityEngine::Vector4 _extVectorValue0; // 0x400
	::MaterialParameterRewriter_ApplicationScope _extVectorScope0; // 0x410
	::System::Byte _padding25[0x4];
	::UnityEngine::Transform* _extVectorTargetNode0; // 0x418
	::System::Boolean _extVectorIncludeChildren0; // 0x420
	::System::Boolean _extVectorEnabled1; // 0x421
	::System::Byte _padding26[0x6];
	::System::String* _extVectorParamName1; // 0x428
	::UnityEngine::Vector4 _extVectorValue1; // 0x430
	::MaterialParameterRewriter_ApplicationScope _extVectorScope1; // 0x440
	::System::Byte _padding27[0x4];
	::UnityEngine::Transform* _extVectorTargetNode1; // 0x448
	::System::Boolean _extVectorIncludeChildren1; // 0x450
	::System::Boolean _extVectorEnabled2; // 0x451
	::System::Byte _padding28[0x6];
	::System::String* _extVectorParamName2; // 0x458
	::UnityEngine::Vector4 _extVectorValue2; // 0x460
	::MaterialParameterRewriter_ApplicationScope _extVectorScope2; // 0x470
	::System::Byte _padding29[0x4];
	::UnityEngine::Transform* _extVectorTargetNode2; // 0x478
	::System::Boolean _extVectorIncludeChildren2; // 0x480
	::System::Boolean _extVectorEnabled3; // 0x481
	::System::Byte _padding30[0x6];
	::System::String* _extVectorParamName3; // 0x488
	::UnityEngine::Vector4 _extVectorValue3; // 0x490
	::MaterialParameterRewriter_ApplicationScope _extVectorScope3; // 0x4A0
	::System::Byte _padding31[0x4];
	::UnityEngine::Transform* _extVectorTargetNode3; // 0x4A8
	::System::Boolean _extVectorIncludeChildren3; // 0x4B0
	::System::Boolean _extVectorEnabled4; // 0x4B1
	::System::Byte _padding32[0x6];
	::System::String* _extVectorParamName4; // 0x4B8
	::UnityEngine::Vector4 _extVectorValue4; // 0x4C0
	::MaterialParameterRewriter_ApplicationScope _extVectorScope4; // 0x4D0
	::System::Byte _padding33[0x4];
	::UnityEngine::Transform* _extVectorTargetNode4; // 0x4D8
	::System::Boolean _extVectorIncludeChildren4; // 0x4E0
	::System::Boolean _extVectorEnabled5; // 0x4E1
	::System::Byte _padding34[0x6];
	::System::String* _extVectorParamName5; // 0x4E8
	::UnityEngine::Vector4 _extVectorValue5; // 0x4F0
	::MaterialParameterRewriter_ApplicationScope _extVectorScope5; // 0x500
	::System::Byte _padding35[0x4];
	::UnityEngine::Transform* _extVectorTargetNode5; // 0x508
	::System::Boolean _extVectorIncludeChildren5; // 0x510
	::System::Boolean _extVectorEnabled6; // 0x511
	::System::Byte _padding36[0x6];
	::System::String* _extVectorParamName6; // 0x518
	::UnityEngine::Vector4 _extVectorValue6; // 0x520
	::MaterialParameterRewriter_ApplicationScope _extVectorScope6; // 0x530
	::System::Byte _padding37[0x4];
	::UnityEngine::Transform* _extVectorTargetNode6; // 0x538
	::System::Boolean _extVectorIncludeChildren6; // 0x540
	::System::Boolean _extVectorEnabled7; // 0x541
	::System::Byte _padding38[0x6];
	::System::String* _extVectorParamName7; // 0x548
	::UnityEngine::Vector4 _extVectorValue7; // 0x550
	::MaterialParameterRewriter_ApplicationScope _extVectorScope7; // 0x560
	::System::Byte _padding39[0x4];
	::UnityEngine::Transform* _extVectorTargetNode7; // 0x568
	::System::Boolean _extVectorIncludeChildren7; // 0x570
	::System::Boolean _extVectorEnabled8; // 0x571
	::System::Byte _padding40[0x6];
	::System::String* _extVectorParamName8; // 0x578
	::UnityEngine::Vector4 _extVectorValue8; // 0x580
	::MaterialParameterRewriter_ApplicationScope _extVectorScope8; // 0x590
	::System::Byte _padding41[0x4];
	::UnityEngine::Transform* _extVectorTargetNode8; // 0x598
	::System::Boolean _extVectorIncludeChildren8; // 0x5A0
	::System::Boolean _extVectorEnabled9; // 0x5A1
	::System::Byte _padding42[0x6];
	::System::String* _extVectorParamName9; // 0x5A8
	::UnityEngine::Vector4 _extVectorValue9; // 0x5B0
	::MaterialParameterRewriter_ApplicationScope _extVectorScope9; // 0x5C0
	::System::Byte _padding43[0x4];
	::UnityEngine::Transform* _extVectorTargetNode9; // 0x5C8
	::System::Boolean _extVectorIncludeChildren9; // 0x5D0
	::System::Boolean _extVectorEnabled10; // 0x5D1
	::System::Byte _padding44[0x6];
	::System::String* _extVectorParamName10; // 0x5D8
	::UnityEngine::Vector4 _extVectorValue10; // 0x5E0
	::MaterialParameterRewriter_ApplicationScope _extVectorScope10; // 0x5F0
	::System::Byte _padding45[0x4];
	::UnityEngine::Transform* _extVectorTargetNode10; // 0x5F8
	::System::Boolean _extVectorIncludeChildren10; // 0x600
	::System::Boolean _extVectorEnabled11; // 0x601
	::System::Byte _padding46[0x6];
	::System::String* _extVectorParamName11; // 0x608
	::UnityEngine::Vector4 _extVectorValue11; // 0x610
	::MaterialParameterRewriter_ApplicationScope _extVectorScope11; // 0x620
	::System::Byte _padding47[0x4];
	::UnityEngine::Transform* _extVectorTargetNode11; // 0x628
	::System::Boolean _extVectorIncludeChildren11; // 0x630
	::System::Boolean tickEveryFrame; // 0x631
	::System::Boolean _animatedEnabled0; // 0x632
	::System::Byte _padding48[0x5];
	::System::String* _animatedParamName0; // 0x638
	::MaterialParameterRewriter_ParameterType _paramType0; // 0x640
	::System::Single _animatedFloat0; // 0x644
	::UnityEngine::Color _animatedColor0; // 0x648
	::System::Single _colorIntensity0; // 0x658
	::UnityEngine::Vector4 _animatedVector0; // 0x65C
	::MaterialParameterRewriter_ApplicationScope _applicationScope0; // 0x66C
	::UnityEngine::Transform* _targetNode0; // 0x670
	::System::Boolean _includeChildren0; // 0x678
	::System::Boolean _animatedEnabled1; // 0x679
	::System::Byte _padding49[0x6];
	::System::String* _animatedParamName1; // 0x680
	::MaterialParameterRewriter_ParameterType _paramType1; // 0x688
	::System::Single _animatedFloat1; // 0x68C
	::UnityEngine::Color _animatedColor1; // 0x690
	::System::Single _colorIntensity1; // 0x6A0
	::UnityEngine::Vector4 _animatedVector1; // 0x6A4
	::MaterialParameterRewriter_ApplicationScope _applicationScope1; // 0x6B4
	::UnityEngine::Transform* _targetNode1; // 0x6B8
	::System::Boolean _includeChildren1; // 0x6C0
	::System::Boolean _animatedEnabled2; // 0x6C1
	::System::Byte _padding50[0x6];
	::System::String* _animatedParamName2; // 0x6C8
	::MaterialParameterRewriter_ParameterType _paramType2; // 0x6D0
	::System::Single _animatedFloat2; // 0x6D4
	::UnityEngine::Color _animatedColor2; // 0x6D8
	::System::Single _colorIntensity2; // 0x6E8
	::UnityEngine::Vector4 _animatedVector2; // 0x6EC
	::MaterialParameterRewriter_ApplicationScope _applicationScope2; // 0x6FC
	::UnityEngine::Transform* _targetNode2; // 0x700
	::System::Boolean _includeChildren2; // 0x708
	::System::Boolean _animatedEnabled3; // 0x709
	::System::Byte _padding51[0x6];
	::System::String* _animatedParamName3; // 0x710
	::MaterialParameterRewriter_ParameterType _paramType3; // 0x718
	::System::Single _animatedFloat3; // 0x71C
	::UnityEngine::Color _animatedColor3; // 0x720
	::System::Single _colorIntensity3; // 0x730
	::UnityEngine::Vector4 _animatedVector3; // 0x734
	::MaterialParameterRewriter_ApplicationScope _applicationScope3; // 0x744
	::UnityEngine::Transform* _targetNode3; // 0x748
	::System::Boolean _includeChildren3; // 0x750
	::System::Boolean _animatedEnabled4; // 0x751
	::System::Byte _padding52[0x6];
	::System::String* _animatedParamName4; // 0x758
	::MaterialParameterRewriter_ParameterType _paramType4; // 0x760
	::System::Single _animatedFloat4; // 0x764
	::UnityEngine::Color _animatedColor4; // 0x768
	::System::Single _colorIntensity4; // 0x778
	::UnityEngine::Vector4 _animatedVector4; // 0x77C
	::MaterialParameterRewriter_ApplicationScope _applicationScope4; // 0x78C
	::UnityEngine::Transform* _targetNode4; // 0x790
	::System::Boolean _includeChildren4; // 0x798
	::System::Boolean editModeLiveApply; // 0x799
	::System::Byte _padding53[0x2];
	::MaterialParameterRewriter_RewriterMode _mode; // 0x79C
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _tmpAllChildRenderers; // 0x7A0
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _rendererBuffer; // 0x7A8
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _tmpStaleMpbKeys; // 0x7B0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* _mpbCache; // 0x7B8
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _cachedChildRenderers; // 0x7C0
	::System::Boolean _childRenderersDirty; // 0x7C8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Object*>* CollectExtFloatSlots()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_COLLECTEXTFLOATSLOTS_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* CollectExtColorSlots()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_COLLECTEXTCOLORSLOTS_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* CollectExtVectorSlots()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_COLLECTEXTVECTORSLOTS_OFFSET))(this);
	}

	::System::Void ApplyExtendedGlobalParamsToMPB(::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::Object*>* floatSlots, ::Il2CppArray<::System::Object*>* colorSlots, ::Il2CppArray<::System::Object*>* vectorSlots)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYEXTENDEDGLOBALPARAMSTOMPB_OFFSET))(this, mpb, floatSlots, colorSlots, vectorSlots);
	}

	::System::Void ApplyExtendedNodeParamsToRenderer(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::Object*>* floatSlots, ::Il2CppArray<::System::Object*>* colorSlots, ::Il2CppArray<::System::Object*>* vectorSlots)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYEXTENDEDNODEPARAMSTORENDERER_OFFSET))(this, r, mpb, floatSlots, colorSlots, vectorSlots);
	}

	::System::Single get_AnimatedFloat0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT0_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat0(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT0_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor0()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR0_OFFSET))(this);
	}

	::System::Void set_AnimatedColor0(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR0_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY0_OFFSET))(this);
	}

	::System::Void set_ColorIntensity0(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY0_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector0()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR0_OFFSET))(this);
	}

	::System::Void set_AnimatedVector0(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR0_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED0_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled0(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED0_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME0_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName0(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME0_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope0()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE0_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope0(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE0_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode0()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE0_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode0(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE0_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN0_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren0(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN0_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType0()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE0_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType0(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE0_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT1_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat1(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT1_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor1()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR1_OFFSET))(this);
	}

	::System::Void set_AnimatedColor1(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR1_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY1_OFFSET))(this);
	}

	::System::Void set_ColorIntensity1(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY1_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector1()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR1_OFFSET))(this);
	}

	::System::Void set_AnimatedVector1(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR1_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED1_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled1(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED1_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME1_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName1(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME1_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope1()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE1_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope1(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE1_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE1_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode1(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE1_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN1_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren1(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN1_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType1()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE1_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType1(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE1_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT2_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat2(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT2_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor2()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR2_OFFSET))(this);
	}

	::System::Void set_AnimatedColor2(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR2_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY2_OFFSET))(this);
	}

	::System::Void set_ColorIntensity2(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY2_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector2()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR2_OFFSET))(this);
	}

	::System::Void set_AnimatedVector2(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR2_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED2_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled2(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED2_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME2_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName2(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME2_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope2()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE2_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope2(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE2_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE2_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode2(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE2_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN2_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren2(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN2_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType2()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE2_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType2(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE2_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT3_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat3(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT3_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor3()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR3_OFFSET))(this);
	}

	::System::Void set_AnimatedColor3(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR3_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY3_OFFSET))(this);
	}

	::System::Void set_ColorIntensity3(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY3_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector3()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR3_OFFSET))(this);
	}

	::System::Void set_AnimatedVector3(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR3_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED3_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED3_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME3_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName3(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME3_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope3()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE3_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope3(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE3_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE3_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode3(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE3_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN3_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN3_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType3()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE3_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType3(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE3_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT4_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat4(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT4_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor4()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR4_OFFSET))(this);
	}

	::System::Void set_AnimatedColor4(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR4_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY4_OFFSET))(this);
	}

	::System::Void set_ColorIntensity4(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY4_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector4()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR4_OFFSET))(this);
	}

	::System::Void set_AnimatedVector4(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR4_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED4_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled4(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED4_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME4_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName4(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME4_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope4()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE4_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope4(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE4_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode4()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE4_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode4(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE4_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN4_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren4(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN4_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType4()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE4_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType4(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE4_OFFSET))(this, value);
	}

	::System::Void ApplyLegacyGlobalParamsToMPB(::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYLEGACYGLOBALPARAMSTOMPB_OFFSET))(this, mpb);
	}

	::System::Void ApplyLegacyNodeParamsToRenderer(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYLEGACYNODEPARAMSTORENDERER_OFFSET))(this, r, mpb);
	}

	::System::Void ApplyLegacySingleParam(::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::MaterialParameterRewriter_ApplicationScope scope, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::System::Boolean enabled, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity, ::System::Boolean isGlobal)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::MaterialParameterRewriter_ApplicationScope, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Boolean, ::MaterialParameterRewriter_ParameterType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYLEGACYSINGLEPARAM_OFFSET))(this, mpb, paramName, scope, floatValue, colorValue, vectorValue, enabled, paramType, colorIntensity, isGlobal);
	}

	::System::Void ApplyLegacyNodeSingleParam(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::MaterialParameterRewriter_ApplicationScope scope, ::UnityEngine::Transform* targetNode, ::System::Boolean includeChildren, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::System::Boolean enabled, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::MaterialParameterRewriter_ApplicationScope, ::UnityEngine::Transform*, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Boolean, ::MaterialParameterRewriter_ParameterType, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYLEGACYNODESINGLEPARAM_OFFSET))(this, r, mpb, paramName, scope, targetNode, includeChildren, floatValue, colorValue, vectorValue, enabled, paramType, colorIntensity);
	}

	::System::Void ApplyLegacyValueToMPB(::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::MaterialParameterRewriter_ParameterType, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYLEGACYVALUETOMPB_OFFSET))(this, mpb, paramName, floatValue, colorValue, vectorValue, paramType, colorIntensity);
	}

	::System::Void ApplyNow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYNOW_OFFSET))(this);
	}

	::System::Void ClearAllPropertyBlocks()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_CLEARALLPROPERTYBLOCKS_OFFSET))(this);
	}

	::System::Void RefreshChildRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_REFRESHCHILDRENDERERS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ONDESTROY_OFFSET))(this);
	}

	::System::Void ApplyAnimatedParamsToRenderer(::UnityEngine::Renderer* r, ::Il2CppArray<::System::Object*>* floatSlots, ::Il2CppArray<::System::Object*>* colorSlots, ::Il2CppArray<::System::Object*>* vectorSlots)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMSTORENDERER_OFFSET))(this, r, floatSlots, colorSlots, vectorSlots);
	}

	::System::Boolean ValidateParamName(::System::String* paramName)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_VALIDATEPARAMNAME_OFFSET))(this, paramName);
	}

	::System::Boolean IsRendererInTargetNode(::UnityEngine::Renderer* renderer, ::UnityEngine::Transform* targetNode, ::System::Boolean includeChildren)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ISRENDERERINTARGETNODE_OFFSET))(this, renderer, targetNode, includeChildren);
	}

	::UnityEngine::Color ApplyColorIntensity(::UnityEngine::Color originalColor, ::System::Single intensity)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYCOLORINTENSITY_OFFSET))(this, originalColor, intensity);
	}

	static ::System::Int32 GetPropertyId(::System::String* paramName)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GETPROPERTYID_OFFSET))(paramName);
	}

	::UnityEngine::MaterialPropertyBlock* GetOrCreateMPB(::UnityEngine::Renderer* r)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GETORCREATEMPB_OFFSET))(this, r);
	}

	::System::Void Commit(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_COMMIT_OFFSET))(this, r, mpb);
	}

	::System::Void GatherAllChildRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* list)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GATHERALLCHILDRENDERERS_OFFSET))(this, list);
	}

	::System::Void RescanChildRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_RESCANCHILDRENDERERS_OFFSET))(this);
	}

	::System::Void CleanupStaleMpbCacheEntries()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_CLEANUPSTALEMPBCACHEENTRIES_OFFSET))(this);
	}
};

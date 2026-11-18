#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0xED4EAA0)
#define NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET UNITYSDK_OFFSET(0xED4F3D0)
#define NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0xED4F7B0)
#define NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0xED4E600)
#define NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET UNITYSDK_OFFSET(0xED4FE80)
#define NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET UNITYSDK_OFFSET(0xED4F9F0)
#define NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0xED4E430)
#define NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xED4E960)
#define NPCAVATARDEFINE_GETPARTSID_OFFSET UNITYSDK_OFFSET(0xED4E7D0)
#define NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0xED4EE30)
#define NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET UNITYSDK_OFFSET(0xED4ED00)
#define NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET UNITYSDK_OFFSET(0xED4E090)
#define NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET UNITYSDK_OFFSET(0xED4E260)
#define NPCAVATARDEFINE_ISRANDOMNPC_OFFSET UNITYSDK_OFFSET(0xED4EBB0)
#define NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET UNITYSDK_OFFSET(0xED4DFD0)
#define NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET UNITYSDK_OFFSET(0xED4EA20)
#define NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0xED4EAF0)
#define NPCAVATARDEFINE_PARSENUMBYID_OFFSET UNITYSDK_OFFSET(0xED4EC90)
#define NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET UNITYSDK_OFFSET(0xED4E9B0)
#define NPCAVATARDEFINE_SPLITPARTSID_OFFSET UNITYSDK_OFFSET(0xED4E840)
#define NPCAVATARDEFINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xED4FF90)

inline static constexpr unsigned int NPCAvatarDefine_TypeDefinitionIndex = 65857;

struct alignas(4) NPCAvatarDefine
{
	static ::System::String** StaticGet_Name_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AD0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AD8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AE0);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AE8);
	}
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_AllBodyPartEnums()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AF0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39AF8);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B00);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_StandardDeviceSizeList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B08);
	}
	static ::System::String** StaticGet_Name_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B10);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B18);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B20);
	}
	static ::System::String** StaticGet_Name_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B28);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B30);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B38);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B40);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B48);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B50);
	}
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_BlendShapePartTypes()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B58);
	}
	static ::System::String** StaticGet_Name_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B60);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B68);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B70);
	}
	static ::System::String** StaticGet_Name_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B78);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_BakedGPUAnimationWhiteList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B80);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B88);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_GPU_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B90);
	}
	static ::System::String** StaticGet_Name_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x39B98);
	}
	static ::System::Single* StaticGet_FadeOutTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xD0F0);
	}
	static ::System::Boolean* StaticGet_bUseSceneExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xD0F4);
	}
	static ::System::Boolean* StaticGet_bUseExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xD0F5);
	}
	static ::System::Single* StaticGet_FadeInTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xD0F8);
	}
	static ::System::Int32* StaticGet_RandomNpcCountBase()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xD0FC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARDEFINE__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsUseExtraSimpleMesh(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInBakedGPUAnimationWhiteList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInStandardDeviceSizeList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET))(gender, size);
	}

	static ::System::String* GetPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::String* GetGPUPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::Int32 GetPartsID(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTSID_OFFSET))(gender, size, part, number);
	}

	static ::System::Void SplitPartsID(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTSID_OFFSET))(id, gender, size, part, number);
	}

	static ::System::Int32 GetPartOverrideId(::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET))(part, number);
	}

	static ::System::Void SplitPartOverrideInfoId(::System::Int32 id, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET))(id, part, number);
	}

	static ::System::Void ParseBodyPartTypeById(::System::Int32 id, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET))(id, part);
	}

	static ::System::Int32 CombineGenderSizeById(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET))(gender, size);
	}

	static ::System::Void ParseGenderSizeById(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET))(id, gender, size);
	}

	static ::System::Boolean IsRandomNPC(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISRANDOMNPC_OFFSET))(id);
	}

	static ::System::Int32 GetRandomNPCId(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET))(gender, size, number);
	}

	static ::System::Void ParseNumById(::System::Int32 id, ::System::Int32& num)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSENUMBYID_OFFSET))(id, num);
	}

	static ::System::Boolean GetPureBodyPartTypeFromName(::System::String* inname, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET))(inname, part);
	}

	static ::System::Boolean GetBodyInfoFromName(::System::String* name, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET))(name, gender, size);
	}

	static ::ENPCAvatarBodyPart GetBodyPartTypeFromName(::System::String* inname)
	{
		return ((::ENPCAvatarBodyPart(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET))(inname);
	}

	static ::System::String* GetPartLOD0MeshName(::System::Int32 partId)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET))(partId);
	}

	static ::System::String* GetPartBlendShapeAnimName(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET))(gender, size, part);
	}
};

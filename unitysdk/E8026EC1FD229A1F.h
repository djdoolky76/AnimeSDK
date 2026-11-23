#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputObjectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

class B8BA72B8982BFB15;
class E1153259FC38F47B;
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputHDAInfo; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_InputObjectInfo; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define E8026EC1FD229A1F_AF3A4E3554C7A17D_OFFSET UNITYSDK_OFFSET(0x385C600)
#define E8026EC1FD229A1F_B986A0044EC54EB1_OFFSET UNITYSDK_OFFSET(0x385C170)
#define E8026EC1FD229A1F_E9C19DBD5E52A0EE_OFFSET UNITYSDK_OFFSET(0x385B650)
#define E8026EC1FD229A1F_EDC52E4EB5CB2E86_OFFSET UNITYSDK_OFFSET(0x385BA30)
#define E8026EC1FD229A1F_F18A947C1FCABA08_OFFSET UNITYSDK_OFFSET(0x385C490)
#define E8026EC1FD229A1F_F62C8395912125D4_OFFSET UNITYSDK_OFFSET(0x385C360)
#define E8026EC1FD229A1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x385CC00)

inline static constexpr unsigned int E8026EC1FD229A1F_TypeDefinitionIndex = 17992;

class E8026EC1FD229A1F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::B8BA72B8982BFB15*>** StaticGet_EE7B5D95517336C6()
	{
		return (::System::Collections::Generic::List_1<::B8BA72B8982BFB15*>**)Il2CppClass::FromTypeDefinitionIndex(E8026EC1FD229A1F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8026EC1FD229A1F__CCTOR_OFFSET))();
	}

	static ::B8BA72B8982BFB15* F18A947C1FCABA08(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::B8BA72B8982BFB15*(*)(::System::Type*))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_F18A947C1FCABA08_OFFSET))(A288CB28FC2A6DA3);
	}

	static ::B8BA72B8982BFB15* F62C8395912125D4(::HoudiniEngineUnity::HEU_InputNode_InputObjectType B544DB87009F70B8)
	{
		return ((::B8BA72B8982BFB15*(*)(::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_F62C8395912125D4_OFFSET))(B544DB87009F70B8);
	}

	static ::System::Void B986A0044EC54EB1(::UnityEngine::Transform* E7A41DB667CBC570, ::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>*& FBC57247F5E2D293)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>*&))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_B986A0044EC54EB1_OFFSET))(E7A41DB667CBC570, FBC57247F5E2D293);
	}

	static ::System::Boolean AF3A4E3554C7A17D(::E1153259FC38F47B* AF4435B7B5FB505E, ::HoudiniEngineUnity::HEU_InputObjectInfo* E9A4F4F2060D918F, ::System::Int32 A722EA3BA370E77E, ::System::Boolean F07FED074ED91A99)
	{
		return ((::System::Boolean(*)(::E1153259FC38F47B*, ::HoudiniEngineUnity::HEU_InputObjectInfo*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_AF3A4E3554C7A17D_OFFSET))(AF4435B7B5FB505E, E9A4F4F2060D918F, A722EA3BA370E77E, F07FED074ED91A99);
	}

	static ::System::Boolean EDC52E4EB5CB2E86(::E1153259FC38F47B* AF4435B7B5FB505E, ::System::Int32 A55AABB57CBFF0B9, ::System::Int32& E38749A80F6D1151, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& FEB5F1BE1EE561B1, ::System::Collections::Generic::List_1<::System::Int32>*& BBFA4EFCC1991DBD, ::HoudiniEngineUnity::HEU_InputNode* ED6EDE8770AF57B3)
	{
		return ((::System::Boolean(*)(::E1153259FC38F47B*, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_EDC52E4EB5CB2E86_OFFSET))(AF4435B7B5FB505E, A55AABB57CBFF0B9, E38749A80F6D1151, FEB5F1BE1EE561B1, BBFA4EFCC1991DBD, ED6EDE8770AF57B3);
	}

	static ::System::Boolean E9C19DBD5E52A0EE(::E1153259FC38F47B* AF4435B7B5FB505E, ::HoudiniEngineUnity::HEU_HoudiniAsset* F814C7DCA6F4485F, ::System::Int32& E38749A80F6D1151, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& B0C479C7C8ECD281, ::System::Boolean F07FED074ED91A99, ::System::Int32 E9418A64796842F4)
	{
		return ((::System::Boolean(*)(::E1153259FC38F47B*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + E8026EC1FD229A1F_E9C19DBD5E52A0EE_OFFSET))(AF4435B7B5FB505E, F814C7DCA6F4485F, E38749A80F6D1151, B0C479C7C8ECD281, F07FED074ED91A99, E9418A64796842F4);
	}
};

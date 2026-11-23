#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/EFD4623502B4EA2E_E479453336BE59DA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

namespace ABC::CustomRenderPipeline { class OceanRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class F004DE10D33D0CC1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define EFD4623502B4EA2E_A890AC57CE51DECE_OFFSET UNITYSDK_OFFSET(0x27F1C30)
#define EFD4623502B4EA2E_B0CF39FC10FD8C1A_OFFSET UNITYSDK_OFFSET(0x27F1F30)
#define EFD4623502B4EA2E_B6F22DA4E0D3ACCC_OFFSET UNITYSDK_OFFSET(0x27F14A0)
#define EFD4623502B4EA2E_BACA0AF1E94606DA_OFFSET UNITYSDK_OFFSET(0x27EF3F0)
#define EFD4623502B4EA2E_E306A14F1080A35F_OFFSET UNITYSDK_OFFSET(0x27F0080)
#define EFD4623502B4EA2E_EB3041BAA1A6B140_OFFSET UNITYSDK_OFFSET(0x27EFE90)
#define EFD4623502B4EA2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x27F2160)

inline static constexpr unsigned int EFD4623502B4EA2E_TypeDefinitionIndex = 16807;

class EFD4623502B4EA2E : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Mesh*>** StaticGet_E6FB4610F87F3F4A()
	{
		return (::Il2CppArray<::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet_A77D132136651A64()
	{
		return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>** StaticGet_B03A4D5CED04CF17()
	{
		return (::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::UnityEngine::F004DE10D33D0CC1** StaticGet_F2CF55FC61E86374()
	{
		return (::UnityEngine::F004DE10D33D0CC1**)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::A718E30D1BD39D5A<::System::Object*>* StaticGet_BFC220EC1CF33C89()
	{
		return (::A718E30D1BD39D5A<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::System::Int32* StaticGet_B95E73B406AFEC9B()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x28);
	}
	static ::System::UInt32* StaticGet_B54F926C6B1FDBCF()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x2C);
	}
	static ::System::Boolean* StaticGet_EA9AAA0FA1844764()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EFD4623502B4EA2E_TypeDefinitionIndex)->GetStaticField(0x30);
	}

	static ::System::Void E306A14F1080A35F(::ABC::CustomRenderPipeline::OceanRenderer* EB14AC852B1B3234, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* BDDBCFC34E6080BA, ::UnityEngine::Transform* EFE497ABF6BF98D8, ::UnityEngine::Material* A54EF53C742D300D, ::System::Int32 BA2E99D73CC8AA9A, ::System::Int32 ACFF7120608A7193, ::Il2CppArray<::UnityEngine::Mesh*>* BC398571F8223B4C, ::Il2CppArray<::UnityEngine::B3A7F113FE1DE383>* A733F4DA2839B310, ::System::Int32 A4B228889055D4EB, ::System::Int32 A040DE4AFF9E5C6D, ::System::Int32 EC6664BB2B6072BD, ::System::Single B011F9890B766875)
	{
		return ((::System::Void(*)(::ABC::CustomRenderPipeline::OceanRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::B3A7F113FE1DE383>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_E306A14F1080A35F_OFFSET))(EB14AC852B1B3234, BDDBCFC34E6080BA, EFE497ABF6BF98D8, A54EF53C742D300D, BA2E99D73CC8AA9A, ACFF7120608A7193, BC398571F8223B4C, A733F4DA2839B310, A4B228889055D4EB, A040DE4AFF9E5C6D, EC6664BB2B6072BD, B011F9890B766875);
	}

	static ::UnityEngine::Transform* B6F22DA4E0D3ACCC(::ABC::CustomRenderPipeline::OceanRenderer* EB14AC852B1B3234, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* BDDBCFC34E6080BA, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* A932B67CD0187B58, ::System::Int32 A4B228889055D4EB, ::System::Int32 A040DE4AFF9E5C6D, ::System::Int32 ACFF7120608A7193, ::System::Single B011F9890B766875)
	{
		return ((::UnityEngine::Transform*(*)(::ABC::CustomRenderPipeline::OceanRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_B6F22DA4E0D3ACCC_OFFSET))(EB14AC852B1B3234, BDDBCFC34E6080BA, A932B67CD0187B58, A4B228889055D4EB, A040DE4AFF9E5C6D, ACFF7120608A7193, B011F9890B766875);
	}

	static ::System::Void EB3041BAA1A6B140(::ABC::CustomRenderPipeline::OceanRenderer* EB14AC852B1B3234)
	{
		return ((::System::Void(*)(::ABC::CustomRenderPipeline::OceanRenderer*))((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_EB3041BAA1A6B140_OFFSET))(EB14AC852B1B3234);
	}

	static ::UnityEngine::Mesh* BACA0AF1E94606DA(::ABC::CustomRenderPipeline::OceanRenderer* EB14AC852B1B3234, ::EFD4623502B4EA2E_E479453336BE59DA E1E658D6A3FA7931, ::System::Single A12894A53A607D19, ::UnityEngine::B3A7F113FE1DE383& BB64C3C370C6282A, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::UnityEngine::Mesh*(*)(::ABC::CustomRenderPipeline::OceanRenderer*, ::EFD4623502B4EA2E_E479453336BE59DA, ::System::Single, ::UnityEngine::B3A7F113FE1DE383&, ::System::Int32))((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_BACA0AF1E94606DA_OFFSET))(EB14AC852B1B3234, E1E658D6A3FA7931, A12894A53A607D19, BB64C3C370C6282A, B48C66E5FB2449C6);
	}

	static ::System::Void A890AC57CE51DECE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_A890AC57CE51DECE_OFFSET))();
	}

	static ::System::Void B0CF39FC10FD8C1A(::ABC::CustomRenderPipeline::OceanRenderer* EB14AC852B1B3234, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* BDDBCFC34E6080BA, ::System::Int32 A4B228889055D4EB, ::System::Int32 A040DE4AFF9E5C6D)
	{
		return ((::System::Void(*)(::ABC::CustomRenderPipeline::OceanRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EFD4623502B4EA2E_B0CF39FC10FD8C1A_OFFSET))(EB14AC852B1B3234, BDDBCFC34E6080BA, A4B228889055D4EB, A040DE4AFF9E5C6D);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFD4623502B4EA2E__CCTOR_OFFSET))();
	}
};

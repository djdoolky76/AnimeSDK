#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E9781F34B22778CA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
template <typename T1, typename T2> class A5F49F11EF855C22;

#define A3C382C36D21F79F_A4360EEFAF349EFB_B0E8D458A47AC756_OFFSET UNITYSDK_OFFSET(0x27ABE60)
#define A3C382C36D21F79F_A4360EEFAF349EFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x27ABEB0)

inline static constexpr unsigned int A3C382C36D21F79F_A4360EEFAF349EFB_TypeDefinitionIndex = 16618;

class A3C382C36D21F79F_A4360EEFAF349EFB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::A5F49F11EF855C22<::E9781F34B22778CA*, ::E9781F34B22778CA*>*>** StaticGet_A67DB08443A68EE5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::A5F49F11EF855C22<::E9781F34B22778CA*, ::E9781F34B22778CA*>*>**)Il2CppClass::FromTypeDefinitionIndex(A3C382C36D21F79F_A4360EEFAF349EFB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E9781F34B22778CA** StaticGet_BAC758C078D2818B()
	{
		return (::E9781F34B22778CA**)Il2CppClass::FromTypeDefinitionIndex(A3C382C36D21F79F_A4360EEFAF349EFB_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::E9781F34B22778CA* B0E8D458A47AC756(::UnityEngine::Camera* E929054BCEC2CE82, ::System::Boolean B5116F62A4468ECE)
	{
		return ((::E9781F34B22778CA*(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + A3C382C36D21F79F_A4360EEFAF349EFB_B0E8D458A47AC756_OFFSET))(E929054BCEC2CE82, B5116F62A4468ECE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3C382C36D21F79F_A4360EEFAF349EFB__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF47C5BD32803E8C/FC56AD947303CFD5.h"
#include "unitysdk/System/Object.h"

class BC51E10A57BC3A74_F155C6D97A17DC97;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define BC51E10A57BC3A74_A6DE90CC4E29CC03_OFFSET UNITYSDK_OFFSET(0x428BE20)
#define BC51E10A57BC3A74_EB39C01FE9E4B352_1_OFFSET UNITYSDK_OFFSET(0x428C110)
#define BC51E10A57BC3A74_EB39C01FE9E4B352_OFFSET UNITYSDK_OFFSET(0x428BF10)
#define BC51E10A57BC3A74__CCTOR_OFFSET UNITYSDK_OFFSET(0x428C1F0)

inline static constexpr unsigned int BC51E10A57BC3A74_TypeDefinitionIndex = 13940;

class BC51E10A57BC3A74 : public ::System::Object
{
public:
	static ::BC51E10A57BC3A74_F155C6D97A17DC97** StaticGet_E3890B5297581BD3()
	{
		return (::BC51E10A57BC3A74_F155C6D97A17DC97**)Il2CppClass::FromTypeDefinitionIndex(BC51E10A57BC3A74_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>*>** StaticGet_A169740D2D370782()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>*>**)Il2CppClass::FromTypeDefinitionIndex(BC51E10A57BC3A74_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BC51E10A57BC3A74__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>* EB39C01FE9E4B352(::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48, ::System::Int32 F331D149B58D6D49)
	{
		return ((::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>*(*)(::UnityEngine::UIElements::StyleSheet*, ::System::Int32))((::PBYTE)hIl2Cpp + BC51E10A57BC3A74_EB39C01FE9E4B352_OFFSET))(A3240E0B408E3C48, F331D149B58D6D49);
	}

	static ::BF47C5BD32803E8C::FC56AD947303CFD5 A6DE90CC4E29CC03(::UnityEngine::UIElements::StyleRule* FF010D7F70F3408A, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::BF47C5BD32803E8C::FC56AD947303CFD5(*)(::UnityEngine::UIElements::StyleRule*, ::System::Int32))((::PBYTE)hIl2Cpp + BC51E10A57BC3A74_A6DE90CC4E29CC03_OFFSET))(FF010D7F70F3408A, B48C66E5FB2449C6);
	}

	static ::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>* EB39C01FE9E4B352_1(::UnityEngine::UIElements::StyleRule* FF010D7F70F3408A)
	{
		return ((::Il2CppArray<::BF47C5BD32803E8C::FC56AD947303CFD5>*(*)(::UnityEngine::UIElements::StyleRule*))((::PBYTE)hIl2Cpp + BC51E10A57BC3A74_EB39C01FE9E4B352_1_OFFSET))(FF010D7F70F3408A);
	}
};

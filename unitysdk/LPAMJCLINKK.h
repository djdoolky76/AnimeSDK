#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGLMNBCBJGJ;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define LPAMJCLINKK_CNJBFCLJIBH_OFFSET UNITYSDK_OFFSET(0x1567A1F0)
#define LPAMJCLINKK_FNKFKGHNLPP_OFFSET UNITYSDK_OFFSET(0x1567AA90)
#define LPAMJCLINKK_HIOGJOBBLGI_OFFSET UNITYSDK_OFFSET(0x1567A5E0)
#define LPAMJCLINKK_KKLGCFMJHDF_OFFSET UNITYSDK_OFFSET(0x15679A30)
#define LPAMJCLINKK_LBFCCLBGHCH_OFFSET UNITYSDK_OFFSET(0x15679AB0)
#define LPAMJCLINKK_LPMLMAKNKNK_OFFSET UNITYSDK_OFFSET(0x1567A800)
#define LPAMJCLINKK_NHCHEELELBO_OFFSET UNITYSDK_OFFSET(0x1567A960)
#define LPAMJCLINKK_OJNIKEFNIIG_OFFSET UNITYSDK_OFFSET(0x1567A0C0)
#define LPAMJCLINKK_OMKKFBOHBCJ_OFFSET UNITYSDK_OFFSET(0x15679F00)

inline static constexpr unsigned int LPAMJCLINKK_TypeDefinitionIndex = 67337;

class LPAMJCLINKK : public ::System::Object
{
public:
	static ::System::String* KKLGCFMJHDF(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_KKLGCFMJHDF_OFFSET))(DEKJDEPKKLH);
	}

	static ::UnityEngine::GameObject* LBFCCLBGHCH(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::UnityEngine::GameObject*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_LBFCCLBGHCH_OFFSET))(DEKJDEPKKLH);
	}

	static ::UnityEngine::GameObject* OMKKFBOHBCJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::GameObject*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_OMKKFBOHBCJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::String* OJNIKEFNIIG(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_OJNIKEFNIIG_OFFSET))(DEKJDEPKKLH);
	}

	static ::UnityEngine::GameObject* CNJBFCLJIBH(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::UnityEngine::GameObject*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_CNJBFCLJIBH_OFFSET))(DEKJDEPKKLH);
	}

	static ::UnityEngine::GameObject* HIOGJOBBLGI(::GGLMNBCBJGJ* DEKJDEPKKLH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* FOLOMBFOAJI)
	{
		return ((::UnityEngine::GameObject*(*)(::GGLMNBCBJGJ*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_HIOGJOBBLGI_OFFSET))(DEKJDEPKKLH, FOLOMBFOAJI);
	}

	static ::System::String* LPMLMAKNKNK(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_LPMLMAKNKNK_OFFSET))(DEKJDEPKKLH);
	}

	static ::System::String* NHCHEELELBO(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_NHCHEELELBO_OFFSET))(DEKJDEPKKLH);
	}

	static ::System::String* FNKFKGHNLPP(::GGLMNBCBJGJ* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::GGLMNBCBJGJ*))((::PBYTE)hIl2Cpp + LPAMJCLINKK_FNKFKGHNLPP_OFFSET))(DEKJDEPKKLH);
	}
};

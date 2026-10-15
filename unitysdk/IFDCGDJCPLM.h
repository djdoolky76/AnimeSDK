#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IFDCGDJCPLM_GMHCMEBFKGN_1_OFFSET UNITYSDK_OFFSET(0x15F09EB0)
#define IFDCGDJCPLM_GMHCMEBFKGN_2_OFFSET UNITYSDK_OFFSET(0x15F09FA0)
#define IFDCGDJCPLM_GMHCMEBFKGN_OFFSET UNITYSDK_OFFSET(0x15F09C60)
#define IFDCGDJCPLM_KHJNHDOJDDP_1_OFFSET UNITYSDK_OFFSET(0x15F09A80)
#define IFDCGDJCPLM_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x15F098A0)
#define IFDCGDJCPLM_LGIIKHJDMIN_OFFSET UNITYSDK_OFFSET(0x15F0A090)
#define IFDCGDJCPLM_NGEKDPOOOFC_OFFSET UNITYSDK_OFFSET(0x15F0A250)
#define IFDCGDJCPLM_OHDMIKEAGDA_OFFSET UNITYSDK_OFFSET(0x15F0A170)

inline static constexpr unsigned int IFDCGDJCPLM_TypeDefinitionIndex = 50022;

	class IFDCGDJCPLM : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* KHJNHDOJDDP(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*, ::System::Type*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_KHJNHDOJDDP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* KHJNHDOJDDP_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*, ::System::Type*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_KHJNHDOJDDP_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GMHCMEBFKGN(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a1, ::System::Type* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*, ::System::Type*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_GMHCMEBFKGN_OFFSET))(a1, a2);
		}

		static ::System::Int32 GMHCMEBFKGN_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* a1, ::System::Type* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*, ::System::Type*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_GMHCMEBFKGN_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GMHCMEBFKGN_2(::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>* a1, ::System::Type* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>*, ::System::Type*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_GMHCMEBFKGN_2_OFFSET))(a1, a2);
		}

		static ::Sofa::BaseSofaControl* LGIIKHJDMIN(::UnityEngine::GameObject* a1)
		{
			return ((::Sofa::BaseSofaControl*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_LGIIKHJDMIN_OFFSET))(a1);
		}

		static ::Sofa::BaseSofaControl* OHDMIKEAGDA(::UnityEngine::Transform* a1)
		{
			return ((::Sofa::BaseSofaControl*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_OHDMIKEAGDA_OFFSET))(a1);
		}

		static ::Sofa::BaseSofaControl* NGEKDPOOOFC(::Sofa::BaseSofaControl* a1)
		{
			return ((::Sofa::BaseSofaControl*(*)(::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + IFDCGDJCPLM_NGEKDPOOOFC_OFFSET))(a1);
		}

	};

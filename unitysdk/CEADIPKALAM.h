#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CEADIPKALAM_AIOJDMNLLBD;
class CMABIKPDGIM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CEADIPKALAM_CEMDHGNHFAL_OFFSET UNITYSDK_OFFSET(0x18DC6D40)
#define CEADIPKALAM_GNLKIFMKGAP_OFFSET UNITYSDK_OFFSET(0x18DC7040)
#define CEADIPKALAM_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x18DC6590)
#define CEADIPKALAM_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x18DC6A10)
#define CEADIPKALAM_NCNCHMNFDNG_OFFSET UNITYSDK_OFFSET(0x18DC6BF0)
#define CEADIPKALAM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18DC71D0)
#define CEADIPKALAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC6500)

inline static constexpr unsigned int CEADIPKALAM_TypeDefinitionIndex = 47341;

class CEADIPKALAM : public ::System::Object
{
public:
	static ::CEADIPKALAM_AIOJDMNLLBD** StaticGet_JJHMEGLCLMI()
	{
		return (::CEADIPKALAM_AIOJDMNLLBD**)Il2CppClass::FromTypeDefinitionIndex(CEADIPKALAM_TypeDefinitionIndex)->GetStaticField(0x4B5C0);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_OLJJEJNFMDA()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CEADIPKALAM_TypeDefinitionIndex)->GetStaticField(0x4B5C8);
	}
	static ::System::Boolean* StaticGet_EMGJKMFNLMH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CEADIPKALAM_TypeDefinitionIndex)->GetStaticField(0x11750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEADIPKALAM__CCTOR_OFFSET))();
	}

	static ::System::Void HNEAGGGILAC(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CEADIPKALAM_HNEAGGGILAC_OFFSET))(MGOFOAFCFIJ);
	}

	static ::System::Void KKFNPONHGEM(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::CMABIKPDGIM* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::CMABIKPDGIM*))((::PBYTE)hIl2Cpp + CEADIPKALAM_KKFNPONHGEM_OFFSET))(MGOFOAFCFIJ, AOKHOHCJNFJ);
	}

	static ::CEADIPKALAM_AIOJDMNLLBD* CEMDHGNHFAL(::UnityEngine::Transform* NHMEPPCBBON)
	{
		return ((::CEADIPKALAM_AIOJDMNLLBD*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CEADIPKALAM_CEMDHGNHFAL_OFFSET))(NHMEPPCBBON);
	}

	static ::System::Void GNLKIFMKGAP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEADIPKALAM_GNLKIFMKGAP_OFFSET))();
	}

	static ::System::Void NCNCHMNFDNG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEADIPKALAM_NCNCHMNFDNG_OFFSET))();
	}

	static ::System::Void OKJCHFGIKBH(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CEADIPKALAM_OKJCHFGIKBH_OFFSET))(MKHLBMMKCJL);
	}
};

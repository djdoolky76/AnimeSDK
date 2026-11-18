#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BIEHBLPBAHP;
class LJMGDLCALGH_LLOGIGKPOOB;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define LJMGDLCALGH_AOHBBICGPKP_OFFSET UNITYSDK_OFFSET(0x13CF65D0)
#define LJMGDLCALGH_CIIBFOHIFNN_OFFSET UNITYSDK_OFFSET(0x13CF45F0)
#define LJMGDLCALGH_DBHMMACODBM_OFFSET UNITYSDK_OFFSET(0x13CF63A0)
#define LJMGDLCALGH_EFPCAKGONIF_OFFSET UNITYSDK_OFFSET(0x13CF3BF0)
#define LJMGDLCALGH_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x13CF5820)
#define LJMGDLCALGH_IDAANAAMHPC_OFFSET UNITYSDK_OFFSET(0x13CF6780)
#define LJMGDLCALGH_IEAGLEPLDOL_OFFSET UNITYSDK_OFFSET(0x13CF5270)
#define LJMGDLCALGH_IJNKJDDFFIF_OFFSET UNITYSDK_OFFSET(0x13CF4A50)
#define LJMGDLCALGH_ILCKLCODMEL_OFFSET UNITYSDK_OFFSET(0x13CF4080)
#define LJMGDLCALGH_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x13CF5C20)
#define LJMGDLCALGH_MMKMEPBEOJK_OFFSET UNITYSDK_OFFSET(0x13CF5EA0)
#define LJMGDLCALGH_NDJPDLDLDFM_OFFSET UNITYSDK_OFFSET(0x13CF6090)
#define LJMGDLCALGH_PDDPEELCKHN_OFFSET UNITYSDK_OFFSET(0x13CF4810)
#define LJMGDLCALGH_PDMKGMDMIJJ_OFFSET UNITYSDK_OFFSET(0x13CF4410)
#define LJMGDLCALGH_PNMHODPFIEL_OFFSET UNITYSDK_OFFSET(0x13CF4C00)
#define LJMGDLCALGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CF3AB0)

inline static constexpr unsigned int LJMGDLCALGH_TypeDefinitionIndex = 63608;

class LJMGDLCALGH : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>** StaticGet_KFDJHDENKDL()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(LJMGDLCALGH_TypeDefinitionIndex)->GetStaticField(0x4A260);
	}
	static ::LJMGDLCALGH_LLOGIGKPOOB** StaticGet_PHJFPHPKMJN()
	{
		return (::LJMGDLCALGH_LLOGIGKPOOB**)Il2CppClass::FromTypeDefinitionIndex(LJMGDLCALGH_TypeDefinitionIndex)->GetStaticField(0x4A268);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_OLJJEJNFMDA()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LJMGDLCALGH_TypeDefinitionIndex)->GetStaticField(0x4A270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMGDLCALGH__CCTOR_OFFSET))();
	}

	static ::System::Boolean EFPCAKGONIF(::UnityEngine::Transform* HHIJHDFHPOI, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_EFPCAKGONIF_OFFSET))(HHIJHDFHPOI, IAPKABMDJNF);
	}

	static ::System::Void PDMKGMDMIJJ(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_PDMKGMDMIJJ_OFFSET))(IAPKABMDJNF);
	}

	static ::System::Void CIIBFOHIFNN(::LJMGDLCALGH_LLOGIGKPOOB* AAIJGGIEOGK, ::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::LJMGDLCALGH_LLOGIGKPOOB*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LJMGDLCALGH_CIIBFOHIFNN_OFFSET))(AAIJGGIEOGK, MKHLBMMKCJL);
	}

	static ::System::Void IJNKJDDFFIF(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LJMGDLCALGH_IJNKJDDFFIF_OFFSET))(MKHLBMMKCJL);
	}

	static ::System::Boolean IEAGLEPLDOL(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::UnityEngine::Vector2 MKHLBMMKCJL, ::UnityEngine::Camera* LLFDABJAHII)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_IEAGLEPLDOL_OFFSET))(MGOFOAFCFIJ, MKHLBMMKCJL, LLFDABJAHII);
	}

	static ::System::Void HNEAGGGILAC(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_HNEAGGGILAC_OFFSET))(MGOFOAFCFIJ);
	}

	static ::System::Void KKFNPONHGEM(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::BIEHBLPBAHP* HODAIDNDKHD, ::System::Action_1<::UnityEngine::Vector2>* HMMGDIEHNMN)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::BIEHBLPBAHP*, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_KKFNPONHGEM_OFFSET))(MGOFOAFCFIJ, HODAIDNDKHD, HMMGDIEHNMN);
	}

	static ::System::Boolean MMKMEPBEOJK(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_MMKMEPBEOJK_OFFSET))(MGOFOAFCFIJ);
	}

	static ::System::Void AOHBBICGPKP(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_AOHBBICGPKP_OFFSET))(IAPKABMDJNF);
	}

	static ::System::Boolean ILCKLCODMEL(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_ILCKLCODMEL_OFFSET))(GKBJOPJKCLB, IAPKABMDJNF);
	}

	static ::LJMGDLCALGH_LLOGIGKPOOB* PNMHODPFIEL(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::LJMGDLCALGH_LLOGIGKPOOB*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LJMGDLCALGH_PNMHODPFIEL_OFFSET))(MKHLBMMKCJL);
	}

	static ::System::Void NDJPDLDLDFM(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_NDJPDLDLDFM_OFFSET))(MGOFOAFCFIJ);
	}

	static ::BIEHBLPBAHP* IDAANAAMHPC(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::BIEHBLPBAHP*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LJMGDLCALGH_IDAANAAMHPC_OFFSET))(MKHLBMMKCJL);
	}

	static ::System::Boolean DBHMMACODBM(::UnityEngine::Transform* HHIJHDFHPOI, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_DBHMMACODBM_OFFSET))(HHIJHDFHPOI, IAPKABMDJNF);
	}

	static ::System::Boolean PDDPEELCKHN(::UnityEngine::Transform* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMGDLCALGH_PDDPEELCKHN_OFFSET))(IMLLDOHDCNC);
	}
};

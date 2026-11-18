#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BIJGBFDMHBH_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0xF79B670)
#define BIJGBFDMHBH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF79B930)
#define BIJGBFDMHBH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF79BB40)
#define BIJGBFDMHBH_JDAPNFOIPFK_OFFSET UNITYSDK_OFFSET(0xF79BC30)

inline static constexpr unsigned int BIJGBFDMHBH_TypeDefinitionIndex = 71848;

class BIJGBFDMHBH : public ::System::Object
{
public:
	static ::DynamicBoneConfigMap** StaticGet_DFEIPEADGBO()
	{
		return (::DynamicBoneConfigMap**)Il2CppClass::FromTypeDefinitionIndex(BIJGBFDMHBH_TypeDefinitionIndex)->GetStaticField(0x4F220);
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIJGBFDMHBH_BJHHNNGACFN_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::DynamicBoneConfigMap* JDAPNFOIPFK()
	{
		return ((::DynamicBoneConfigMap*(*)())((::PBYTE)hIl2Cpp + BIJGBFDMHBH_JDAPNFOIPFK_OFFSET))();
	}
};

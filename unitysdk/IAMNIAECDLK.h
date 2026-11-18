#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IAMNIAECDLK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x15E96560)
#define IAMNIAECDLK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15E96870)
#define IAMNIAECDLK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15E96760)
#define IAMNIAECDLK_HEEMFOKHAJM_OFFSET UNITYSDK_OFFSET(0x15E95E10)
#define IAMNIAECDLK_JGAMPIJMACF_OFFSET UNITYSDK_OFFSET(0x15E96A30)
#define IAMNIAECDLK_LMMIOHCOJEP_OFFSET UNITYSDK_OFFSET(0x15E97390)
#define IAMNIAECDLK_MJCMAFDPGJM_OFFSET UNITYSDK_OFFSET(0x15E97770)
#define IAMNIAECDLK_ONBIKOJBMHH_OFFSET UNITYSDK_OFFSET(0x15E96C60)
#define IAMNIAECDLK_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x15E97330)
#define IAMNIAECDLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E95D40)

inline static constexpr unsigned int IAMNIAECDLK_TypeDefinitionIndex = 65176;

class IAMNIAECDLK : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>** StaticGet_BNAMJKGONFJ()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(IAMNIAECDLK_TypeDefinitionIndex)->GetStaticField(0x37C50);
	}
	static ::MoleMole::Config::ConfigMaterialPropertyExclusivity** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyExclusivity**)Il2CppClass::FromTypeDefinitionIndex(IAMNIAECDLK_TypeDefinitionIndex)->GetStaticField(0x37C58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMNIAECDLK__CCTOR_OFFSET))();
	}

	static ::System::Void HEEMFOKHAJM(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* IDPNNPOCDNN, ::System::Int32 GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*, ::System::Int32))((::PBYTE)hIl2Cpp + IAMNIAECDLK_HEEMFOKHAJM_OFFSET))(JLFOCLDLHAH, IDPNNPOCDNN, GEJCKFFFKCL);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IAMNIAECDLK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean JGAMPIJMACF(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + IAMNIAECDLK_JGAMPIJMACF_OFFSET))(JLFOCLDLHAH);
	}

	static ::MoleMole::Config::ConfigMaterialPropertyExclusivity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertyExclusivity*(*)())((::PBYTE)hIl2Cpp + IAMNIAECDLK_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void ONBIKOJBMHH(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* IDPNNPOCDNN)
	{
		return ((::System::Void(*)(::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*))((::PBYTE)hIl2Cpp + IAMNIAECDLK_ONBIKOJBMHH_OFFSET))(JLFOCLDLHAH, IDPNNPOCDNN);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigMaterialPropertyExclusivity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + IAMNIAECDLK_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IAMNIAECDLK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void LMMIOHCOJEP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMNIAECDLK_LMMIOHCOJEP_OFFSET))();
	}

	static ::System::Boolean MJCMAFDPGJM(::MoleMole::Config::MaterialPropertyType BCCDEEKJBLA, ::MoleMole::Config::MaterialPropertyType DAJOKBFPNND)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + IAMNIAECDLK_MJCMAFDPGJM_OFFSET))(BCCDEEKJBLA, DAJOKBFPNND);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HOAAKHNGJJI;
class KHLJFPECEGH;
namespace MoleMole::Config { class AnimCurveParam; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace System { class Object; }

#define COHHJKODKDN_AACHAEBINMP_OFFSET UNITYSDK_OFFSET(0x12048260)
#define COHHJKODKDN_ADGEOOFIKGA_OFFSET UNITYSDK_OFFSET(0x12048A70)
#define COHHJKODKDN_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x12047FF0)
#define COHHJKODKDN_JINPBDJCDDF_OFFSET UNITYSDK_OFFSET(0x12048F30)
#define COHHJKODKDN_LMINNGEOILE_OFFSET UNITYSDK_OFFSET(0x12048920)
#define COHHJKODKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x12048910)

inline static constexpr unsigned int COHHJKODKDN_TypeDefinitionIndex = 68350;

class COHHJKODKDN : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHHJKODKDN__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + COHHJKODKDN_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::System::Object* LMINNGEOILE(::MoleMole::Config::AnimCurveParam* HLKPKMIOPBE, ::System::Single HBEKKMCBGBK)
	{
		return ((::System::Object*(*)(::MoleMole::Config::AnimCurveParam*, ::System::Single))((::PBYTE)hIl2Cpp + COHHJKODKDN_LMINNGEOILE_OFFSET))(HLKPKMIOPBE, HBEKKMCBGBK);
	}

	static ::HOAAKHNGJJI* ADGEOOFIKGA(::MoleMole::Config::ConfigHollowCameraStretchV2*& JCHFKGGDDFB, ::MoleMole::UICameraAtom& EPEIBEHJCJA, ::MoleMole::UICameraAtom& MPJJNHBNNGM)
	{
		return ((::HOAAKHNGJJI*(*)(::MoleMole::Config::ConfigHollowCameraStretchV2*&, ::MoleMole::UICameraAtom&, ::MoleMole::UICameraAtom&))((::PBYTE)hIl2Cpp + COHHJKODKDN_ADGEOOFIKGA_OFFSET))(JCHFKGGDDFB, EPEIBEHJCJA, MPJJNHBNNGM);
	}

	::KHLJFPECEGH* JINPBDJCDDF(::MoleMole::Config::ConfigHollowCameraStretchV2* JCHFKGGDDFB, ::MoleMole::UICameraAtom EPEIBEHJCJA, ::MoleMole::UICameraAtom MPJJNHBNNGM)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + COHHJKODKDN_JINPBDJCDDF_OFFSET))(this, JCHFKGGDDFB, EPEIBEHJCJA, MPJJNHBNNGM);
	}

	static ::HOAAKHNGJJI* AACHAEBINMP(::MoleMole::UICameraAtom& EPEIBEHJCJA, ::MoleMole::Config::ConfigHollowCameraStretchV2*& JCHFKGGDDFB, ::UnityEngine::Vector3& EBHCPFADODA)
	{
		return ((::HOAAKHNGJJI*(*)(::MoleMole::UICameraAtom&, ::MoleMole::Config::ConfigHollowCameraStretchV2*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + COHHJKODKDN_AACHAEBINMP_OFFSET))(EPEIBEHJCJA, JCHFKGGDDFB, EBHCPFADODA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class LineLightingV2;
namespace UnityEngine { class Transform; }

#define NADNOPDELGL_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x13EC9C00)
#define NADNOPDELGL_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x13EC9AB0)
#define NADNOPDELGL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x13EC9BF0)
#define NADNOPDELGL_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x13EC9B10)
#define NADNOPDELGL__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC9AA0)

inline static constexpr unsigned int NADNOPDELGL_TypeDefinitionIndex = 48532;

class NADNOPDELGL : public ::System::Object
{
public:
	::MoleMole::EntityHandle MCKCMDFDMJJ; // 0x10
	::UnityEngine::Transform* FLCGAIKCNOE; // 0x20
	::UnityEngine::Transform* BBDDBOPLKGA; // 0x28
	::LineLightingV2* LGOIDDBKKOG; // 0x30
	::System::Single HACJFKBLODH; // 0x38
	::System::Boolean GDNFPDDPEMJ; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Single KEBFCBEKGMI; // 0x40
	::System::Boolean FKGMECIECDM; // 0x44
	::System::Boolean OJIPLEHLDMG; // 0x45
	::System::Boolean BIOAOFKGBBH; // 0x46
	::System::Boolean HCCOGMGMMML; // 0x47
	::System::Single MDPPNMIPDMP; // 0x48
	::System::Single MENKFAEDNDN; // 0x4C
	::System::Single FAICFLHGEOP; // 0x50
	::System::Single BMNKMDEIPDI; // 0x54
	::System::Single PJFOCIAMFED; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNOPDELGL__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNOPDELGL_EMCPPBMEKKK_OFFSET))(this);
	}

	static ::System::Void MBKDOMFJFIG(::NADNOPDELGL* MKIFFELLKJH)
	{
		return ((::System::Void(*)(::NADNOPDELGL*))((::PBYTE)hIl2Cpp + NADNOPDELGL_MBKDOMFJFIG_OFFSET))(MKIFFELLKJH);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNOPDELGL_JDAPDDEOCEA_OFFSET))(this);
	}

	static ::NADNOPDELGL* BBPCBEEHALC()
	{
		return ((::NADNOPDELGL*(*)())((::PBYTE)hIl2Cpp + NADNOPDELGL_BBPCBEEHALC_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBMEACCONNF;
class GEIHCPAOKKK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define GBKIDFBFPGP___C_AGHMBLAIHNM_OFFSET UNITYSDK_OFFSET(0x116DDB40)
#define GBKIDFBFPGP___C_FNPJBGLHJMF_OFFSET UNITYSDK_OFFSET(0x116DDB50)
#define GBKIDFBFPGP___C_NHJAFPADLDJ_OFFSET UNITYSDK_OFFSET(0x116DDD20)
#define GBKIDFBFPGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DDAF0)
#define GBKIDFBFPGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116DDB30)

inline static constexpr unsigned int GBKIDFBFPGP___c_TypeDefinitionIndex = 58612;

class GBKIDFBFPGP___c : public ::System::Object
{
public:
	static ::System::Action_2<::BBMEACCONNF*, ::GEIHCPAOKKK*>** StaticGet___9__53_0()
	{
		return (::System::Action_2<::BBMEACCONNF*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(GBKIDFBFPGP___c_TypeDefinitionIndex)->GetStaticField(0x409C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GBKIDFBFPGP___c_TypeDefinitionIndex)->GetStaticField(0x409C8);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GBKIDFBFPGP___c_TypeDefinitionIndex)->GetStaticField(0x409D0);
	}
	static ::System::Action** StaticGet___9__34_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GBKIDFBFPGP___c_TypeDefinitionIndex)->GetStaticField(0x409D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBKIDFBFPGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP___C__CTOR_OFFSET))(this);
	}

	::System::Void AGHMBLAIHNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP___C_AGHMBLAIHNM_OFFSET))(this);
	}

	::System::Void FNPJBGLHJMF(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::BBMEACCONNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP___C_FNPJBGLHJMF_OFFSET))(this, CCKIJJAHCIB, OHPJHPEOFLD);
	}

	::System::Void NHJAFPADLDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP___C_NHJAFPADLDJ_OFFSET))(this);
	}
};

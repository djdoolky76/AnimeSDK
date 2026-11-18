#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BOHOIMABHPG;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define GDIACAHPLBB_CEBDHNNJHLN_BBOMJDBNHIC_1_OFFSET UNITYSDK_OFFSET(0x10EE41C0)
#define GDIACAHPLBB_CEBDHNNJHLN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10EE3930)
#define GDIACAHPLBB_CEBDHNNJHLN_FIEOIAIDLEP_OFFSET UNITYSDK_OFFSET(0x10EE37A0)
#define GDIACAHPLBB_CEBDHNNJHLN_JBMCPHCICMI_OFFSET UNITYSDK_OFFSET(0x10EE4370)
#define GDIACAHPLBB_CEBDHNNJHLN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10EE4950)
#define GDIACAHPLBB_CEBDHNNJHLN_PNELAGLIEOC_OFFSET UNITYSDK_OFFSET(0x10EE3C20)
#define GDIACAHPLBB_CEBDHNNJHLN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE3790)

inline static constexpr unsigned int GDIACAHPLBB_CEBDHNNJHLN_TypeDefinitionIndex = 73273;

class GDIACAHPLBB_CEBDHNNJHLN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* JCCGEBBDHLI; // 0x10
	::BOHOIMABHPG* NJDABJNCIJL; // 0x18
	::Foundation::AssetPath CBMOCDPDAMB; // 0x20
	::System::String* JMBNHKNMAND; // 0x30
	::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP; // 0x38
	::System::String* NCHCMKEAHCD; // 0x40
	::System::String* AELLPLBJELA; // 0x48
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x50
	::System::Boolean HLFADLPEEDJ; // 0x58
	::System::Boolean BJJEMEIGJJC; // 0x59
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 CLMNLPKFBFA; // 0x5C
	::System::UInt32 IKIOJEPCKPM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN__CTOR_OFFSET))(this);
	}

	::System::Void FIEOIAIDLEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_FIEOIAIDLEP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* OKOEDPBLJEG, ::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigPosRot* CKPGOKHECCH, ::System::String* JICLBKPOEHP, ::UnityEngine::Vector3 EMIKCAHJLGB, ::MoleMole::Battle::Entity* FDILKILAAEJ, ::System::Boolean POEFJFJOAFA, ::BOHOIMABHPG* ENOEIJDGEHD, ::System::String* OLOFHKKICHJ, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::BOHOIMABHPG*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_BBOMJDBNHIC_OFFSET))(this, OKOEDPBLJEG, OIIHCACKLHD, CKPGOKHECCH, JICLBKPOEHP, EMIKCAHJLGB, FDILKILAAEJ, POEFJFJOAFA, ENOEIJDGEHD, OLOFHKKICHJ, LIBPKNHDIGP, HLFADLPEEDJ);
	}

	::System::Void PNELAGLIEOC(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_PNELAGLIEOC_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}

	::System::Void BBOMJDBNHIC_1(::System::String* OKOEDPBLJEG, ::System::String* CJBJONJDOLI, ::MoleMole::Config::ConfigPosRot* CKPGOKHECCH, ::System::String* JICLBKPOEHP, ::UnityEngine::Vector3 EMIKCAHJLGB, ::MoleMole::Battle::Entity* FDILKILAAEJ, ::System::Boolean POEFJFJOAFA, ::BOHOIMABHPG* ENOEIJDGEHD, ::System::String* OLOFHKKICHJ, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::BOHOIMABHPG*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_BBOMJDBNHIC_1_OFFSET))(this, OKOEDPBLJEG, CJBJONJDOLI, CKPGOKHECCH, JICLBKPOEHP, EMIKCAHJLGB, FDILKILAAEJ, POEFJFJOAFA, ENOEIJDGEHD, OLOFHKKICHJ, HLFADLPEEDJ);
	}

	::System::Void JBMCPHCICMI(::UnityEngine::Object* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_JBMCPHCICMI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CEBDHNNJHLN_NPOLNFDBOOD_OFFSET))(this);
	}
};

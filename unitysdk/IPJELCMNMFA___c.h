#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define IPJELCMNMFA___C_CBAJGDMJLEB_OFFSET UNITYSDK_OFFSET(0x138272E0)
#define IPJELCMNMFA___C_HIDDNOIHEEJ_OFFSET UNITYSDK_OFFSET(0x138272D0)
#define IPJELCMNMFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13827280)
#define IPJELCMNMFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x138272C0)

inline static constexpr unsigned int IPJELCMNMFA___c_TypeDefinitionIndex = 59835;

class IPJELCMNMFA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(IPJELCMNMFA___c_TypeDefinitionIndex)->GetStaticField(0x3E1F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPJELCMNMFA___c_TypeDefinitionIndex)->GetStaticField(0x3E1F8);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(IPJELCMNMFA___c_TypeDefinitionIndex)->GetStaticField(0x3E200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPJELCMNMFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJELCMNMFA___C__CTOR_OFFSET))(this);
	}

	::System::Void HIDDNOIHEEJ(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IPJELCMNMFA___C_HIDDNOIHEEJ_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}

	::System::Void CBAJGDMJLEB(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + IPJELCMNMFA___C_CBAJGDMJLEB_OFFSET))(this, MNDIBLLFAJI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COMJAJFGMDL;
class DPLNEIFPACM;
class EKILHKMHNGH;
class IPNLEPGBFCP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define ODGJPBGHLAJ___C_EIFKJNPCDEN_OFFSET UNITYSDK_OFFSET(0xE0EF720)
#define ODGJPBGHLAJ___C_FLAGNCLNOOB_OFFSET UNITYSDK_OFFSET(0xE0EF740)
#define ODGJPBGHLAJ___C_JAABCFHGOGK_OFFSET UNITYSDK_OFFSET(0xE0EF790)
#define ODGJPBGHLAJ___C_LGCGALLHPME_OFFSET UNITYSDK_OFFSET(0xE0EF700)
#define ODGJPBGHLAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0EF6B0)
#define ODGJPBGHLAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF6F0)

inline static constexpr unsigned int ODGJPBGHLAJ___c_TypeDefinitionIndex = 83791;

class ODGJPBGHLAJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::IPNLEPGBFCP*>** StaticGet___9__152_1()
	{
		return (::System::Func_1<::IPNLEPGBFCP*>**)Il2CppClass::FromTypeDefinitionIndex(ODGJPBGHLAJ___c_TypeDefinitionIndex)->GetStaticField(0x50FC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ODGJPBGHLAJ___c_TypeDefinitionIndex)->GetStaticField(0x50FC8);
	}
	static ::System::Func_1<::COMJAJFGMDL*>** StaticGet___9__152_0()
	{
		return (::System::Func_1<::COMJAJFGMDL*>**)Il2CppClass::FromTypeDefinitionIndex(ODGJPBGHLAJ___c_TypeDefinitionIndex)->GetStaticField(0x50FD0);
	}
	static ::System::Func_2<::DPLNEIFPACM*, ::System::Int32>** StaticGet___9__62_0()
	{
		return (::System::Func_2<::DPLNEIFPACM*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ODGJPBGHLAJ___c_TypeDefinitionIndex)->GetStaticField(0x50FD8);
	}
	static ::System::Action_1<::EKILHKMHNGH*>** StaticGet___9__94_0()
	{
		return (::System::Action_1<::EKILHKMHNGH*>**)Il2CppClass::FromTypeDefinitionIndex(ODGJPBGHLAJ___c_TypeDefinitionIndex)->GetStaticField(0x50FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C__CTOR_OFFSET))(this);
	}

	::System::Void LGCGALLHPME(::EKILHKMHNGH* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::EKILHKMHNGH*))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C_LGCGALLHPME_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Int32 EIFKJNPCDEN(::DPLNEIFPACM* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::DPLNEIFPACM*))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C_EIFKJNPCDEN_OFFSET))(this, IPMMCGDMODG);
	}

	::COMJAJFGMDL* FLAGNCLNOOB()
	{
		return ((::COMJAJFGMDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C_FLAGNCLNOOB_OFFSET))(this);
	}

	::IPNLEPGBFCP* JAABCFHGOGK()
	{
		return ((::IPNLEPGBFCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ___C_JAABCFHGOGK_OFFSET))(this);
	}
};

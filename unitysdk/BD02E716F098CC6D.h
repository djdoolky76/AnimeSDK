#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4F2F9DFF61235FE.h"

#define BD02E716F098CC6D__CCTOR_OFFSET UNITYSDK_OFFSET(0x4419FB0)
#define BD02E716F098CC6D__CTOR_OFFSET UNITYSDK_OFFSET(0x441A040)

inline static constexpr unsigned int BD02E716F098CC6D_TypeDefinitionIndex = 18962;

class BD02E716F098CC6D : public ::B4F2F9DFF61235FE
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_B60D9DAD6EE8BC77()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BD02E716F098CC6D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::System::Int32>* BA0F2AC82C3269D4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD02E716F098CC6D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BD02E716F098CC6D__CCTOR_OFFSET))();
	}
};

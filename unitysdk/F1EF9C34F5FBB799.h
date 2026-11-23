#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A8037B8062B0F231;
class FF8535960D737D0F;
namespace System { class Exception; }
namespace System { class String; }

#define F1EF9C34F5FBB799_AC04F937D6F8AE47_OFFSET UNITYSDK_OFFSET(0x3EC9EA0)
#define F1EF9C34F5FBB799_E1D3BA4725A4F92F_OFFSET UNITYSDK_OFFSET(0x3EC9FF0)
#define F1EF9C34F5FBB799_E8E56CB360CA98D3_OFFSET UNITYSDK_OFFSET(0x3EC9DF0)
#define F1EF9C34F5FBB799_F292BB1B3E763C8C_OFFSET UNITYSDK_OFFSET(0x3EC9F50)
#define F1EF9C34F5FBB799_FA61A4C4775E0F60_OFFSET UNITYSDK_OFFSET(0x3EC9E10)

inline static constexpr unsigned int F1EF9C34F5FBB799_TypeDefinitionIndex = 15088;

class F1EF9C34F5FBB799 : public ::System::Object
{
public:
	static ::Il2CppArray<::FF8535960D737D0F*>** StaticGet_FA8EABAC389BE189()
	{
		return (::Il2CppArray<::FF8535960D737D0F*>**)Il2CppClass::FromTypeDefinitionIndex(F1EF9C34F5FBB799_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Object** StaticGet_BF7D61AF10238E32()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(F1EF9C34F5FBB799_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_AD68EDB49279DB89()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F1EF9C34F5FBB799_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::A8037B8062B0F231* E8E56CB360CA98D3()
	{
		return ((::A8037B8062B0F231*(*)())((::PBYTE)hIl2Cpp + F1EF9C34F5FBB799_E8E56CB360CA98D3_OFFSET))();
	}

	static ::System::Boolean AC04F937D6F8AE47(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + F1EF9C34F5FBB799_AC04F937D6F8AE47_OFFSET))(E2B6D81F69EA0D9B);
	}

	static ::System::Boolean FA61A4C4775E0F60(::FF8535960D737D0F* A28C170D016BF99A)
	{
		return ((::System::Boolean(*)(::FF8535960D737D0F*))((::PBYTE)hIl2Cpp + F1EF9C34F5FBB799_FA61A4C4775E0F60_OFFSET))(A28C170D016BF99A);
	}

	static ::Il2CppArray<::FF8535960D737D0F*>* E1D3BA4725A4F92F()
	{
		return ((::Il2CppArray<::FF8535960D737D0F*>*(*)())((::PBYTE)hIl2Cpp + F1EF9C34F5FBB799_E1D3BA4725A4F92F_OFFSET))();
	}

	static ::System::Object* F292BB1B3E763C8C()
	{
		return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + F1EF9C34F5FBB799_F292BB1B3E763C8C_OFFSET))();
	}
};

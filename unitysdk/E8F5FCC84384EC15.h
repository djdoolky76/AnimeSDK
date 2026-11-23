#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAD112B56EFC250B;

#define E8F5FCC84384EC15_A52E576D9B3512D5_OFFSET UNITYSDK_OFFSET(0x3CA9E60)
#define E8F5FCC84384EC15_A686DCBA5FB7FAAC_OFFSET UNITYSDK_OFFSET(0x3CAA190)
#define E8F5FCC84384EC15_FBD08428AD1DE417_OFFSET UNITYSDK_OFFSET(0x3CA9FA0)
#define E8F5FCC84384EC15__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CAA120)

inline static constexpr unsigned int E8F5FCC84384EC15_TypeDefinitionIndex = 10554;

class E8F5FCC84384EC15 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_B1A49DE15B86062F()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(E8F5FCC84384EC15_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::BAD112B56EFC250B** StaticGet_FFBCF6A4DC7926F9()
	{
		return (::BAD112B56EFC250B**)Il2CppClass::FromTypeDefinitionIndex(E8F5FCC84384EC15_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::BAD112B56EFC250B* A52E576D9B3512D5()
	{
		return ((::BAD112B56EFC250B*(*)())((::PBYTE)hIl2Cpp + E8F5FCC84384EC15_A52E576D9B3512D5_OFFSET))();
	}

	static ::System::Void FBD08428AD1DE417(::BAD112B56EFC250B* AD687A4B9A03EFB2)
	{
		return ((::System::Void(*)(::BAD112B56EFC250B*))((::PBYTE)hIl2Cpp + E8F5FCC84384EC15_FBD08428AD1DE417_OFFSET))(AD687A4B9A03EFB2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8F5FCC84384EC15__CCTOR_OFFSET))();
	}

	static ::BAD112B56EFC250B* A686DCBA5FB7FAAC()
	{
		return ((::BAD112B56EFC250B*(*)())((::PBYTE)hIl2Cpp + E8F5FCC84384EC15_A686DCBA5FB7FAAC_OFFSET))();
	}
};

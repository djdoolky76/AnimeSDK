#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLFADFNMJFO;
namespace Foundation { template <typename T> class ObjectPool_1; }

#define GMJDDFIFNDK_CKLOPCHDNAK_OFFSET UNITYSDK_OFFSET(0x1815A2A0)
#define GMJDDFIFNDK_EFDJHKFKCHJ_OFFSET UNITYSDK_OFFSET(0x1815A340)
#define GMJDDFIFNDK_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x1815A180)
#define GMJDDFIFNDK_HKODBKDKOMP_OFFSET UNITYSDK_OFFSET(0x1815A230)
#define GMJDDFIFNDK_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1815A0D0)
#define GMJDDFIFNDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1815A000)
#define GMJDDFIFNDK__CTOR_OFFSET UNITYSDK_OFFSET(0x18159FF0)

inline static constexpr unsigned int GMJDDFIFNDK_TypeDefinitionIndex = 74926;

class GMJDDFIFNDK : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::MLFADFNMJFO*>** StaticGet_EIMOEPJBKMK()
	{
		return (::Foundation::ObjectPool_1<::MLFADFNMJFO*>**)Il2CppClass::FromTypeDefinitionIndex(GMJDDFIFNDK_TypeDefinitionIndex)->GetStaticField(0x3B010);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJDDFIFNDK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMJDDFIFNDK__CCTOR_OFFSET))();
	}

	static ::System::Void JJEJHGOJOII(::MLFADFNMJFO* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::MLFADFNMJFO*))((::PBYTE)hIl2Cpp + GMJDDFIFNDK_JJEJHGOJOII_OFFSET))(HODAIDNDKHD);
	}

	static ::System::Void FDJHEBHLJLD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMJDDFIFNDK_FDJHEBHLJLD_OFFSET))();
	}

	static ::MLFADFNMJFO* HKODBKDKOMP()
	{
		return ((::MLFADFNMJFO*(*)())((::PBYTE)hIl2Cpp + GMJDDFIFNDK_HKODBKDKOMP_OFFSET))();
	}

	static ::System::Void CKLOPCHDNAK(::MLFADFNMJFO* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::MLFADFNMJFO*))((::PBYTE)hIl2Cpp + GMJDDFIFNDK_CKLOPCHDNAK_OFFSET))(HODAIDNDKHD);
	}

	static ::MLFADFNMJFO* EFDJHKFKCHJ()
	{
		return ((::MLFADFNMJFO*(*)())((::PBYTE)hIl2Cpp + GMJDDFIFNDK_EFDJHKFKCHJ_OFFSET))();
	}
};

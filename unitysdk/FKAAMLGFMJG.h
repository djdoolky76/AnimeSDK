#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFGMBAOFEKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CMOPPAAGJLK.h"

class HFOILFLPFGM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKAAMLGFMJG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x132235A0)
#define FKAAMLGFMJG_KFPPPENEENH_OFFSET UNITYSDK_OFFSET(0x13223450)
#define FKAAMLGFMJG_KNPCCLNNGEA_OFFSET UNITYSDK_OFFSET(0x132231C0)
#define FKAAMLGFMJG_LFFAJJJBJLO_OFFSET UNITYSDK_OFFSET(0x13223560)
#define FKAAMLGFMJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x132230D0)

inline static constexpr unsigned int FKAAMLGFMJG_TypeDefinitionIndex = 42969;

class FKAAMLGFMJG : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_IBHBFMNHFMM()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FKAAMLGFMJG_TypeDefinitionIndex)->GetStaticField(0x319F0);
	}
	static ::HFOILFLPFGM** StaticGet_KFLDJNOMJLJ()
	{
		return (::HFOILFLPFGM**)Il2CppClass::FromTypeDefinitionIndex(FKAAMLGFMJG_TypeDefinitionIndex)->GetStaticField(0x319F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKAAMLGFMJG__CCTOR_OFFSET))();
	}

	static ::JFGMBAOFEKD KNPCCLNNGEA(::System::String* INHDAAAMAAL)
	{
		return ((::JFGMBAOFEKD(*)(::System::String*))((::PBYTE)hIl2Cpp + FKAAMLGFMJG_KNPCCLNNGEA_OFFSET))(INHDAAAMAAL);
	}

	static ::System::Boolean KFPPPENEENH(::CMOPPAAGJLK CPFFPLPPDDI)
	{
		return ((::System::Boolean(*)(::CMOPPAAGJLK))((::PBYTE)hIl2Cpp + FKAAMLGFMJG_KFPPPENEENH_OFFSET))(CPFFPLPPDDI);
	}

	static ::System::Void LFFAJJJBJLO(::System::String* FGDDNCDCNNO)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKAAMLGFMJG_LFFAJJJBJLO_OFFSET))(FGDDNCDCNNO);
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKAAMLGFMJG_BJANDJKKNCD_OFFSET))();
	}
};

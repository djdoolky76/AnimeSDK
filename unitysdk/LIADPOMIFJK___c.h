#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class FEDPEGHEADA;
class IDPGPICONFN;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LIADPOMIFJK___C_GOKLNGPDJKP_OFFSET UNITYSDK_OFFSET(0x1A60B970)
#define LIADPOMIFJK___C_JNNENMLCNOL_OFFSET UNITYSDK_OFFSET(0x1A60BB90)
#define LIADPOMIFJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60B920)
#define LIADPOMIFJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60B960)

inline static constexpr unsigned int LIADPOMIFJK___c_TypeDefinitionIndex = 75099;

class LIADPOMIFJK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LIADPOMIFJK___c_TypeDefinitionIndex)->GetStaticField(0x3BB30);
	}
	static ::System::Action_2<::IDPGPICONFN*, ::AEMCAOEICDG*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::IDPGPICONFN*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(LIADPOMIFJK___c_TypeDefinitionIndex)->GetStaticField(0x3BB38);
	}
	static ::System::Action_3<::FEDPEGHEADA*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::FEDPEGHEADA*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>**)Il2CppClass::FromTypeDefinitionIndex(LIADPOMIFJK___c_TypeDefinitionIndex)->GetStaticField(0x3BB40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIADPOMIFJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK___C__CTOR_OFFSET))(this);
	}

	::System::Void GOKLNGPDJKP(::FEDPEGHEADA* BAIPAEIPOPM, ::AEMCAOEICDG* MPIOPJNCAKO, ::EHKKPCGAJHO* KJFPEDEODNM)
	{
		return ((::System::Void(*)(::PVOID, ::FEDPEGHEADA*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + LIADPOMIFJK___C_GOKLNGPDJKP_OFFSET))(this, BAIPAEIPOPM, MPIOPJNCAKO, KJFPEDEODNM);
	}

	::System::Void JNNENMLCNOL(::IDPGPICONFN* JFLIMKIKLJE, ::AEMCAOEICDG* MPIOPJNCAKO)
	{
		return ((::System::Void(*)(::PVOID, ::IDPGPICONFN*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + LIADPOMIFJK___C_JNNENMLCNOL_OFFSET))(this, JFLIMKIKLJE, MPIOPJNCAKO);
	}
};

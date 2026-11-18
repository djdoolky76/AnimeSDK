#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNDEANADMGH;
class KKOCDIKKHAG;
class PNHAEMFHHEB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define KHBEBKBAKEF___C_CDMFMBJHPNO_OFFSET UNITYSDK_OFFSET(0x186259D0)
#define KHBEBKBAKEF___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x186259C0)
#define KHBEBKBAKEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18625970)
#define KHBEBKBAKEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186259B0)

inline static constexpr unsigned int KHBEBKBAKEF___c_TypeDefinitionIndex = 71732;

class KHBEBKBAKEF___c : public ::System::Object
{
public:
	static ::System::Action_3<::KKOCDIKKHAG*, ::GNDEANADMGH*, ::PNHAEMFHHEB*>** StaticGet___9__1_0()
	{
		return (::System::Action_3<::KKOCDIKKHAG*, ::GNDEANADMGH*, ::PNHAEMFHHEB*>**)Il2CppClass::FromTypeDefinitionIndex(KHBEBKBAKEF___c_TypeDefinitionIndex)->GetStaticField(0x509D0);
	}
	static ::System::Action** StaticGet___9__2_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KHBEBKBAKEF___c_TypeDefinitionIndex)->GetStaticField(0x509D8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KHBEBKBAKEF___c_TypeDefinitionIndex)->GetStaticField(0x509E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHBEBKBAKEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::KKOCDIKKHAG* GBELIHABEDH, ::GNDEANADMGH* KKPFEIGFAKK, ::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::PVOID, ::KKOCDIKKHAG*, ::GNDEANADMGH*, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + KHBEBKBAKEF___C_IKEHBGKEPAC_OFFSET))(this, GBELIHABEDH, KKPFEIGFAKK, KNENMPAIHBJ);
	}

	::System::Void CDMFMBJHPNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF___C_CDMFMBJHPNO_OFFSET))(this);
	}
};

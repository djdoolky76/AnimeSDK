#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIMIPAJFBLK;
class EHKKPCGAJHO;
class NMGABPNKKHJ;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define OHPBOBLJDJL___C_AGEHOKHNDGF_OFFSET UNITYSDK_OFFSET(0x15FE2940)
#define OHPBOBLJDJL___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x15FE2930)
#define OHPBOBLJDJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE28E0)
#define OHPBOBLJDJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2920)

inline static constexpr unsigned int OHPBOBLJDJL___c_TypeDefinitionIndex = 59267;

class OHPBOBLJDJL___c : public ::System::Object
{
public:
	static ::System::Action_2<::EHKKPCGAJHO*, ::NMGABPNKKHJ*>** StaticGet___9__3_1()
	{
		return (::System::Action_2<::EHKKPCGAJHO*, ::NMGABPNKKHJ*>**)Il2CppClass::FromTypeDefinitionIndex(OHPBOBLJDJL___c_TypeDefinitionIndex)->GetStaticField(0x4EF60);
	}
	static ::System::Action_1<::CIMIPAJFBLK*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::CIMIPAJFBLK*>**)Il2CppClass::FromTypeDefinitionIndex(OHPBOBLJDJL___c_TypeDefinitionIndex)->GetStaticField(0x4EF68);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OHPBOBLJDJL___c_TypeDefinitionIndex)->GetStaticField(0x4EF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHPBOBLJDJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPBOBLJDJL___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::CIMIPAJFBLK* NJIKOKCKHEO)
	{
		return ((::System::Void(*)(::PVOID, ::CIMIPAJFBLK*))((::PBYTE)hIl2Cpp + OHPBOBLJDJL___C_AIKNDJKJEKN_OFFSET))(this, NJIKOKCKHEO);
	}

	::System::Void AGEHOKHNDGF(::EHKKPCGAJHO* NGDDIPHOGHO, ::NMGABPNKKHJ* HNFNOCIEAIO)
	{
		return ((::System::Void(*)(::PVOID, ::EHKKPCGAJHO*, ::NMGABPNKKHJ*))((::PBYTE)hIl2Cpp + OHPBOBLJDJL___C_AGEHOKHNDGF_OFFSET))(this, NGDDIPHOGHO, HNFNOCIEAIO);
	}
};

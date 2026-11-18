#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIHPLPPJFFN;
class GEIHCPAOKKK;
class IKPGGBKPPFK;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define FDEOBPFOKFA___C_GFHJKNMODBG_OFFSET UNITYSDK_OFFSET(0x13203430)
#define FDEOBPFOKFA___C_HONJAELLAKH_OFFSET UNITYSDK_OFFSET(0x13202FA0)
#define FDEOBPFOKFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13202F50)
#define FDEOBPFOKFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13202F90)

inline static constexpr unsigned int FDEOBPFOKFA___c_TypeDefinitionIndex = 86457;

class FDEOBPFOKFA___c : public ::System::Object
{
public:
	static ::System::Action_3<::GEIHCPAOKKK*, ::CIHPLPPJFFN*, ::IKPGGBKPPFK*>** StaticGet___9__22_0()
	{
		return (::System::Action_3<::GEIHCPAOKKK*, ::CIHPLPPJFFN*, ::IKPGGBKPPFK*>**)Il2CppClass::FromTypeDefinitionIndex(FDEOBPFOKFA___c_TypeDefinitionIndex)->GetStaticField(0x318F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDEOBPFOKFA___c_TypeDefinitionIndex)->GetStaticField(0x318F8);
	}
	static ::System::Action_3<::GEIHCPAOKKK*, ::IKPGGBKPPFK*, ::CIHPLPPJFFN*>** StaticGet___9__21_0()
	{
		return (::System::Action_3<::GEIHCPAOKKK*, ::IKPGGBKPPFK*, ::CIHPLPPJFFN*>**)Il2CppClass::FromTypeDefinitionIndex(FDEOBPFOKFA___c_TypeDefinitionIndex)->GetStaticField(0x31900);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDEOBPFOKFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEOBPFOKFA___C__CTOR_OFFSET))(this);
	}

	::System::Void HONJAELLAKH(::GEIHCPAOKKK* OHPJHPEOFLD, ::IKPGGBKPPFK* POBADKEDFOE, ::CIHPLPPJFFN* NDLAFDNEOIB)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::IKPGGBKPPFK*, ::CIHPLPPJFFN*))((::PBYTE)hIl2Cpp + FDEOBPFOKFA___C_HONJAELLAKH_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE, NDLAFDNEOIB);
	}

	::System::Void GFHJKNMODBG(::GEIHCPAOKKK* OHPJHPEOFLD, ::CIHPLPPJFFN* NDLAFDNEOIB, ::IKPGGBKPPFK* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::CIHPLPPJFFN*, ::IKPGGBKPPFK*))((::PBYTE)hIl2Cpp + FDEOBPFOKFA___C_GFHJKNMODBG_OFFSET))(this, OHPJHPEOFLD, NDLAFDNEOIB, POBADKEDFOE);
	}
};

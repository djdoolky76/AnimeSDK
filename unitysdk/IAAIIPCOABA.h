#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNGAHBCKBIA.h"

class HNMEKNBFJLI;
class IHAMECMLDPN;
class OFLPOCHHHLC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAAIIPCOABA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12E9CB20)
#define IAAIIPCOABA_DHGEOPLDKFG_OFFSET UNITYSDK_OFFSET(0x12E9CA40)
#define IAAIIPCOABA_GDJJEEKAAIF_OFFSET UNITYSDK_OFFSET(0x12E9CBB0)
#define IAAIIPCOABA_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x12E9CB10)
#define IAAIIPCOABA_GIPADMHEKBC_OFFSET UNITYSDK_OFFSET(0x12E9C420)
#define IAAIIPCOABA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12E9C600)
#define IAAIIPCOABA_OCPHMANAFAN_OFFSET UNITYSDK_OFFSET(0x12E9CAA0)
#define IAAIIPCOABA_ODCFNKHNFHE_OFFSET UNITYSDK_OFFSET(0x12E9C660)
#define IAAIIPCOABA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E9CAF0)
#define IAAIIPCOABA__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9C330)

inline static constexpr unsigned int IAAIIPCOABA_TypeDefinitionIndex = 65896;

class IAAIIPCOABA : public ::MNGAHBCKBIA
{
public:
	static ::System::Int32* StaticGet_HHJLGNCOJKB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IAAIIPCOABA_TypeDefinitionIndex)->GetStaticField(0x12110);
	}
	static ::System::Int32* StaticGet_JEDGAGIICDG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IAAIIPCOABA_TypeDefinitionIndex)->GetStaticField(0x12114);
	}
	static ::System::Int32* StaticGet_HIHFLMIDNDN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IAAIIPCOABA_TypeDefinitionIndex)->GetStaticField(0x12118);
	}
	::System::Collections::Generic::List_1<::IHAMECMLDPN*>* OCOHHBAHBKA; // 0x60
	::HNMEKNBFJLI* FMONBCECDJI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAAIIPCOABA__CCTOR_OFFSET))();
	}

	::System::Boolean GIPADMHEKBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_GIPADMHEKBC_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void ODCFNKHNFHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_ODCFNKHNFHE_OFFSET))(this);
	}

	::System::Boolean DHGEOPLDKFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_DHGEOPLDKFG_OFFSET))(this);
	}

	::System::Void OCPHMANAFAN(::System::UInt64 JJPDFOHEOLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IAAIIPCOABA_OCPHMANAFAN_OFFSET))(this, JJPDFOHEOLD);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_GEFNCCFJNIM_OFFSET))(this);
	}

	::IAAIIPCOABA* BBOMJDBNHIC(::OFLPOCHHHLC* BLHJHPFBDCH, ::System::UInt64 MGMDLMBEDJF, ::System::UInt32 HDGIELLOOEF, ::System::UInt32 KEGBFANEPBJ, ::HNMEKNBFJLI* COEJLJCDAAG)
	{
		return ((::IAAIIPCOABA*(*)(::PVOID, ::OFLPOCHHHLC*, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::HNMEKNBFJLI*))((::PBYTE)hIl2Cpp + IAAIIPCOABA_BBOMJDBNHIC_OFFSET))(this, BLHJHPFBDCH, MGMDLMBEDJF, HDGIELLOOEF, KEGBFANEPBJ, COEJLJCDAAG);
	}

	::HNMEKNBFJLI* GDJJEEKAAIF()
	{
		return ((::HNMEKNBFJLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAIIPCOABA_GDJJEEKAAIF_OFFSET))(this);
	}
};

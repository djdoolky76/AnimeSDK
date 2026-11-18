#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECHOLABCMKP.h"

class PPPHCHDBPKE;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define IKNGGHOCDBF_BODOFCJDMIC_OFFSET UNITYSDK_OFFSET(0x1FFC5CB0)
#define IKNGGHOCDBF_CNEDMCLLNHA_OFFSET UNITYSDK_OFFSET(0x1FFC5C90)
#define IKNGGHOCDBF_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1FFC5CC0)
#define IKNGGHOCDBF_EBBIODPCOEM_OFFSET UNITYSDK_OFFSET(0x1FFC5F20)
#define IKNGGHOCDBF_EFGBEHCBDNI_OFFSET UNITYSDK_OFFSET(0x1FFC5CA0)
#define IKNGGHOCDBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFC5BA0)
#define IKNGGHOCDBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFC5920)
#define IKNGGHOCDBF_FHNLOBJNFBP_OFFSET UNITYSDK_OFFSET(0x1FFC5F90)
#define IKNGGHOCDBF_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x1FFC6640)
#define IKNGGHOCDBF_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FFC5830)
#define IKNGGHOCDBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFC5AB0)
#define IKNGGHOCDBF_GIALDDHFBLF_1_OFFSET UNITYSDK_OFFSET(0x1FFC6660)
#define IKNGGHOCDBF_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x1FFC62A0)
#define IKNGGHOCDBF_GMCFDKOKIPG_OFFSET UNITYSDK_OFFSET(0x1FFC6120)
#define IKNGGHOCDBF_IDJKCODAEGM_OFFSET UNITYSDK_OFFSET(0x1FFC6950)
#define IKNGGHOCDBF_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1FFC5A20)
#define IKNGGHOCDBF_JINGAFDLHKM_OFFSET UNITYSDK_OFFSET(0x1FFC65D0)
#define IKNGGHOCDBF_JNNAKGPOPGH_OFFSET UNITYSDK_OFFSET(0x1FFC61C0)
#define IKNGGHOCDBF_KNDFNEKDBLA_OFFSET UNITYSDK_OFFSET(0x1FFC60A0)
#define IKNGGHOCDBF_NJEDHNGCPDD_OFFSET UNITYSDK_OFFSET(0x1FFC6400)
#define IKNGGHOCDBF_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1FFC6830)
#define IKNGGHOCDBF_OJOLMMBCKMJ_OFFSET UNITYSDK_OFFSET(0x1FFC5F10)
#define IKNGGHOCDBF_PEGMJKBCMAO_OFFSET UNITYSDK_OFFSET(0x1FFC65E0)
#define IKNGGHOCDBF_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x1FFC68F0)
#define IKNGGHOCDBF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FFC5910)
#define IKNGGHOCDBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5F30)
#define IKNGGHOCDBF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFC5810)
#define IKNGGHOCDBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5800)

inline static constexpr unsigned int IKNGGHOCDBF_TypeDefinitionIndex = 18177;

class IKNGGHOCDBF : public ::ECHOLABCMKP
{
public:
	static ::IKNGGHOCDBF** StaticGet_NENLMCBOEPM()
	{
		return (::IKNGGHOCDBF**)Il2CppClass::FromTypeDefinitionIndex(IKNGGHOCDBF_TypeDefinitionIndex)->GetStaticField(0x7E30);
	}
	::Il2CppArray<::System::Byte>* AOADDGCDELC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::Boolean INJMLNPLFHP)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKNGGHOCDBF__CTOR_1_OFFSET))(this, AOADDGCDELC, INJMLNPLFHP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKNGGHOCDBF__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IEnumerator_1<::System::Byte>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::IKNGGHOCDBF* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void CNEDMCLLNHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_CNEDMCLLNHA_OFFSET))(this);
	}

	::System::Void EFGBEHCBDNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_EFGBEHCBDNI_OFFSET))(this);
	}

	::System::Void BODOFCJDMIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_BODOFCJDMIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_DEJBOKDOGCD_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* FHNLOBJNFBP()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_FHNLOBJNFBP_OFFSET))(this);
	}

	::System::String* KNDFNEKDBLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_KNDFNEKDBLA_OFFSET))(this);
	}

	::System::Void EBBIODPCOEM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_EBBIODPCOEM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GMCFDKOKIPG(::PPPHCHDBPKE* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::PPPHCHDBPKE*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_GMCFDKOKIPG_OFFSET))(this, HLFFCMIFFIB);
	}

	::PPPHCHDBPKE* JNNAKGPOPGH()
	{
		return ((::PPPHCHDBPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_JNNAKGPOPGH_OFFSET))(this);
	}

	static ::IKNGGHOCDBF* GIALDDHFBLF(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::IKNGGHOCDBF*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_GIALDDHFBLF_OFFSET))(AOADDGCDELC);
	}

	static ::IKNGGHOCDBF* NJEDHNGCPDD()
	{
		return ((::IKNGGHOCDBF*(*)())((::PBYTE)hIl2Cpp + IKNGGHOCDBF_NJEDHNGCPDD_OFFSET))();
	}

	::Il2CppArray<::System::Byte>* JINGAFDLHKM()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_JINGAFDLHKM_OFFSET))(this);
	}

	static ::IKNGGHOCDBF* PEGMJKBCMAO(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::IKNGGHOCDBF*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_PEGMJKBCMAO_OFFSET))(AOADDGCDELC);
	}

	::System::Int32 FILIKHJMENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_FILIKHJMENK_OFFSET))(this);
	}

	::System::Void GIALDDHFBLF_1(::IKNGGHOCDBF* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_GIALDDHFBLF_1_OFFSET))(this, LIBPKNHDIGP);
	}

	static ::System::Boolean INCFIJKMIGG(::IKNGGHOCDBF* FFKBEGIHIGG, ::IKNGGHOCDBF* CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::IKNGGHOCDBF*, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::System::Boolean NOGJIJMACNO(::IKNGGHOCDBF* FFKBEGIHIGG, ::IKNGGHOCDBF* CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::IKNGGHOCDBF*, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::IKNGGHOCDBF* PPGBHNIJOIB()
	{
		return ((::IKNGGHOCDBF*(*)())((::PBYTE)hIl2Cpp + IKNGGHOCDBF_PPGBHNIJOIB_OFFSET))();
	}

	::System::Void IDJKCODAEGM(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_IDJKCODAEGM_OFFSET))(this, AOADDGCDELC);
	}

	::System::Boolean OJOLMMBCKMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGGHOCDBF_OJOLMMBCKMJ_OFFSET))(this);
	}
};

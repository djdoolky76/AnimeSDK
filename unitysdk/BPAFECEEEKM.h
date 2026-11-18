#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/Object.h"

class PFJIHDJMCDM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPAFECEEEKM_OJKJJMKJFCP_OFFSET UNITYSDK_OFFSET(0x14F02730)
#define BPAFECEEEKM_PLFHKNEJAFO_OFFSET UNITYSDK_OFFSET(0x14F04340)
#define BPAFECEEEKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F02670)

inline static constexpr unsigned int BPAFECEEEKM_TypeDefinitionIndex = 76057;

class BPAFECEEEKM : public ::System::Object
{
public:
	static ::PFJIHDJMCDM** StaticGet_HMLABENKPFK()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F20);
	}
	static ::PFJIHDJMCDM** StaticGet_MCIFONBNCLD()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F28);
	}
	static ::PFJIHDJMCDM** StaticGet_ILGJKFCODIC()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F30);
	}
	static ::PFJIHDJMCDM** StaticGet_DHPAKJLCMLE()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F38);
	}
	static ::System::Collections::Generic::Dictionary_2<::OMGFCFDABLN, ::PFJIHDJMCDM*>** StaticGet_PAALGICAION()
	{
		return (::System::Collections::Generic::Dictionary_2<::OMGFCFDABLN, ::PFJIHDJMCDM*>**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F40);
	}
	static ::PFJIHDJMCDM** StaticGet_BNKCHFLNPAD()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F48);
	}
	static ::PFJIHDJMCDM** StaticGet_PMICCFKCIPE()
	{
		return (::PFJIHDJMCDM**)Il2CppClass::FromTypeDefinitionIndex(BPAFECEEEKM_TypeDefinitionIndex)->GetStaticField(0x30F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPAFECEEEKM__CCTOR_OFFSET))();
	}

	static ::PFJIHDJMCDM* PLFHKNEJAFO(::OMGFCFDABLN& LOACBJBANNC, ::System::Boolean JLFGKMOLBHM)
	{
		return ((::PFJIHDJMCDM*(*)(::OMGFCFDABLN&, ::System::Boolean))((::PBYTE)hIl2Cpp + BPAFECEEEKM_PLFHKNEJAFO_OFFSET))(LOACBJBANNC, JLFGKMOLBHM);
	}

	static ::System::Void OJKJJMKJFCP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPAFECEEEKM_OJKJJMKJFCP_OFFSET))();
	}
};

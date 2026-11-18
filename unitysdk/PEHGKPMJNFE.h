#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MACLIPNNIOC;
namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEHGKPMJNFE_ABIIKMNGJLP_OFFSET UNITYSDK_OFFSET(0x15534CD0)
#define PEHGKPMJNFE_BKODAAAJLJC_OFFSET UNITYSDK_OFFSET(0x155348A0)
#define PEHGKPMJNFE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15534780)
#define PEHGKPMJNFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x155345F0)

inline static constexpr unsigned int PEHGKPMJNFE_TypeDefinitionIndex = 47246;

class PEHGKPMJNFE : public ::System::Object
{
public:
	static ::Foundation::MyLogger** StaticGet_KBKOEJHBADA()
	{
		return (::Foundation::MyLogger**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9A0);
	}
	static ::MACLIPNNIOC** StaticGet_CFONMCBOJOO()
	{
		return (::MACLIPNNIOC**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9A8);
	}
	static ::MACLIPNNIOC** StaticGet_OGIGFHINKMC()
	{
		return (::MACLIPNNIOC**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9B0);
	}
	static ::MACLIPNNIOC** StaticGet_AHOJIEMFPHF()
	{
		return (::MACLIPNNIOC**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9B8);
	}
	static ::MACLIPNNIOC** StaticGet_CEIFLECMLOC()
	{
		return (::MACLIPNNIOC**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9C0);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_MGJLJDIMOPI()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9C8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_MAMGPNDOKEB()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0x3F9D0);
	}
	static ::System::Int32* StaticGet_LMLIIFPCGJM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0xEB00);
	}
	static ::System::Boolean* StaticGet_LPFPMHEFKGO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEHGKPMJNFE_TypeDefinitionIndex)->GetStaticField(0xEB04);
	}
	// static const ::System::Int32 DLLPJGEECMM = 0x3C; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEHGKPMJNFE__CCTOR_OFFSET))();
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEHGKPMJNFE_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void BKODAAAJLJC(::UnityEngine::Vector3 OFJEAOPBDBM, ::UnityEngine::Vector3 HLJCPOAPNDM, ::UnityEngine::Vector3 LHBLECJEJEL, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PEHGKPMJNFE_BKODAAAJLJC_OFFSET))(OFJEAOPBDBM, HLJCPOAPNDM, LHBLECJEJEL, PMNLNNGEIFM);
	}

	static ::System::Void ABIIKMNGJLP(::UnityEngine::Vector3 OFJEAOPBDBM, ::UnityEngine::Vector3 HLJCPOAPNDM, ::UnityEngine::Vector3 LHBLECJEJEL, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PEHGKPMJNFE_ABIIKMNGJLP_OFFSET))(OFJEAOPBDBM, HLJCPOAPNDM, LHBLECJEJEL, PMNLNNGEIFM);
	}
};

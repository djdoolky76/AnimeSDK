#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHFOKCBCNF;
class OGADKOBJHJL;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLBBGAJGHJB_BELBDIDMFIO_OFFSET UNITYSDK_OFFSET(0x193E65E0)
#define CLBBGAJGHJB_HCNMCAKDPLA_OFFSET UNITYSDK_OFFSET(0x193E64A0)
#define CLBBGAJGHJB_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x193E6660)
#define CLBBGAJGHJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x193E6390)

inline static constexpr unsigned int CLBBGAJGHJB_TypeDefinitionIndex = 82295;

class CLBBGAJGHJB : public ::System::Object
{
public:
	static ::JMHFOKCBCNF** StaticGet_CKMCNNOGIHG()
	{
		return (::JMHFOKCBCNF**)Il2CppClass::FromTypeDefinitionIndex(CLBBGAJGHJB_TypeDefinitionIndex)->GetStaticField(0x4F300);
	}
	static ::System::Collections::Generic::HashSet_1<::OGADKOBJHJL*>** StaticGet_ENALFFHOPED()
	{
		return (::System::Collections::Generic::HashSet_1<::OGADKOBJHJL*>**)Il2CppClass::FromTypeDefinitionIndex(CLBBGAJGHJB_TypeDefinitionIndex)->GetStaticField(0x4F308);
	}
	static ::Foundation::ObjectPoolOfReusable_1<::OGADKOBJHJL*>** StaticGet_GABPFCADBGC()
	{
		return (::Foundation::ObjectPoolOfReusable_1<::OGADKOBJHJL*>**)Il2CppClass::FromTypeDefinitionIndex(CLBBGAJGHJB_TypeDefinitionIndex)->GetStaticField(0x4F310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLBBGAJGHJB__CCTOR_OFFSET))();
	}

	static ::OGADKOBJHJL* HCNMCAKDPLA()
	{
		return ((::OGADKOBJHJL*(*)())((::PBYTE)hIl2Cpp + CLBBGAJGHJB_HCNMCAKDPLA_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::OGADKOBJHJL*>* BELBDIDMFIO()
	{
		return ((::System::Collections::Generic::HashSet_1<::OGADKOBJHJL*>*(*)())((::PBYTE)hIl2Cpp + CLBBGAJGHJB_BELBDIDMFIO_OFFSET))();
	}

	static ::System::Void JJEJHGOJOII(::OGADKOBJHJL* NLFGBFCCCLJ)
	{
		return ((::System::Void(*)(::OGADKOBJHJL*))((::PBYTE)hIl2Cpp + CLBBGAJGHJB_JJEJHGOJOII_OFFSET))(NLFGBFCCCLJ);
	}
};

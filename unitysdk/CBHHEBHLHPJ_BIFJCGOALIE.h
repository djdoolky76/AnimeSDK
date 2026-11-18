#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBHHEBHLHPJ_BIFJCGOALIE_FMALKLNDJCM_OFFSET UNITYSDK_OFFSET(0x16A0BD60)
#define CBHHEBHLHPJ_BIFJCGOALIE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0BD50)

inline static constexpr unsigned int CBHHEBHLHPJ_BIFJCGOALIE_TypeDefinitionIndex = 72848;

class CBHHEBHLHPJ_BIFJCGOALIE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* BADJIMECAGC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHEBHLHPJ_BIFJCGOALIE__CTOR_OFFSET))(this);
	}

	::System::Int32 FMALKLNDJCM(::KOIDMLPJGML* EJCBEJMGFAJ, ::KOIDMLPJGML* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::KOIDMLPJGML*, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + CBHHEBHLHPJ_BIFJCGOALIE_FMALKLNDJCM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

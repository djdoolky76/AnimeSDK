#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPBCKEFEADP_JOFGFPJPFDJ_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x141895E0)
#define EPBCKEFEADP_JOFGFPJPFDJ_NDBNFMMCJOK_OFFSET UNITYSDK_OFFSET(0x1418B290)
#define EPBCKEFEADP_JOFGFPJPFDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1418B250)

inline static constexpr unsigned int EPBCKEFEADP_JOFGFPJPFDJ_TypeDefinitionIndex = 90003;

class EPBCKEFEADP_JOFGFPJPFDJ : public ::System::Object
{
public:
	// static const ::System::Int32 DNMGCCOKJCI = 0x5; // 0x0
	::Il2CppArray<::System::UInt32>* JMINOGAOFIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_JOFGFPJPFDJ__CTOR_OFFSET))(this);
	}

	static ::System::Int32 NDBNFMMCJOK(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_JOFGFPJPFDJ_NDBNFMMCJOK_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Byte GLOAAACBNPP(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_JOFGFPJPFDJ_GLOAAACBNPP_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};

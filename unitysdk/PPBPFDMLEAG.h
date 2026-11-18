#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPBPFDMLEAG_BNLPDFAMEBE_OFFSET UNITYSDK_OFFSET(0x1C672490)
#define PPBPFDMLEAG_CPGAPCFGGNJ_OFFSET UNITYSDK_OFFSET(0x1C6723F0)
#define PPBPFDMLEAG_HHNNFPMJINF_OFFSET UNITYSDK_OFFSET(0x1C6726A0)
#define PPBPFDMLEAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C672340)

inline static constexpr unsigned int PPBPFDMLEAG_TypeDefinitionIndex = 80846;

class PPBPFDMLEAG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PFOCPFDPDLP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PPBPFDMLEAG_TypeDefinitionIndex)->GetStaticField(0x363E0);
	}
	// static const ::System::Int32 EPBMKCFNEBJ = 0x65; // 0x0
	// static const ::System::Int32 KLLFKFKGJMM = 0x7FFFFFC3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBPFDMLEAG__CCTOR_OFFSET))();
	}

	static ::System::Int32 CPGAPCFGGNJ(::System::Int32 NJNDDOAOGFC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + PPBPFDMLEAG_CPGAPCFGGNJ_OFFSET))(NJNDDOAOGFC);
	}

	static ::System::Boolean HHNNFPMJINF(::System::Int32 CMLFALFJONB)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + PPBPFDMLEAG_HHNNFPMJINF_OFFSET))(CMLFALFJONB);
	}

	static ::System::Int32 BNLPDFAMEBE(::System::Int32 GDBANLBHNJK)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + PPBPFDMLEAG_BNLPDFAMEBE_OFFSET))(GDBANLBHNJK);
	}
};

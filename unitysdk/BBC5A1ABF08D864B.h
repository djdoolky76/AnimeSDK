#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BBC5A1ABF08D864B_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x40A3CC0)
#define BBC5A1ABF08D864B_E72D57255EB110CA_OFFSET UNITYSDK_OFFSET(0x40A3C60)
#define BBC5A1ABF08D864B_FEA7E6B0475D61CF_OFFSET UNITYSDK_OFFSET(0x40A3C50)
#define BBC5A1ABF08D864B_FFFED3FE97917A30_OFFSET UNITYSDK_OFFSET(0x40A3DA0)
#define BBC5A1ABF08D864B__CCTOR_OFFSET UNITYSDK_OFFSET(0x40A3E00)
#define BBC5A1ABF08D864B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBC5A1ABF08D864B_TypeDefinitionIndex = 18213;

class BBC5A1ABF08D864B : public ::System::Object
{
public:
	static ::BBC5A1ABF08D864B** StaticGet_F7CCB86C5B898CF3()
	{
		return (::BBC5A1ABF08D864B**)Il2CppClass::FromTypeDefinitionIndex(BBC5A1ABF08D864B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 B996A70283B60FAC(::System::String* B9AEC57275825552)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B_B996A70283B60FAC_OFFSET))(B9AEC57275825552);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B__CCTOR_OFFSET))();
	}

	static ::System::Int32 E72D57255EB110CA(::System::String* B9AEC57275825552)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B_E72D57255EB110CA_OFFSET))(B9AEC57275825552);
	}

	static ::System::Char FFFED3FE97917A30(::System::Char A97F5B807CC19082)
	{
		return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B_FFFED3FE97917A30_OFFSET))(A97F5B807CC19082);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 FEA7E6B0475D61CF(::System::UInt32 E5512F0C5602C39B, ::System::UInt32 A840509E415439A6)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BBC5A1ABF08D864B_FEA7E6B0475D61CF_OFFSET))(E5512F0C5602C39B, A840509E415439A6);
	}
};

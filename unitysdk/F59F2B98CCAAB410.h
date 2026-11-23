#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/B04B724027C75F91.h"
#include "unitysdk/System/Object.h"

class A9F5CD3D9D9FD818_B12E4E036D58142C;
class BEE66D693E5746CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }

#define F59F2B98CCAAB410_EEA2D034761595FA_OFFSET UNITYSDK_OFFSET(0x3C64470)
#define F59F2B98CCAAB410_F3C0C79FAEFDD738_OFFSET UNITYSDK_OFFSET(0x3C64110)
#define F59F2B98CCAAB410_FC52AFDBAADF4B02_OFFSET UNITYSDK_OFFSET(0x3C643B0)
#define F59F2B98CCAAB410__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F59F2B98CCAAB410_TypeDefinitionIndex = 11650;

class F59F2B98CCAAB410 : public ::System::Object
{
public:
	::A9F5CD3D9D9FD818_B12E4E036D58142C* F105735DDA1C2C5F; // 0x10

	::BEE66D693E5746CA* EEA2D034761595FA(::System::Globalization::CultureInfo* B639ACA4E77C2506, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BEE66D693E5746CA*>* EBF123366B5BB28B, ::System::Boolean A47C5B850EC60AD2, ::System::Boolean A551EA943BF15028, ::System::Threading::B04B724027C75F91& B18E190AA66E48C0)
	{
		return ((::BEE66D693E5746CA*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BEE66D693E5746CA*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::B04B724027C75F91&))((::PBYTE)hIl2Cpp + F59F2B98CCAAB410_EEA2D034761595FA_OFFSET))(this, B639ACA4E77C2506, EBF123366B5BB28B, A47C5B850EC60AD2, A551EA943BF15028, B18E190AA66E48C0);
	}

	::System::Void _ctor(::A9F5CD3D9D9FD818_B12E4E036D58142C* FD853315CF9E2944)
	{
		return ((::System::Void(*)(::PVOID, ::A9F5CD3D9D9FD818_B12E4E036D58142C*))((::PBYTE)hIl2Cpp + F59F2B98CCAAB410__CTOR_OFFSET))(this, FD853315CF9E2944);
	}

	::BEE66D693E5746CA* F3C0C79FAEFDD738(::System::String* EFD09F0992A4635C)
	{
		return ((::BEE66D693E5746CA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F59F2B98CCAAB410_F3C0C79FAEFDD738_OFFSET))(this, EFD09F0992A4635C);
	}

	::System::String* FC52AFDBAADF4B02(::System::Globalization::CultureInfo* B639ACA4E77C2506, ::System::String* B823BD107ED98484)
	{
		return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::String*))((::PBYTE)hIl2Cpp + F59F2B98CCAAB410_FC52AFDBAADF4B02_OFFSET))(this, B639ACA4E77C2506, B823BD107ED98484);
	}
};

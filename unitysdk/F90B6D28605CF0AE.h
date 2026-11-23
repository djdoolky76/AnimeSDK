#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define F90B6D28605CF0AE_A119BF83334557F5_OFFSET UNITYSDK_OFFSET(0x3EF6A30)
#define F90B6D28605CF0AE_B3947851085D0A1D_OFFSET UNITYSDK_OFFSET(0x3EF6A10)
#define F90B6D28605CF0AE_EBF71087EA4F1C22_OFFSET UNITYSDK_OFFSET(0x3EF69F0)
#define F90B6D28605CF0AE_EEB9ACED75CD4162_OFFSET UNITYSDK_OFFSET(0x3EF69D0)
#define F90B6D28605CF0AE_F392071EC8241C87_OFFSET UNITYSDK_OFFSET(0x3EF69B0)
#define F90B6D28605CF0AE__CTOR_OFFSET UNITYSDK_OFFSET(0x3EF6940)

inline static constexpr unsigned int F90B6D28605CF0AE_TypeDefinitionIndex = 15225;

class F90B6D28605CF0AE : public ::System::Object
{
public:
	::System::Boolean F616CFD6281B2C68; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 E5BAACFC5D7A0841; // 0x14
	::System::String* B40DC177D529ECEC; // 0x18
	::System::Text::StringBuilder* F935D6EF1B62A89B; // 0x20
	::System::String* EEDD176849760B54; // 0x28

	::System::Boolean A119BF83334557F5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE_A119BF83334557F5_OFFSET))(this);
	}

	::System::Boolean EBF71087EA4F1C22()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE_EBF71087EA4F1C22_OFFSET))(this);
	}

	::System::Boolean F392071EC8241C87()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE_F392071EC8241C87_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE__CTOR_OFFSET))(this);
	}

	::System::Boolean EEB9ACED75CD4162()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE_EEB9ACED75CD4162_OFFSET))(this);
	}

	::System::Boolean B3947851085D0A1D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F90B6D28605CF0AE_B3947851085D0A1D_OFFSET))(this);
	}
};

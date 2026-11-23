#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC05B6FF03DB975D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFDFD8D59E1B8215_F5628F8349D4A8A6_BC32073B23FF4145_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_F5628F8349D4A8A6_FB17DFE3D6035CA8_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_F5628F8349D4A8A6_FB2103CF83D6A4DF_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FDA310)
#define EFDFD8D59E1B8215_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFDFD8D59E1B8215_F5628F8349D4A8A6_TypeDefinitionIndex = 14404;

class EFDFD8D59E1B8215_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EFDFD8D59E1B8215_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EFDFD8D59E1B8215_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_B554F2887A807DD2()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_EE578EA30323FC61()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_B51F15F53094ADC7()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::EC05B6FF03DB975D FB17DFE3D6035CA8(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_F5628F8349D4A8A6_FB17DFE3D6035CA8_OFFSET))(this, BB8C609F76620E45);
	}

	::EC05B6FF03DB975D FB2103CF83D6A4DF(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_F5628F8349D4A8A6_FB2103CF83D6A4DF_OFFSET))(this, BB8C609F76620E45);
	}

	::EC05B6FF03DB975D BC32073B23FF4145(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_F5628F8349D4A8A6_BC32073B23FF4145_OFFSET))(this, BB8C609F76620E45);
	}
};

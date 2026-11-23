#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GameReportModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ReportInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A5FAC0F407B57C62_A7965E257CB058EA_OFFSET UNITYSDK_OFFSET(0x3A67540)
#define A5FAC0F407B57C62_A82D184AA576FDDB_OFFSET UNITYSDK_OFFSET(0x3A674D0)
#define A5FAC0F407B57C62_AABC046F53628431_OFFSET UNITYSDK_OFFSET(0x3A65610)
#define A5FAC0F407B57C62_AD770A9EE2F9BC2B_OFFSET UNITYSDK_OFFSET(0x3A66C40)
#define A5FAC0F407B57C62_AD83CD1969E3A28E_OFFSET UNITYSDK_OFFSET(0x3A67220)
#define A5FAC0F407B57C62_BACBC6E67291CB78_OFFSET UNITYSDK_OFFSET(0x3A65B80)
#define A5FAC0F407B57C62_BBADAA053DB21477_OFFSET UNITYSDK_OFFSET(0x3A66280)
#define A5FAC0F407B57C62_BF445E344DC227BE_OFFSET UNITYSDK_OFFSET(0x3A666E0)
#define A5FAC0F407B57C62_E47D20F48261552A_OFFSET UNITYSDK_OFFSET(0x3A66480)
#define A5FAC0F407B57C62_E6297856427F4E1A_OFFSET UNITYSDK_OFFSET(0x3A652A0)
#define A5FAC0F407B57C62_E992C39FD4BE23C3_OFFSET UNITYSDK_OFFSET(0x3A66B10)
#define A5FAC0F407B57C62_EDBA27819CD35F85_OFFSET UNITYSDK_OFFSET(0x3A65850)
#define A5FAC0F407B57C62_F3351F805BAEFED3_OFFSET UNITYSDK_OFFSET(0x3A66870)
#define A5FAC0F407B57C62__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A67550)
#define A5FAC0F407B57C62__CTOR_OFFSET UNITYSDK_OFFSET(0x3A676C0)

inline static constexpr unsigned int A5FAC0F407B57C62_TypeDefinitionIndex = 13045;

class A5FAC0F407B57C62 : public ::System::Object
{
public:
	static ::System::String** StaticGet_A61806D1B8904679()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A5FAC0F407B57C62_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::A5FAC0F407B57C62** StaticGet_EE999965A1D2099B()
	{
		return (::A5FAC0F407B57C62**)Il2CppClass::FromTypeDefinitionIndex(A5FAC0F407B57C62_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* E225EF7E5FD3EC30; // 0x10
	::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* F9B6422C0AFFE9B9; // 0x18
	::MiHoYo::SDK::ReportInfo* EF90AE2880A71519; // 0x20
	::System::Boolean F89F9E7E4F94259A; // 0x28
	::System::Byte _padding0[0x7];
	::System::String* B35A88DA398D528E; // 0x30

	::MiHoYo::SDK::GameReportModel* BACBC6E67291CB78()
	{
		return ((::MiHoYo::SDK::GameReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_BACBC6E67291CB78_OFFSET))(this);
	}

	::System::Void A7965E257CB058EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_A7965E257CB058EA_OFFSET))(this);
	}

	::System::Void E6297856427F4E1A(::MiHoYo::SDK::GameReportModel* E0BB02EDCCFC0E4E)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameReportModel*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_E6297856427F4E1A_OFFSET))(this, E0BB02EDCCFC0E4E);
	}

	::System::String* BBADAA053DB21477(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* F9B6422C0AFFE9B9)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_BBADAA053DB21477_OFFSET))(this, F9B6422C0AFFE9B9);
	}

	::System::Void BF445E344DC227BE(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_BF445E344DC227BE_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F3351F805BAEFED3(::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_F3351F805BAEFED3_OFFSET))(this, B960AC235824C6C8);
	}

	::System::Void E47D20F48261552A(::System::Int32 FB34480EE13CC791, ::System::String* E7C99297BCFC5085, ::System::String* A4BDCD3E1E03909D, ::System::String* F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_E47D20F48261552A_OFFSET))(this, FB34480EE13CC791, E7C99297BCFC5085, A4BDCD3E1E03909D, F3851C787B08F75B);
	}

	::MiHoYo::SDK::GameReportModel* EDBA27819CD35F85()
	{
		return ((::MiHoYo::SDK::GameReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_EDBA27819CD35F85_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A5FAC0F407B57C62__CCTOR_OFFSET))();
	}

	::System::Void E992C39FD4BE23C3(::System::Int32 FB34480EE13CC791, ::System::String* E7C99297BCFC5085, ::System::String* A4BDCD3E1E03909D, ::System::String* F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_E992C39FD4BE23C3_OFFSET))(this, FB34480EE13CC791, E7C99297BCFC5085, A4BDCD3E1E03909D, F3851C787B08F75B);
	}

	::System::Void A82D184AA576FDDB(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_A82D184AA576FDDB_OFFSET))(this, F1BF0FE85E9DD584);
	}

	::System::Void AD83CD1969E3A28E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_AD83CD1969E3A28E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62__CTOR_OFFSET))(this);
	}

	::System::Void AD770A9EE2F9BC2B(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* F9B6422C0AFFE9B9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_AD770A9EE2F9BC2B_OFFSET))(this, F9B6422C0AFFE9B9);
	}

	::System::Void AABC046F53628431(::System::Int32 FB34480EE13CC791, ::System::String* E7C99297BCFC5085, ::System::String* A4BDCD3E1E03909D, ::System::String* F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A5FAC0F407B57C62_AABC046F53628431_OFFSET))(this, FB34480EE13CC791, E7C99297BCFC5085, A4BDCD3E1E03909D, F3851C787B08F75B);
	}
};

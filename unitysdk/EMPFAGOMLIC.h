#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDJEACGPJOJ.h"
#include "unitysdk/System/Object.h"

class MPAAFEPBELF;
namespace System { class String; }

#define EMPFAGOMLIC_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x1E5EA3D0)
#define EMPFAGOMLIC_CLIGAFFECKA_OFFSET UNITYSDK_OFFSET(0x1E5EAA40)
#define EMPFAGOMLIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5E5D00)
#define EMPFAGOMLIC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E5EAF50)
#define EMPFAGOMLIC_GDJBCHGCANH_OFFSET UNITYSDK_OFFSET(0x1E5EAAA0)
#define EMPFAGOMLIC_JAFCBOHBCII_OFFSET UNITYSDK_OFFSET(0x1E5EA4E0)
#define EMPFAGOMLIC_JPHMNBBIPBE_OFFSET UNITYSDK_OFFSET(0x1E5EA840)
#define EMPFAGOMLIC_MGNEBCEJFPL_OFFSET UNITYSDK_OFFSET(0x1E5EA7A0)
#define EMPFAGOMLIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5EA470)
#define EMPFAGOMLIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5C40)

inline static constexpr unsigned int EMPFAGOMLIC_TypeDefinitionIndex = 34086;

class EMPFAGOMLIC : public ::System::Object
{
public:
	::MPAAFEPBELF* EFFAONJBCOG; // 0x10
	::IDJEACGPJOJ LHIKBPKIOFJ; // 0x18
	::System::Boolean IFHPNDPONAL; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Int64 OLLFNNGJCFN; // 0x20

	::System::Void _ctor(::MPAAFEPBELF* LJBPECKCCEA, ::IDJEACGPJOJ FJCCCCOHIKK)
	{
		return ((::System::Void(*)(::PVOID, ::MPAAFEPBELF*, ::IDJEACGPJOJ))((::PBYTE)hIl2Cpp + EMPFAGOMLIC__CTOR_OFFSET))(this, LJBPECKCCEA, FJCCCCOHIKK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JAFCBOHBCII(::Il2CppArray<::System::Byte>* OIHEMDFHGPH, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_JAFCBOHBCII_OFFSET))(this, OIHEMDFHGPH, BOGPAHGJOJK, JHFKDGBCOBA);
	}

	::System::Boolean GDJBCHGCANH(::Il2CppArray<::System::Byte>* OIHEMDFHGPH, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA, ::System::Int64 ALLDMBDDNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_GDJBCHGCANH_OFFSET))(this, OIHEMDFHGPH, BOGPAHGJOJK, JHFKDGBCOBA, ALLDMBDDNIG);
	}

	::System::Boolean CLIGAFFECKA(::System::Int64 EFMNDLNEHNB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_CLIGAFFECKA_OFFSET))(this, EFMNDLNEHNB);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JPHMNBBIPBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_JPHMNBBIPBE_OFFSET))(this);
	}

	::System::Void MGNEBCEJFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_MGNEBCEJFPL_OFFSET))(this);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPFAGOMLIC_BCMBLHMKGMA_OFFSET))(this);
	}
};

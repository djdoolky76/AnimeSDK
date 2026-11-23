#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BBE83D20AD009CAD_A40D270F8D4BA503_OFFSET UNITYSDK_OFFSET(0x3B17A80)
#define BBE83D20AD009CAD_AD75E1A5A7C1BB26_OFFSET UNITYSDK_OFFSET(0x3B176E0)
#define BBE83D20AD009CAD_B59B4323416B231A_OFFSET UNITYSDK_OFFSET(0x3B17920)
#define BBE83D20AD009CAD_E659C68579C9651E_OFFSET UNITYSDK_OFFSET(0x3B18120)
#define BBE83D20AD009CAD_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3B175D0)
#define BBE83D20AD009CAD_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x3B17550)
#define BBE83D20AD009CAD_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3B174A0)
#define BBE83D20AD009CAD_E8D398D77C878337_OFFSET UNITYSDK_OFFSET(0x3B18200)
#define BBE83D20AD009CAD_F679DCD16AACF398_OFFSET UNITYSDK_OFFSET(0x3B18350)
#define BBE83D20AD009CAD_FC5353F43614C46E_OFFSET UNITYSDK_OFFSET(0x3B18190)
#define BBE83D20AD009CAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B17DF0)
#define BBE83D20AD009CAD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B17ED0)
#define BBE83D20AD009CAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3B180A0)

inline static constexpr unsigned int BBE83D20AD009CAD_TypeDefinitionIndex = 19289;

class BBE83D20AD009CAD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_B1C647CC8E323A25()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BBE83D20AD009CAD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_A354348D735A996D()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BBE83D20AD009CAD_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Boolean EA692957B26C7AC3; // 0x10
	::System::Byte _padding0[0x7];
	::Il2CppArray<::System::Byte>* B329DA8DF5121A02; // 0x18
	::Il2CppArray<::System::Byte>* B5840939EF634519; // 0x20
	::Il2CppArray<::System::Byte>* F00C62A4328033E6; // 0x28

	::Il2CppArray<::System::Byte>* E659C68579C9651E()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_E659C68579C9651E_OFFSET))(this);
	}

	::System::Void F679DCD16AACF398(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_F679DCD16AACF398_OFFSET))(this, E937D4885DAA1AE8);
	}

	::Il2CppArray<::System::Byte>* B59B4323416B231A(::System::String* E15BCD7E743D54ED, ::System::Int32 EB211B01816ACA79)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_B59B4323416B231A_OFFSET))(this, E15BCD7E743D54ED, EB211B01816ACA79);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBE83D20AD009CAD__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Byte>* AD75E1A5A7C1BB26(::Il2CppArray<::System::Byte>* E7803E937241DAB0)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_AD75E1A5A7C1BB26_OFFSET))(this, E7803E937241DAB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* FC5353F43614C46E()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_FC5353F43614C46E_OFFSET))(this);
	}

	::System::Void E8D398D77C878337(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_E8D398D77C878337_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* E15BCD7E743D54ED, ::Il2CppArray<::System::Byte>* A5BD4A4C8E2EEC5B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD__CTOR_1_OFFSET))(this, E15BCD7E743D54ED, A5BD4A4C8E2EEC5B);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA_1(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_E8AF1E0387A100FA_1_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::Il2CppArray<::System::Byte>* A40D270F8D4BA503(::Il2CppArray<::System::Byte>* A9A3F57BADD07579, ::System::Int32 EB211B01816ACA79)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BBE83D20AD009CAD_A40D270F8D4BA503_OFFSET))(this, A9A3F57BADD07579, EB211B01816ACA79);
	}
};

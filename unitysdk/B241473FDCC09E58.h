#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAAE02C86EDE12BB.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define B241473FDCC09E58_B3DB385DC3E0358D_OFFSET UNITYSDK_OFFSET(0x389FE10)
#define B241473FDCC09E58_BEACCB0D98B80C21_OFFSET UNITYSDK_OFFSET(0x389FFE0)
#define B241473FDCC09E58_E1342AE9D68A289F_OFFSET UNITYSDK_OFFSET(0x389FEA0)
#define B241473FDCC09E58_E55ACD0AC8A21D74_OFFSET UNITYSDK_OFFSET(0x1FC6CD0)
#define B241473FDCC09E58_EB9A8A3843BFB7A1_OFFSET UNITYSDK_OFFSET(0x38A0080)
#define B241473FDCC09E58_F2490AA89B491B9D_OFFSET UNITYSDK_OFFSET(0x38A0190)
#define B241473FDCC09E58_F5DB91DE78943E3E_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B241473FDCC09E58_F85201DB7C70DD02_OFFSET UNITYSDK_OFFSET(0x38A0130)
#define B241473FDCC09E58_FC015F001DBDBDD2_OFFSET UNITYSDK_OFFSET(0x389FF30)
#define B241473FDCC09E58__CTOR_OFFSET UNITYSDK_OFFSET(0x389FFD0)

inline static constexpr unsigned int B241473FDCC09E58_TypeDefinitionIndex = 20926;

class B241473FDCC09E58 : public ::FAAE02C86EDE12BB
{
public:
	::Il2CppArray<::System::Byte>* A46FE1E425A8BD35; // 0x48

	::System::Int32 E55ACD0AC8A21D74()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58_E55ACD0AC8A21D74_OFFSET))(this);
	}

	::System::Security::Cryptography::ICryptoTransform* E1342AE9D68A289F(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
	{
		return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + B241473FDCC09E58_E1342AE9D68A289F_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* BEACCB0D98B80C21()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58_BEACCB0D98B80C21_OFFSET))(this);
	}

	::System::Void F5DB91DE78943E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58_F5DB91DE78943E3E_OFFSET))(this);
	}

	::System::Security::Cryptography::ICryptoTransform* B3DB385DC3E0358D(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
	{
		return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + B241473FDCC09E58_B3DB385DC3E0358D_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
	}

	::System::Void F2490AA89B491B9D(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + B241473FDCC09E58_F2490AA89B491B9D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F85201DB7C70DD02(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B241473FDCC09E58_F85201DB7C70DD02_OFFSET))(this, E937D4885DAA1AE8);
	}

	::Il2CppArray<::System::Security::Cryptography::KeySizes*>* EB9A8A3843BFB7A1()
	{
		return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58_EB9A8A3843BFB7A1_OFFSET))(this);
	}

	::System::Void FC015F001DBDBDD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B241473FDCC09E58_FC015F001DBDBDD2_OFFSET))(this);
	}
};

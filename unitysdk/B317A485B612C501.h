#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE31BE81CCA49221;
namespace System { class B7AF8ED75AF838E0; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }

#define B317A485B612C501_B618964E9F209E41_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define B317A485B612C501_E6F92EBF7F9880D0_1_OFFSET UNITYSDK_OFFSET(0x3EA4A80)
#define B317A485B612C501_E6F92EBF7F9880D0_OFFSET UNITYSDK_OFFSET(0x3EA49A0)
#define B317A485B612C501_E7E76BEC0A83ABB7_OFFSET UNITYSDK_OFFSET(0x3EA4B20)
#define B317A485B612C501_F2BBE98D2420A60B_OFFSET UNITYSDK_OFFSET(0x3EA4C20)
#define B317A485B612C501_F86368ADFBAD8242_OFFSET UNITYSDK_OFFSET(0x3EA4C10)
#define B317A485B612C501__CTOR_OFFSET UNITYSDK_OFFSET(0x3EA4AB0)

inline static constexpr unsigned int B317A485B612C501_TypeDefinitionIndex = 15056;

class B317A485B612C501 : public ::System::Object
{
public:
	::System::Object* B1A49DE15B86062F; // 0x10
	::System::Threading::ManualResetEvent* E38FD399E4DFEF27; // 0x18
	::System::Boolean E97CCFEC607964A9; // 0x20
	::System::Byte _padding0[0x7];
	::Il2CppArray<::System::Byte>* E053FF8A1666756C; // 0x28
	::System::Int32 A8FA03AB120F3647; // 0x30
	::System::Int32 EEE4F084E077C7A0; // 0x34
	::System::B7AF8ED75AF838E0* FDB9F888AD9A8164; // 0x38
	::System::Object* F562DA1C00CE60C6; // 0x40
	::System::Int32 E5603852922F8A5F; // 0x48
	::System::Byte _padding1[0x4];
	::System::Exception* A77708DE91265E43; // 0x50

	::FE31BE81CCA49221* E7E76BEC0A83ABB7()
	{
		return ((::FE31BE81CCA49221*(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501_E7E76BEC0A83ABB7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501__CTOR_OFFSET))(this);
	}

	::System::Object* B618964E9F209E41()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501_B618964E9F209E41_OFFSET))(this);
	}

	::System::Void E6F92EBF7F9880D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501_E6F92EBF7F9880D0_OFFSET))(this);
	}

	::System::Void E6F92EBF7F9880D0_1(::System::Exception* A5FB7225DA5C5A9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + B317A485B612C501_E6F92EBF7F9880D0_1_OFFSET))(this, A5FB7225DA5C5A9B);
	}

	::System::Boolean F2BBE98D2420A60B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501_F2BBE98D2420A60B_OFFSET))(this);
	}

	::System::Boolean F86368ADFBAD8242()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B317A485B612C501_F86368ADFBAD8242_OFFSET))(this);
	}
};

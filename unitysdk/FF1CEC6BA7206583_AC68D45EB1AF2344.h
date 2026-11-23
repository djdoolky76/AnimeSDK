#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class EF41AAB1A8B59C89;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography { class DerSequenceReader; }
template <typename T> class AE67837A03FEA882;
template <typename T> class F875E7A8F1781006;

#define FF1CEC6BA7206583_AC68D45EB1AF2344_A457BC12B6CF55CC_OFFSET UNITYSDK_OFFSET(0x3E7AA80)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_A8C0207369E54E30_OFFSET UNITYSDK_OFFSET(0x3E7AA80)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x3E7AB60)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3E7A7E0)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x3E7AB20)
#define FF1CEC6BA7206583_AC68D45EB1AF2344_FDB6CD3520796DEE_OFFSET UNITYSDK_OFFSET(0x21AD3E0)
#define FF1CEC6BA7206583_AC68D45EB1AF2344__CTOR_OFFSET UNITYSDK_OFFSET(0x2D14590)

inline static constexpr unsigned int FF1CEC6BA7206583_AC68D45EB1AF2344_TypeDefinitionIndex = 14934;

class FF1CEC6BA7206583_AC68D45EB1AF2344 : public ::System::Object
{
public:
	::System::Int32 FEB3551B7D8B59C1; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> FFDE99DB2A55498E; // 0x18
	::System::Byte _padding1[0x8];
	::System::Int32 B6673A536E1D1029; // 0x28
	::System::Byte _padding2[0x4];
	::EF41AAB1A8B59C89* F79B4D487F303AB2; // 0x30
	::EF41AAB1A8B59C89* F24511DF8B598FF4; // 0x38
	::AE67837A03FEA882<::System::Security::Cryptography::DerSequenceReader*>* B0364E8BFDA57007; // 0x40
	::System::Security::Cryptography::DerSequenceReader* A9069370120EB102; // 0x48

	::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
	}

	::System::Void F21DBBC44C999728()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_F21DBBC44C999728_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_E6CAD58306FCDCB5_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> FDB6CD3520796DEE()
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_FDB6CD3520796DEE_OFFSET))(this);
	}

	::System::Void F38E5001C7AA1BB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_F38E5001C7AA1BB5_OFFSET))(this);
	}

	::System::Object* E34B6CA02139E820()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_E34B6CA02139E820_OFFSET))(this);
	}

	::F875E7A8F1781006<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* A8C0207369E54E30()
	{
		return ((::F875E7A8F1781006<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_A8C0207369E54E30_OFFSET))(this);
	}

	::System::Collections::IEnumerator* A457BC12B6CF55CC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_AC68D45EB1AF2344_A457BC12B6CF55CC_OFFSET))(this);
	}
};

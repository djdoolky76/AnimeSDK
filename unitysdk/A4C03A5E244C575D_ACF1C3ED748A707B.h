#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A4C03A5E244C575D_ACF1C3ED748A707B_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define A4C03A5E244C575D_ACF1C3ED748A707B_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define A4C03A5E244C575D_ACF1C3ED748A707B_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3A68920)
#define A4C03A5E244C575D_ACF1C3ED748A707B_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A4C03A5E244C575D_ACF1C3ED748A707B_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x3A68A70)
#define A4C03A5E244C575D_ACF1C3ED748A707B__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

inline static constexpr unsigned int A4C03A5E244C575D_ACF1C3ED748A707B_TypeDefinitionIndex = 13031;

class A4C03A5E244C575D_ACF1C3ED748A707B : public ::System::Object
{
public:
	::System::Int32 FEB3551B7D8B59C1; // 0x10
	::System::Byte _padding0[0x4];
	::System::Object* FFDE99DB2A55498E; // 0x18
	::MiHoYo::SDK::Watermark::WatermarkRequest* A82F72570D9C70C2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E734BA46CBA523FB; // 0x28
	::System::Action_1<::System::String*>* AA3273132CDFA7EF; // 0x30
	::System::Action* E5753F48089F9529; // 0x38
	::System::Single B8CEFF124B3872B8; // 0x40
	::System::Byte _padding1[0x4];
	::System::String* E6A76196E9A562A4; // 0x48

	::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
	}

	::System::Void F21DBBC44C999728()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B_F21DBBC44C999728_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B_E6CAD58306FCDCB5_OFFSET))(this);
	}

	::System::Object* BB5F6FA7EB4E8D6F()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B_BB5F6FA7EB4E8D6F_OFFSET))(this);
	}

	::System::Void F38E5001C7AA1BB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B_F38E5001C7AA1BB5_OFFSET))(this);
	}

	::System::Object* E34B6CA02139E820()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_ACF1C3ED748A707B_E34B6CA02139E820_OFFSET))(this);
	}
};

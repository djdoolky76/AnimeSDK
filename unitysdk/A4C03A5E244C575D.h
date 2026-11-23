#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A4C03A5E244C575D_A0062C20F17C4187_OFFSET UNITYSDK_OFFSET(0x3A69370)
#define A4C03A5E244C575D_BAF1D0F4BF2EB6ED_OFFSET UNITYSDK_OFFSET(0x3A69430)
#define A4C03A5E244C575D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4C03A5E244C575D_TypeDefinitionIndex = 13033;

class A4C03A5E244C575D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C03A5E244C575D__CTOR_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* A0062C20F17C4187(::System::String* B960AC235824C6C8, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* E8158D6D9A56F03B, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_A0062C20F17C4187_OFFSET))(B960AC235824C6C8, E8158D6D9A56F03B, E5753F48089F9529, B8CEFF124B3872B8);
	}

	static ::System::Collections::IEnumerator* BAF1D0F4BF2EB6ED(::MiHoYo::SDK::Watermark::WatermarkRequest* A82F72570D9C70C2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E734BA46CBA523FB, ::System::Action_1<::System::String*>* AA3273132CDFA7EF, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8)
	{
		return ((::System::Collections::IEnumerator*(*)(::MiHoYo::SDK::Watermark::WatermarkRequest*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + A4C03A5E244C575D_BAF1D0F4BF2EB6ED_OFFSET))(A82F72570D9C70C2, E734BA46CBA523FB, AA3273132CDFA7EF, E5753F48089F9529, B8CEFF124B3872B8);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace A418C49FA6A8C1F7 { class F5A720D39664FB39; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A418C49FA6A8C1F7_F3127361B88A0CE0_FEF2132AA78EA026__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int F3127361B88A0CE0_FEF2132AA78EA026_TypeDefinitionIndex = 13507;

	class F3127361B88A0CE0_FEF2132AA78EA026 : public ::System::Object
	{
	public:
		::System::Int32 A604E97B5E7478A8; // 0x10
		::System::Byte _padding0[0x4];
		::A418C49FA6A8C1F7::F5A720D39664FB39* EDB6FB1A9F9FC7C2; // 0x18
		::System::Boolean F998C5CD6882EEC0; // 0x20
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* A1A26F79E67D5E0D; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F3127361B88A0CE0_FEF2132AA78EA026__CTOR_OFFSET))(this);
		}
	};
}

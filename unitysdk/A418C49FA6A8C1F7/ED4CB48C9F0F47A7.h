#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define A418C49FA6A8C1F7_ED4CB48C9F0F47A7__CTOR_OFFSET UNITYSDK_OFFSET(0x302E4C0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int ED4CB48C9F0F47A7_TypeDefinitionIndex = 13525;

	struct alignas(8) ED4CB48C9F0F47A7
	{
		::A418C49FA6A8C1F7::B9A8F16A870DE44E* A46055B0CF91681E; // 0x10
		::System::Int32 FF66E7368E8F6699; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* E8BB68813405206E; // 0x20

		::System::Void _ctor(::A418C49FA6A8C1F7::B9A8F16A870DE44E* AA75A0A921DEAA5A, ::System::Int32 F5AEFA05C9F71B82, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* F81C93E9FAD68F21)
		{
			return ((::System::Void(*)(::PVOID, ::A418C49FA6A8C1F7::B9A8F16A870DE44E*, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_ED4CB48C9F0F47A7__CTOR_OFFSET))(this, AA75A0A921DEAA5A, F5AEFA05C9F71B82, F81C93E9FAD68F21);
		}
	};
}

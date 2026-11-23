#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class UIDocument; }

#define A418C49FA6A8C1F7_BD511EB52FBDC246_A60042AF7543A63D_OFFSET UNITYSDK_OFFSET(0x435E570)
#define A418C49FA6A8C1F7_BD511EB52FBDC246_E7DF8C15071FC62E_OFFSET UNITYSDK_OFFSET(0x435E8B0)
#define A418C49FA6A8C1F7_BD511EB52FBDC246__CTOR_OFFSET UNITYSDK_OFFSET(0x435E930)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int BD511EB52FBDC246_TypeDefinitionIndex = 13655;

	class BD511EB52FBDC246 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>* FE1ED0E83DEA6E38; // 0x10

		::System::Void A60042AF7543A63D(::UnityEngine::UIElements::UIDocument* EEEEFA01D46EE430, ::A418C49FA6A8C1F7::B9A8F16A870DE44E* A694F482B62F9079, ::System::Int32 B7D7945C0867F321)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::UIDocument*, ::A418C49FA6A8C1F7::B9A8F16A870DE44E*, ::System::Int32))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BD511EB52FBDC246_A60042AF7543A63D_OFFSET))(this, EEEEFA01D46EE430, A694F482B62F9079, B7D7945C0867F321);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BD511EB52FBDC246__CTOR_OFFSET))(this);
		}

		::System::Void E7DF8C15071FC62E(::UnityEngine::UIElements::UIDocument* EEEEFA01D46EE430)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::UIDocument*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BD511EB52FBDC246_E7DF8C15071FC62E_OFFSET))(this, EEEEFA01D46EE430);
		}
	};
}

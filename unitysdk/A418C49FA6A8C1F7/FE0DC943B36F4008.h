#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/A5B3BF033E528493.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A418C49FA6A8C1F7_FE0DC943B36F4008_A4BB22462B1DC903_OFFSET UNITYSDK_OFFSET(0x4331F20)
#define A418C49FA6A8C1F7_FE0DC943B36F4008_E0067E9350BBEFE8_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define A418C49FA6A8C1F7_FE0DC943B36F4008_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x4331D40)
#define A418C49FA6A8C1F7_FE0DC943B36F4008__CTOR_OFFSET UNITYSDK_OFFSET(0x4331EA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int FE0DC943B36F4008_TypeDefinitionIndex = 13457;

	class FE0DC943B36F4008 : public ::A418C49FA6A8C1F7::A5B3BF033E528493
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* E7FA53DB4F474734; // 0x10

		::System::Collections::Generic::IEnumerable_1<::System::String*>* E0067E9350BBEFE8()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FE0DC943B36F4008_E0067E9350BBEFE8_OFFSET))(this);
		}

		::System::Boolean E7483E7CBF06BCFD(::A418C49FA6A8C1F7::A5B3BF033E528493* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::A418C49FA6A8C1F7::A5B3BF033E528493*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FE0DC943B36F4008_E7483E7CBF06BCFD_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FE0DC943B36F4008__CTOR_OFFSET))(this);
		}

		::System::Void A4BB22462B1DC903(::System::Collections::Generic::IEnumerable_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FE0DC943B36F4008_A4BB22462B1DC903_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

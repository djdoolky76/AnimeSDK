#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A59550327C275755;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A418C49FA6A8C1F7_F9971D09DE018E4F_A7C49787D184A640_OFFSET UNITYSDK_OFFSET(0x428EA50)
#define A418C49FA6A8C1F7_F9971D09DE018E4F_ACF04A010BD95E2A_OFFSET UNITYSDK_OFFSET(0x428ED20)
#define A418C49FA6A8C1F7_F9971D09DE018E4F_E6B32B04B34A8F14_OFFSET UNITYSDK_OFFSET(0x428F3A0)
#define A418C49FA6A8C1F7_F9971D09DE018E4F_EA6FE8AC65350561_OFFSET UNITYSDK_OFFSET(0x428F080)
#define A418C49FA6A8C1F7_F9971D09DE018E4F_EECBD1F0671DF53B_OFFSET UNITYSDK_OFFSET(0x428F400)
#define A418C49FA6A8C1F7_F9971D09DE018E4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int F9971D09DE018E4F_TypeDefinitionIndex = 13854;

	class F9971D09DE018E4F : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::A59550327C275755*>*>** StaticGet_B5499C2DF4E586FE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::A59550327C275755*>*>**)Il2CppClass::FromTypeDefinitionIndex(F9971D09DE018E4F_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void ACF04A010BD95E2A(::A59550327C275755* E26D59B21A9D32DA)
		{
			return ((::System::Void(*)(::A59550327C275755*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F_ACF04A010BD95E2A_OFFSET))(E26D59B21A9D32DA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F__CTOR_OFFSET))(this);
		}

		static ::System::Void EA6FE8AC65350561()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F_EA6FE8AC65350561_OFFSET))();
		}

		static ::System::Boolean E6B32B04B34A8F14(::System::String* EA13ED3B97933823, ::System::Collections::Generic::List_1<::A59550327C275755*>*& AD67854B58967A73)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::A59550327C275755*>*&))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F_E6B32B04B34A8F14_OFFSET))(EA13ED3B97933823, AD67854B58967A73);
		}

		static ::System::Void A7C49787D184A640()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F_A7C49787D184A640_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::A59550327C275755*>*>* EECBD1F0671DF53B()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::A59550327C275755*>*>*(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_F9971D09DE018E4F_EECBD1F0671DF53B_OFFSET))();
		}
	};
}

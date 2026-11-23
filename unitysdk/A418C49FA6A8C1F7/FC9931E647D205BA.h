#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDA098A9BE4F39AB;
class F86ADDBA03D0E08F;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A418C49FA6A8C1F7_FC9931E647D205BA_A02E48457D42CBB1_OFFSET UNITYSDK_OFFSET(0x42B19A0)
#define A418C49FA6A8C1F7_FC9931E647D205BA_A7C49787D184A640_OFFSET UNITYSDK_OFFSET(0x42AF550)
#define A418C49FA6A8C1F7_FC9931E647D205BA_ACF04A010BD95E2A_OFFSET UNITYSDK_OFFSET(0x42B1090)
#define A418C49FA6A8C1F7_FC9931E647D205BA_E816DEF4D33FD3E3_OFFSET UNITYSDK_OFFSET(0x42AF3E0)
#define A418C49FA6A8C1F7_FC9931E647D205BA_EA6FE8AC65350561_OFFSET UNITYSDK_OFFSET(0x42B1680)
#define A418C49FA6A8C1F7_FC9931E647D205BA_EECBD1F0671DF53B_OFFSET UNITYSDK_OFFSET(0x42B1A40)
#define A418C49FA6A8C1F7_FC9931E647D205BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int FC9931E647D205BA_TypeDefinitionIndex = 13961;

	class FC9931E647D205BA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>** StaticGet_B5499C2DF4E586FE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>**)Il2CppClass::FromTypeDefinitionIndex(FC9931E647D205BA_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>** StaticGet_A62A1A42DF04E897()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>**)Il2CppClass::FromTypeDefinitionIndex(FC9931E647D205BA_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::String* E816DEF4D33FD3E3(::System::Type* A288CB28FC2A6DA3, ::EDA098A9BE4F39AB* EB1C0506C507298D)
		{
			return ((::System::String*(*)(::System::Type*, ::EDA098A9BE4F39AB*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_E816DEF4D33FD3E3_OFFSET))(A288CB28FC2A6DA3, EB1C0506C507298D);
		}

		static ::System::Boolean A02E48457D42CBB1(::System::String* EA13ED3B97933823, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*& AD67854B58967A73)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*&))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_A02E48457D42CBB1_OFFSET))(EA13ED3B97933823, AD67854B58967A73);
		}

		static ::System::Void A7C49787D184A640()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_A7C49787D184A640_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA__CTOR_OFFSET))(this);
		}

		static ::System::Void EA6FE8AC65350561()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_EA6FE8AC65350561_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>* EECBD1F0671DF53B()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::F86ADDBA03D0E08F*>*>*(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_EECBD1F0671DF53B_OFFSET))();
		}

		static ::System::Void ACF04A010BD95E2A(::F86ADDBA03D0E08F* E26D59B21A9D32DA)
		{
			return ((::System::Void(*)(::F86ADDBA03D0E08F*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FC9931E647D205BA_ACF04A010BD95E2A_OFFSET))(E26D59B21A9D32DA);
		}
	};
}

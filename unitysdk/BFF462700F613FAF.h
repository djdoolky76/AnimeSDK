#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace A418C49FA6A8C1F7 { template <typename T> class F94E3F9897BE1673; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFF462700F613FAF_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x42B1C00)
#define BFF462700F613FAF_A792763ECDA9ACF0_OFFSET UNITYSDK_OFFSET(0x42B1B50)
#define BFF462700F613FAF_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x42B1CD0)
#define BFF462700F613FAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x42B1D80)

inline static constexpr unsigned int BFF462700F613FAF_TypeDefinitionIndex = 13978;

class BFF462700F613FAF : public ::System::Object
{
public:
	static ::A418C49FA6A8C1F7::F94E3F9897BE1673<::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*>** StaticGet_AA56DA64D27331A9()
	{
		return (::A418C49FA6A8C1F7::F94E3F9897BE1673<::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*>**)Il2CppClass::FromTypeDefinitionIndex(BFF462700F613FAF_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>* A792763ECDA9ACF0(::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>* FC214A51F37D6EAA)
	{
		return ((::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*(*)(::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*))((::PBYTE)hIl2Cpp + BFF462700F613FAF_A792763ECDA9ACF0_OFFSET))(FC214A51F37D6EAA);
	}

	static ::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>* A66245FDD0182C57(::System::Int32 AF2C3A97C7337839)
	{
		return ((::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BFF462700F613FAF_A66245FDD0182C57_OFFSET))(AF2C3A97C7337839);
	}

	static ::System::Void FF0997C535275E60(::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>* FC214A51F37D6EAA)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*))((::PBYTE)hIl2Cpp + BFF462700F613FAF_FF0997C535275E60_OFFSET))(FC214A51F37D6EAA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFF462700F613FAF__CCTOR_OFFSET))();
	}
};

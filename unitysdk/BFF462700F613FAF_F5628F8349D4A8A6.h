#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFF462700F613FAF_F5628F8349D4A8A6_E8D144A46F4E1D25_OFFSET UNITYSDK_OFFSET(0x42A1530)
#define BFF462700F613FAF_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x42A1830)
#define BFF462700F613FAF_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFF462700F613FAF_F5628F8349D4A8A6_TypeDefinitionIndex = 13977;

class BFF462700F613FAF_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BFF462700F613FAF_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BFF462700F613FAF_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BFF462700F613FAF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFF462700F613FAF_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF462700F613FAF_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>* E8D144A46F4E1D25()
	{
		return ((::System::Collections::Generic::List_1<::A418C49FA6A8C1F7::B9A8F16A870DE44E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF462700F613FAF_F5628F8349D4A8A6_E8D144A46F4E1D25_OFFSET))(this);
	}
};

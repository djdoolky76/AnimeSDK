#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F29D1F6B99C20181_BFC553EABD5B4ED8_OFFSET UNITYSDK_OFFSET(0x3ACA010)
#define F29D1F6B99C20181__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ACA990)
#define F29D1F6B99C20181__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F29D1F6B99C20181_TypeDefinitionIndex = 12191;

class F29D1F6B99C20181 : public ::System::Object
{
public:
	static ::F29D1F6B99C20181** StaticGet_EE999965A1D2099B()
	{
		return (::F29D1F6B99C20181**)Il2CppClass::FromTypeDefinitionIndex(F29D1F6B99C20181_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F29D1F6B99C20181__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F29D1F6B99C20181__CCTOR_OFFSET))();
	}

	::System::Void BFC553EABD5B4ED8(::System::String* AF821F194E6AF0BA, ::System::String* B0702575FE394B9C, ::System::String* F6FB39503B89A1C9, ::System::String* EAE5C1E2483CA606, ::System::Collections::Generic::List_1<::System::String*>* FEA1E9262A71B1F3, ::System::Collections::Generic::List_1<::System::String*>* A94B8AD849442DF3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BBA819B9F7C3CD1D, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + F29D1F6B99C20181_BFC553EABD5B4ED8_OFFSET))(this, AF821F194E6AF0BA, B0702575FE394B9C, F6FB39503B89A1C9, EAE5C1E2483CA606, FEA1E9262A71B1F3, A94B8AD849442DF3, BBA819B9F7C3CD1D, E04D2BE64FCE9814);
	}
};

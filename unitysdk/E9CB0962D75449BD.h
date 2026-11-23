#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BAA5D696C8A07549;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E9CB0962D75449BD_E5C628C65213BAD9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E9CB0962D75449BD_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E9CB0962D75449BD_F8FD48EE0ADBA3C5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E9CB0962D75449BD_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26D1790)
#define E9CB0962D75449BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9CB0962D75449BD_TypeDefinitionIndex = 6629;

class E9CB0962D75449BD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BAA5D696C8A07549*>* B7D0ED17DF87A383; // 0x10

	::System::Void F8FD48EE0ADBA3C5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BAA5D696C8A07549*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BAA5D696C8A07549*>*))((::PBYTE)hIl2Cpp + E9CB0962D75449BD_F8FD48EE0ADBA3C5_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E9CB0962D75449BD*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E9CB0962D75449BD*&))((::PBYTE)hIl2Cpp + E9CB0962D75449BD_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::BAA5D696C8A07549* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BAA5D696C8A07549*))((::PBYTE)hIl2Cpp + E9CB0962D75449BD_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9CB0962D75449BD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BAA5D696C8A07549*>* E5C628C65213BAD9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BAA5D696C8A07549*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E9CB0962D75449BD_E5C628C65213BAD9_OFFSET))(this);
	}
};

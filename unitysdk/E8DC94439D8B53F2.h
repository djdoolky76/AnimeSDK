#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F764BF581492332C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E8DC94439D8B53F2_B11F46A79A981C0F_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E8DC94439D8B53F2_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E8DC94439D8B53F2_F95DAC6F5E86CD91_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E8DC94439D8B53F2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x254D820)
#define E8DC94439D8B53F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8DC94439D8B53F2_TypeDefinitionIndex = 5388;

class E8DC94439D8B53F2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F764BF581492332C*>* BD348CA38F67E63B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8DC94439D8B53F2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F764BF581492332C*>* B11F46A79A981C0F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F764BF581492332C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8DC94439D8B53F2_B11F46A79A981C0F_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F764BF581492332C* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F764BF581492332C*))((::PBYTE)hIl2Cpp + E8DC94439D8B53F2_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E8DC94439D8B53F2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E8DC94439D8B53F2*&))((::PBYTE)hIl2Cpp + E8DC94439D8B53F2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F95DAC6F5E86CD91(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F764BF581492332C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F764BF581492332C*>*))((::PBYTE)hIl2Cpp + E8DC94439D8B53F2_F95DAC6F5E86CD91_OFFSET))(this, E937D4885DAA1AE8);
	}
};

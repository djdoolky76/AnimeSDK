#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIAHKECNFJK.h"
#include "unitysdk/System/Object.h"

class HODNLFIBLOO;
class IIKNLDKMGGB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define AEOJDFKFAJH_BOIPAKAJCOI_OFFSET UNITYSDK_OFFSET(0x1434C3E0)
#define AEOJDFKFAJH_KGBJODIMGFJ_OFFSET UNITYSDK_OFFSET(0x1434BE70)
#define AEOJDFKFAJH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1434BB80)
#define AEOJDFKFAJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1434BEC0)
#define AEOJDFKFAJH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1434BAE0)
#define AEOJDFKFAJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1434BAD0)

inline static constexpr unsigned int AEOJDFKFAJH_TypeDefinitionIndex = 63945;

class AEOJDFKFAJH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::NIAHKECNFJK, ::System::Collections::Generic::Queue_1<::HODNLFIBLOO*>*>** StaticGet_HGLAHOAHDML()
	{
		return (::System::Collections::Generic::Dictionary_2<::NIAHKECNFJK, ::System::Collections::Generic::Queue_1<::HODNLFIBLOO*>*>**)Il2CppClass::FromTypeDefinitionIndex(AEOJDFKFAJH_TypeDefinitionIndex)->GetStaticField(0x3D310);
	}
	::IIKNLDKMGGB* AMNIHACKELI; // 0x10
	::System::Int32 AHFJCBLHFIJ; // 0x18

	::System::Void _ctor(::IIKNLDKMGGB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::IIKNLDKMGGB*))((::PBYTE)hIl2Cpp + AEOJDFKFAJH__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEOJDFKFAJH__CCTOR_OFFSET))();
	}

	::HODNLFIBLOO* OMPFLKCBFHF(::NIAHKECNFJK INBEDPKFACD)
	{
		return ((::HODNLFIBLOO*(*)(::PVOID, ::NIAHKECNFJK))((::PBYTE)hIl2Cpp + AEOJDFKFAJH_OMPFLKCBFHF_OFFSET))(this, INBEDPKFACD);
	}

	::System::Void KGBJODIMGFJ(::System::Int32 BNNFKHFIPMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEOJDFKFAJH_KGBJODIMGFJ_OFFSET))(this, BNNFKHFIPMH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOJDFKFAJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BOIPAKAJCOI(::HODNLFIBLOO* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::HODNLFIBLOO*))((::PBYTE)hIl2Cpp + AEOJDFKFAJH_BOIPAKAJCOI_OFFSET))(this, JKBLDFBGBPK);
	}
};

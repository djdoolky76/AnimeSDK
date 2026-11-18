#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HJJEDOLCGOH_BBCONIPJLPP_JHOFNMGFLNP_OFFSET UNITYSDK_OFFSET(0x17E4E360)
#define HJJEDOLCGOH_BBCONIPJLPP_KGGPFPPNNBB_OFFSET UNITYSDK_OFFSET(0x17E4E2E0)
#define HJJEDOLCGOH_BBCONIPJLPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E2D0)

inline static constexpr unsigned int HJJEDOLCGOH_BBCONIPJLPP_TypeDefinitionIndex = 87737;

class HJJEDOLCGOH_BBCONIPJLPP : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_BBCONIPJLPP__CTOR_OFFSET))(this);
	}

	::System::Void KGGPFPPNNBB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_BBCONIPJLPP_KGGPFPPNNBB_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void JHOFNMGFLNP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_BBCONIPJLPP_JHOFNMGFLNP_OFFSET))(this, NAPFALLANDL);
	}
};

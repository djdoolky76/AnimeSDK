#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BD6FE734563D21A0_F04E591D6A858EFC_B5C6C49590FD48A7_OFFSET UNITYSDK_OFFSET(0x3ADFD00)
#define BD6FE734563D21A0_F04E591D6A858EFC_EA06F940AFBAE3D9_OFFSET UNITYSDK_OFFSET(0x3ADFC30)
#define BD6FE734563D21A0_F04E591D6A858EFC_EF158AFD7168E58E_OFFSET UNITYSDK_OFFSET(0x3AE0120)
#define BD6FE734563D21A0_F04E591D6A858EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD6FE734563D21A0_F04E591D6A858EFC_TypeDefinitionIndex = 12142;

class BD6FE734563D21A0_F04E591D6A858EFC : public ::System::Object
{
public:
	::System::Boolean F79274E558FCEA4B; // 0x10
	::System::Byte _padding0[0x7];
	::System::Action_1<::System::String*>* F67E9ECB01E03C33; // 0x18
	::System::String* B3E3A8495E17DE76; // 0x20
	::System::Action* FC1BFCAB993D006C; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_F04E591D6A858EFC__CTOR_OFFSET))(this);
	}

	::System::Void EA06F940AFBAE3D9(::System::String* F8FAD4AA0C608076)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_F04E591D6A858EFC_EA06F940AFBAE3D9_OFFSET))(this, F8FAD4AA0C608076);
	}

	::System::Void EF158AFD7168E58E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_F04E591D6A858EFC_EF158AFD7168E58E_OFFSET))(this);
	}

	::System::Void B5C6C49590FD48A7(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_F04E591D6A858EFC_B5C6C49590FD48A7_OFFSET))(this, A6CAE7339066B0FB);
	}
};

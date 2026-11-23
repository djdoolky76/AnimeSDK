#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A5CAEE1FA8564D3B_AB859F8B29D7CA1B_F180B07F102D9B13_OFFSET UNITYSDK_OFFSET(0x3AC66F0)
#define A5CAEE1FA8564D3B_AB859F8B29D7CA1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5CAEE1FA8564D3B_AB859F8B29D7CA1B_TypeDefinitionIndex = 12112;

class A5CAEE1FA8564D3B_AB859F8B29D7CA1B : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_AB859F8B29D7CA1B__CTOR_OFFSET))(this);
	}

	::System::Void F180B07F102D9B13(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_AB859F8B29D7CA1B_F180B07F102D9B13_OFFSET))(this, A6CAE7339066B0FB);
	}
};

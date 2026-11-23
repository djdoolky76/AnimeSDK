#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A2F7A64747EDBBB0_E631BB2F3CDDEEA7_A1D68B1DD76D3EB5_OFFSET UNITYSDK_OFFSET(0x21085D0)
#define A2F7A64747EDBBB0_E631BB2F3CDDEEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2F7A64747EDBBB0_E631BB2F3CDDEEA7_TypeDefinitionIndex = 8648;

class A2F7A64747EDBBB0_E631BB2F3CDDEEA7 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2F7A64747EDBBB0_E631BB2F3CDDEEA7__CTOR_OFFSET))(this);
	}

	::System::Void A1D68B1DD76D3EB5(::System::String* A8A64C573D7FC99A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2F7A64747EDBBB0_E631BB2F3CDDEEA7_A1D68B1DD76D3EB5_OFFSET))(this, A8A64C573D7FC99A);
	}
};

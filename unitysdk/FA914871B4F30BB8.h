#pragma once
#include "unitysdk/unitysdk.h"

class BF4C66B491CC04C6;
class F469978F9493175E;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }

#define FA914871B4F30BB8_FCD90E9760AB65E0_OFFSET UNITYSDK_OFFSET(0x20B1F70)
#define FA914871B4F30BB8__CTOR_OFFSET UNITYSDK_OFFSET(0x20B2150)

inline static constexpr unsigned int FA914871B4F30BB8_TypeDefinitionIndex = 8621;

class FA914871B4F30BB8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA914871B4F30BB8__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* FCD90E9760AB65E0(::BF4C66B491CC04C6* AF4717A1A80FD60F, ::System::Action_3<::System::Boolean, ::F469978F9493175E*, ::System::String*>* EF6ECCD05B4CC95B)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::BF4C66B491CC04C6*, ::System::Action_3<::System::Boolean, ::F469978F9493175E*, ::System::String*>*))((::PBYTE)hIl2Cpp + FA914871B4F30BB8_FCD90E9760AB65E0_OFFSET))(this, AF4717A1A80FD60F, EF6ECCD05B4CC95B);
	}
};

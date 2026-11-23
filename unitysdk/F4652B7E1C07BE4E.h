#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define F4652B7E1C07BE4E_A23E29670AC87740_OFFSET UNITYSDK_OFFSET(0x39E6070)
#define F4652B7E1C07BE4E_AAF54746EB3806EA_OFFSET UNITYSDK_OFFSET(0x39E5CF0)
#define F4652B7E1C07BE4E_AC833F7F91D01CE6_OFFSET UNITYSDK_OFFSET(0x39E5E80)
#define F4652B7E1C07BE4E_B44F3F829BE76242_OFFSET UNITYSDK_OFFSET(0x39E61D0)
#define F4652B7E1C07BE4E_BD249EE3400EE3AB_OFFSET UNITYSDK_OFFSET(0x39E5D70)
#define F4652B7E1C07BE4E_E117FA7033A85D52_OFFSET UNITYSDK_OFFSET(0x39E5F80)
#define F4652B7E1C07BE4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4652B7E1C07BE4E_TypeDefinitionIndex = 12688;

class F4652B7E1C07BE4E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E__CTOR_OFFSET))(this);
	}

	static ::System::DateTime E117FA7033A85D52(::System::Int64 A9F1FC72FFF04DFD)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_E117FA7033A85D52_OFFSET))(A9F1FC72FFF04DFD);
	}

	static ::System::Boolean B44F3F829BE76242(::System::String* F51E83A249C13FAD)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_B44F3F829BE76242_OFFSET))(F51E83A249C13FAD);
	}

	static ::System::Boolean A23E29670AC87740(::System::String* B960AC235824C6C8)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_A23E29670AC87740_OFFSET))(B960AC235824C6C8);
	}

	static ::System::Collections::IEnumerator* AAF54746EB3806EA(::System::Single F7C821B2C74DE4BB, ::System::Action* BC288918C940C7A6)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_AAF54746EB3806EA_OFFSET))(F7C821B2C74DE4BB, BC288918C940C7A6);
	}

	static ::System::Int64 AC833F7F91D01CE6()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_AC833F7F91D01CE6_OFFSET))();
	}

	static ::Il2CppArray<::System::Int32>* BD249EE3400EE3AB(::System::Int32 BDD0BFB63061789A, ::System::Int32 BD80BAA77F7F7D95, ::System::Boolean F63067C20E2CFF7B)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + F4652B7E1C07BE4E_BD249EE3400EE3AB_OFFSET))(BDD0BFB63061789A, BD80BAA77F7F7D95, F63067C20E2CFF7B);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGAILAEBLIG;
namespace System { class Object; }

#define EGAILAEBLIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E263F60)
#define EGAILAEBLIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E263FA0)
#define EGAILAEBLIG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E263FB0)

inline static constexpr unsigned int EGAILAEBLIG___c_TypeDefinitionIndex = 33426;

	class EGAILAEBLIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGAILAEBLIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG___C_CTOR_OFFSET))(this);
		}

		::EGAILAEBLIG* __cctor_b__23_0()
		{
			return ((::EGAILAEBLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBFEGMDAIDN;
namespace System { class Object; }

#define PBFEGMDAIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5250)
#define PBFEGMDAIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5290)
#define PBFEGMDAIDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEF52A0)

inline static constexpr unsigned int PBFEGMDAIDN___c_TypeDefinitionIndex = 33003;

	class PBFEGMDAIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFEGMDAIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN___C_CTOR_OFFSET))(this);
		}

		::PBFEGMDAIDN* __cctor_b__28_0()
		{
			return ((::PBFEGMDAIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

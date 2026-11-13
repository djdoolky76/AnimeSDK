#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAIFIDAHGJG;
namespace System { class Object; }

#define HAIFIDAHGJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0FBF0)
#define HAIFIDAHGJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0FC20)
#define HAIFIDAHGJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD0FC30)

inline static constexpr unsigned int HAIFIDAHGJG___c_TypeDefinitionIndex = 32487;

	class HAIFIDAHGJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAIFIDAHGJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG___C_CTOR_OFFSET))(this);
		}

		::HAIFIDAHGJG* __cctor_b__23_0()
		{
			return ((::HAIFIDAHGJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

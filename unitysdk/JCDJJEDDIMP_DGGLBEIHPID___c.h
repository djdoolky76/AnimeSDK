#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JCDJJEDDIMP_DGGLBEIHPID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19A87890)
#define JCDJJEDDIMP_DGGLBEIHPID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19A878D0)
#define JCDJJEDDIMP_DGGLBEIHPID___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x19A878E0)

inline static constexpr unsigned int JCDJJEDDIMP_DGGLBEIHPID___c_TypeDefinitionIndex = 66135;

	class JCDJJEDDIMP_DGGLBEIHPID___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID___C__ONENTER_B__0_0_OFFSET))(this);
		}

	};

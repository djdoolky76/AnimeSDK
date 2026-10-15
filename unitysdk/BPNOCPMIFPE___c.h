#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BPNOCPMIFPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1AB9A0)
#define BPNOCPMIFPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AB9E0)
#define BPNOCPMIFPE___C__SWITCHENHANCED_B__14_0_OFFSET UNITYSDK_OFFSET(0xC1AB9F0)

inline static constexpr unsigned int BPNOCPMIFPE___c_TypeDefinitionIndex = 62757;

	class BPNOCPMIFPE___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC270);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNOCPMIFPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE___C_CTOR_OFFSET))(this);
		}

		::System::Void _SwitchEnhanced_b__14_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BPNOCPMIFPE___C__SWITCHENHANCED_B__14_0_OFFSET))(this, a1);
		}

	};

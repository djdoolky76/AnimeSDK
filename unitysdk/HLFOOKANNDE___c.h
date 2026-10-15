#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFOOKANNDE;
namespace System { class Object; }

#define HLFOOKANNDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE7B0)
#define HLFOOKANNDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE7F0)
#define HLFOOKANNDE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5BE800)

inline static constexpr unsigned int HLFOOKANNDE___c_TypeDefinitionIndex = 25490;

	class HLFOOKANNDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFOOKANNDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE___C_CTOR_OFFSET))(this);
		}

		::HLFOOKANNDE* __cctor_b__33_0()
		{
			return ((::HLFOOKANNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

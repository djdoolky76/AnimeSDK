#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADHGIJPHLEB;
namespace System { class Object; }

#define ADHGIJPHLEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB48F0)
#define ADHGIJPHLEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB4930)
#define ADHGIJPHLEB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDB4940)

inline static constexpr unsigned int ADHGIJPHLEB___c_TypeDefinitionIndex = 25634;

	class ADHGIJPHLEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADHGIJPHLEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB___C_CTOR_OFFSET))(this);
		}

		::ADHGIJPHLEB* __cctor_b__38_0()
		{
			return ((::ADHGIJPHLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

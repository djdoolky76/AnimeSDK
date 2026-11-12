#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPFLBBKOPNN;
namespace System { class Object; }

#define BPFLBBKOPNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F306580)
#define BPFLBBKOPNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3065C0)
#define BPFLBBKOPNN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3065D0)

inline static constexpr unsigned int BPFLBBKOPNN___c_TypeDefinitionIndex = 28987;

	class BPFLBBKOPNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFLBBKOPNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN___C_CTOR_OFFSET))(this);
		}

		::BPFLBBKOPNN* __cctor_b__33_0()
		{
			return ((::BPFLBBKOPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

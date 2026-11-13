#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMFHIHNEHH;
namespace System { class Object; }

#define BPMFHIHNEHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20340830)
#define BPMFHIHNEHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20340870)
#define BPMFHIHNEHH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20340880)

inline static constexpr unsigned int BPMFHIHNEHH___c_TypeDefinitionIndex = 26551;

	class BPMFHIHNEHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPMFHIHNEHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH___C_CTOR_OFFSET))(this);
		}

		::BPMFHIHNEHH* __cctor_b__33_0()
		{
			return ((::BPMFHIHNEHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

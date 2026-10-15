#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
namespace System { class Object; }

#define BPJCKMPBAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E049860)
#define BPJCKMPBAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E049890)
#define BPJCKMPBAFC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0498A0)

inline static constexpr unsigned int BPJCKMPBAFC___c_TypeDefinitionIndex = 32327;

	class BPJCKMPBAFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJCKMPBAFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC___C_CTOR_OFFSET))(this);
		}

		::BPJCKMPBAFC* __cctor_b__33_0()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

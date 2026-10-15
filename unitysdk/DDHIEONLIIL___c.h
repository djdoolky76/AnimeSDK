#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHIEONLIIL;
namespace System { class Object; }

#define DDHIEONLIIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14FED0)
#define DDHIEONLIIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14FF10)
#define DDHIEONLIIL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E14FF20)

inline static constexpr unsigned int DDHIEONLIIL___c_TypeDefinitionIndex = 31003;

	class DDHIEONLIIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHIEONLIIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL___C_CTOR_OFFSET))(this);
		}

		::DDHIEONLIIL* __cctor_b__33_0()
		{
			return ((::DDHIEONLIIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

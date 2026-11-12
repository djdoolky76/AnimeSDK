#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCDDPJIEDGP;
namespace System { class Object; }

#define FCDDPJIEDGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6296D0)
#define FCDDPJIEDGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F629700)
#define FCDDPJIEDGP___C___CCTOR_B__198_0_OFFSET UNITYSDK_OFFSET(0x1F629710)

inline static constexpr unsigned int FCDDPJIEDGP___c_TypeDefinitionIndex = 25947;

	class FCDDPJIEDGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCDDPJIEDGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDDPJIEDGP___C_CTOR_OFFSET))(this);
		}

		::FCDDPJIEDGP* __cctor_b__198_0()
		{
			return ((::FCDDPJIEDGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDDPJIEDGP___C___CCTOR_B__198_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIECIEKKIMJ;
namespace System { class Object; }

#define MIECIEKKIMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD8C5D0)
#define MIECIEKKIMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8C610)
#define MIECIEKKIMJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD8C620)

inline static constexpr unsigned int MIECIEKKIMJ___c_TypeDefinitionIndex = 27218;

	class MIECIEKKIMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIECIEKKIMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ___C_CTOR_OFFSET))(this);
		}

		::MIECIEKKIMJ* __cctor_b__28_0()
		{
			return ((::MIECIEKKIMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

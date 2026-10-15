#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNBOHDBLMBE;
namespace System { class Object; }

#define HNBOHDBLMBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC860)
#define HNBOHDBLMBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC8A0)
#define HNBOHDBLMBE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5AC8B0)

inline static constexpr unsigned int HNBOHDBLMBE___c_TypeDefinitionIndex = 28690;

	class HNBOHDBLMBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ABD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNBOHDBLMBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE___C_CTOR_OFFSET))(this);
		}

		::HNBOHDBLMBE* __cctor_b__33_0()
		{
			return ((::HNBOHDBLMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

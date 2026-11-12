#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEMINJAFCPM;
namespace System { class Object; }

#define IEMINJAFCPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95D960)
#define IEMINJAFCPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F95D9A0)
#define IEMINJAFCPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F95D9B0)

inline static constexpr unsigned int IEMINJAFCPM___c_TypeDefinitionIndex = 30028;

	class IEMINJAFCPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEMINJAFCPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM___C_CTOR_OFFSET))(this);
		}

		::IEMINJAFCPM* __cctor_b__23_0()
		{
			return ((::IEMINJAFCPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

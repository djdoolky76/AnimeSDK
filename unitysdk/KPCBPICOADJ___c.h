#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCBPICOADJ;
namespace System { class Object; }

#define KPCBPICOADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B7B10)
#define KPCBPICOADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B7B40)
#define KPCBPICOADJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8B7B50)

inline static constexpr unsigned int KPCBPICOADJ___c_TypeDefinitionIndex = 30910;

	class KPCBPICOADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCBPICOADJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ___C_CTOR_OFFSET))(this);
		}

		::KPCBPICOADJ* __cctor_b__28_0()
		{
			return ((::KPCBPICOADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

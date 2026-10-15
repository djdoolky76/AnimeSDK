#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCBPICOADJ;
namespace System { class Object; }

#define KPCBPICOADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88A580)
#define KPCBPICOADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88A5B0)
#define KPCBPICOADJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E88A5C0)

inline static constexpr unsigned int KPCBPICOADJ___c_TypeDefinitionIndex = 30910;

	class KPCBPICOADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21F50);
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

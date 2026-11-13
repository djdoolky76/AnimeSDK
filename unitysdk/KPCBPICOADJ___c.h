#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCBPICOADJ;
namespace System { class Object; }

#define KPCBPICOADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205B6BB0)
#define KPCBPICOADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205B6BE0)
#define KPCBPICOADJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205B6BF0)

inline static constexpr unsigned int KPCBPICOADJ___c_TypeDefinitionIndex = 31823;

	class KPCBPICOADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21930);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCPCAIGEBCB;
namespace System { class Object; }

#define CCPCAIGEBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0517E0)
#define CCPCAIGEBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E051820)
#define CCPCAIGEBCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E051830)

inline static constexpr unsigned int CCPCAIGEBCB___c_TypeDefinitionIndex = 31713;

	class CCPCAIGEBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C_CTOR_OFFSET))(this);
		}

		::CCPCAIGEBCB* __cctor_b__23_0()
		{
			return ((::CCPCAIGEBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

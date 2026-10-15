#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBBDMBNNDJ;
namespace System { class Object; }

#define GNBBDMBNNDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AAE80)
#define GNBBDMBNNDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AAEC0)
#define GNBBDMBNNDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4AAED0)

inline static constexpr unsigned int GNBBDMBNNDJ___c_TypeDefinitionIndex = 25170;

	class GNBBDMBNNDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBBDMBNNDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ___C_CTOR_OFFSET))(this);
		}

		::GNBBDMBNNDJ* __cctor_b__23_0()
		{
			return ((::GNBBDMBNNDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

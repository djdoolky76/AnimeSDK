#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNNAEMBFINJ;
namespace System { class Object; }

#define GNNAEMBFINJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F81B0)
#define GNNAEMBFINJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F81E0)
#define GNNAEMBFINJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7F81F0)

inline static constexpr unsigned int GNNAEMBFINJ___c_TypeDefinitionIndex = 35523;

	class GNNAEMBFINJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNAEMBFINJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ___C_CTOR_OFFSET))(this);
		}

		::GNNAEMBFINJ* __cctor_b__38_0()
		{
			return ((::GNNAEMBFINJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

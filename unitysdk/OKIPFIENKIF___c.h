#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKIPFIENKIF;
namespace System { class Object; }

#define OKIPFIENKIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F143DA0)
#define OKIPFIENKIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F143DE0)
#define OKIPFIENKIF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F143DF0)

inline static constexpr unsigned int OKIPFIENKIF___c_TypeDefinitionIndex = 29345;

	class OKIPFIENKIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKIPFIENKIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIPFIENKIF___C_CTOR_OFFSET))(this);
		}

		::OKIPFIENKIF* __cctor_b__38_0()
		{
			return ((::OKIPFIENKIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIPFIENKIF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

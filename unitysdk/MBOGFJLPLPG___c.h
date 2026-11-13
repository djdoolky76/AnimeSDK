#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBOGFJLPLPG;
namespace System { class Object; }

#define MBOGFJLPLPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD36B80)
#define MBOGFJLPLPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD36BC0)
#define MBOGFJLPLPG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FD36BD0)

inline static constexpr unsigned int MBOGFJLPLPG___c_TypeDefinitionIndex = 34746;

	class MBOGFJLPLPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBOGFJLPLPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOGFJLPLPG___C_CTOR_OFFSET))(this);
		}

		::MBOGFJLPLPG* __cctor_b__18_0()
		{
			return ((::MBOGFJLPLPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOGFJLPLPG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

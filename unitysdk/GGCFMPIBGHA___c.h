#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGCFMPIBGHA;
namespace System { class Object; }

#define GGCFMPIBGHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44BE50)
#define GGCFMPIBGHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44BE90)
#define GGCFMPIBGHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E44BEA0)

inline static constexpr unsigned int GGCFMPIBGHA___c_TypeDefinitionIndex = 33412;

	class GGCFMPIBGHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCFMPIBGHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA___C_CTOR_OFFSET))(this);
		}

		::GGCFMPIBGHA* __cctor_b__23_0()
		{
			return ((::GGCFMPIBGHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

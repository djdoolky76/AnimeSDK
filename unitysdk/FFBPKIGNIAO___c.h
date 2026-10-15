#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFBPKIGNIAO;
namespace System { class Object; }

#define FFBPKIGNIAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33CEE0)
#define FFBPKIGNIAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33CF10)
#define FFBPKIGNIAO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E33CF20)

inline static constexpr unsigned int FFBPKIGNIAO___c_TypeDefinitionIndex = 35041;

	class FFBPKIGNIAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C_CTOR_OFFSET))(this);
		}

		::FFBPKIGNIAO* __cctor_b__18_0()
		{
			return ((::FFBPKIGNIAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

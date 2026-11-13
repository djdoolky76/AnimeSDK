#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCEOIMHKJI;
namespace System { class Object; }

#define GHCEOIMHKJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202736B0)
#define GHCEOIMHKJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202736F0)
#define GHCEOIMHKJI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20273700)

inline static constexpr unsigned int GHCEOIMHKJI___c_TypeDefinitionIndex = 26003;

	class GHCEOIMHKJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCEOIMHKJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI___C_CTOR_OFFSET))(this);
		}

		::GHCEOIMHKJI* __cctor_b__23_0()
		{
			return ((::GHCEOIMHKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

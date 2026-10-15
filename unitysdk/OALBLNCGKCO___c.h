#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OALBLNCGKCO;
namespace System { class Object; }

#define OALBLNCGKCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA9CF0)
#define OALBLNCGKCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA9D30)
#define OALBLNCGKCO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBA9D40)

inline static constexpr unsigned int OALBLNCGKCO___c_TypeDefinitionIndex = 26776;

	class OALBLNCGKCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OALBLNCGKCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO___C_CTOR_OFFSET))(this);
		}

		::OALBLNCGKCO* __cctor_b__28_0()
		{
			return ((::OALBLNCGKCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

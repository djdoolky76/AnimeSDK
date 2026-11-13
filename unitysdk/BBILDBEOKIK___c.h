#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBILDBEOKIK;
namespace System { class Object; }

#define BBILDBEOKIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA727E0)
#define BBILDBEOKIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA72810)
#define BBILDBEOKIK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA72820)

inline static constexpr unsigned int BBILDBEOKIK___c_TypeDefinitionIndex = 34196;

	class BBILDBEOKIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBILDBEOKIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBILDBEOKIK___C_CTOR_OFFSET))(this);
		}

		::BBILDBEOKIK* __cctor_b__18_0()
		{
			return ((::BBILDBEOKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBILDBEOKIK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

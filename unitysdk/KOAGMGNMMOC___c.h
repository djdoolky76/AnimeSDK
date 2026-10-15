#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOAGMGNMMOC;
namespace System { class Object; }

#define KOAGMGNMMOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8ABAC0)
#define KOAGMGNMMOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8ABB00)
#define KOAGMGNMMOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8ABB10)

inline static constexpr unsigned int KOAGMGNMMOC___c_TypeDefinitionIndex = 32469;

	class KOAGMGNMMOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOAGMGNMMOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC___C_CTOR_OFFSET))(this);
		}

		::KOAGMGNMMOC* __cctor_b__28_0()
		{
			return ((::KOAGMGNMMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

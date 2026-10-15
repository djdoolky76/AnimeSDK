#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJLNKAFNAD;
namespace System { class Object; }

#define HBJLNKAFNAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E500470)
#define HBJLNKAFNAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5004A0)
#define HBJLNKAFNAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5004B0)

inline static constexpr unsigned int HBJLNKAFNAD___c_TypeDefinitionIndex = 25320;

	class HBJLNKAFNAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJLNKAFNAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD___C_CTOR_OFFSET))(this);
		}

		::HBJLNKAFNAD* __cctor_b__23_0()
		{
			return ((::HBJLNKAFNAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

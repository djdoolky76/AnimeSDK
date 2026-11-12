#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAODPHAPKOA;
namespace System { class Object; }

#define NAODPHAPKOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE05AC0)
#define NAODPHAPKOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE05B00)
#define NAODPHAPKOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE05B10)

inline static constexpr unsigned int NAODPHAPKOA___c_TypeDefinitionIndex = 30565;

	class NAODPHAPKOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAODPHAPKOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA___C_CTOR_OFFSET))(this);
		}

		::NAODPHAPKOA* __cctor_b__28_0()
		{
			return ((::NAODPHAPKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

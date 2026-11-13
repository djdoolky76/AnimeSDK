#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAODPHAPKOA;
namespace System { class Object; }

#define NAODPHAPKOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201522B0)
#define NAODPHAPKOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201522F0)
#define NAODPHAPKOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20152300)

inline static constexpr unsigned int NAODPHAPKOA___c_TypeDefinitionIndex = 30565;

	class NAODPHAPKOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x579D0);
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

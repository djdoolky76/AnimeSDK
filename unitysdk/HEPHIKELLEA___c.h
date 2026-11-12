#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEPHIKELLEA;
namespace System { class Object; }

#define HEPHIKELLEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F858E10)
#define HEPHIKELLEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F858E50)
#define HEPHIKELLEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F858E60)

inline static constexpr unsigned int HEPHIKELLEA___c_TypeDefinitionIndex = 27087;

	class HEPHIKELLEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEPHIKELLEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA___C_CTOR_OFFSET))(this);
		}

		::HEPHIKELLEA* __cctor_b__23_0()
		{
			return ((::HEPHIKELLEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

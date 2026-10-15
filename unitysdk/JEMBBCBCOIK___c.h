#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMBBCBCOIK;
namespace System { class Object; }

#define JEMBBCBCOIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F2620)
#define JEMBBCBCOIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F2650)
#define JEMBBCBCOIK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6F2660)

inline static constexpr unsigned int JEMBBCBCOIK___c_TypeDefinitionIndex = 27934;

	class JEMBBCBCOIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMBBCBCOIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK___C_CTOR_OFFSET))(this);
		}

		::JEMBBCBCOIK* __cctor_b__18_0()
		{
			return ((::JEMBBCBCOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

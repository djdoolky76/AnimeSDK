#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMBBCBCOIK;
namespace System { class Object; }

#define JEMBBCBCOIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2E540)
#define JEMBBCBCOIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2E570)
#define JEMBBCBCOIK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA2E580)

inline static constexpr unsigned int JEMBBCBCOIK___c_TypeDefinitionIndex = 28524;

	class JEMBBCBCOIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62350);
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

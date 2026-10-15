#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGIENOHBMJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GHHJNCOAIJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A20A70)
#define GHHJNCOAIJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A20AA0)
#define GHHJNCOAIJF___C__SEND_B__6_0_OFFSET UNITYSDK_OFFSET(0x15A20AB0)

inline static constexpr unsigned int GHHJNCOAIJF___c_TypeDefinitionIndex = 69355;

	class GHHJNCOAIJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C120);
		}

		static ::System::Action_1<::IHGIENOHBMJ*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::IHGIENOHBMJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C_CTOR_OFFSET))(this);
		}

		::System::Void _Send_b__6_0(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C__SEND_B__6_0_OFFSET))(this, a1);
		}

	};

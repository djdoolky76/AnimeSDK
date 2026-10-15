#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MNJNNCEEIMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA0A720)
#define MNJNNCEEIMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0A760)
#define MNJNNCEEIMP___C__DISPOSE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA0A770)

inline static constexpr unsigned int MNJNNCEEIMP___c_TypeDefinitionIndex = 53447;

	class MNJNNCEEIMP___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13700);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJNNCEEIMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNNCEEIMP___C_CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNNCEEIMP___C__DISPOSE_B__1_0_OFFSET))(this);
		}

	};

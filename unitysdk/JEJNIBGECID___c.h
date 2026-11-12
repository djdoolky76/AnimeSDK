#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEJNIBGECID;
namespace System { class Object; }

#define JEJNIBGECID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2D6F0)
#define JEJNIBGECID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2D730)
#define JEJNIBGECID___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA2D740)

inline static constexpr unsigned int JEJNIBGECID___c_TypeDefinitionIndex = 31965;

	class JEJNIBGECID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJNIBGECID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID___C_CTOR_OFFSET))(this);
		}

		::JEJNIBGECID* __cctor_b__18_0()
		{
			return ((::JEJNIBGECID*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

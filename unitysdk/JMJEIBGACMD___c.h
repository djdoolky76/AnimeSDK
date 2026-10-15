#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMJEIBGACMD;
namespace System { class Object; }

#define JMJEIBGACMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78E1C0)
#define JMJEIBGACMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78E1F0)
#define JMJEIBGACMD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E78E200)

	class JMJEIBGACMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMJEIBGACMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJEIBGACMD___C_CTOR_OFFSET))(this);
		}

		::JMJEIBGACMD* __cctor_b__33_0()
		{
			return ((::JMJEIBGACMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJEIBGACMD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

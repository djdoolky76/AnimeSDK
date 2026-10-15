#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJECDMCCEBM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1C90C0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1C9100)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__ADDPRESENT_B__32_1_OFFSET UNITYSDK_OFFSET(0xD1C9110)

namespace RPG::Client
{
	class GridFightOrbManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DJECDMCCEBM*, ::System::Boolean>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::DJECDMCCEBM*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DD60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DD68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddPresent_b__32_1(::DJECDMCCEBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJECDMCCEBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__ADDPRESENT_B__32_1_OFFSET))(this, a1);
		}

	};
}

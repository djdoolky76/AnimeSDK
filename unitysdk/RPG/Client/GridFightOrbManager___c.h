#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJECDMCCEBM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1C0E60)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1C0EA0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__ADDPRESENT_B__32_1_OFFSET UNITYSDK_OFFSET(0xD1C0EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c_TypeDefinitionIndex = 64462;

	class GridFightOrbManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B440);
		}

		static ::System::Func_2<::DJECDMCCEBM*, ::System::Boolean>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::DJECDMCCEBM*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B448);
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

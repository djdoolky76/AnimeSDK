#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GFNAHGHNICL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159FE830)
#define GFNAHGHNICL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159FE870)
#define GFNAHGHNICL___C__ISEMPTY_B__14_0_OFFSET UNITYSDK_OFFSET(0x159FE880)

inline static constexpr unsigned int GFNAHGHNICL___c_TypeDefinitionIndex = 81479;

	class GFNAHGHNICL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCKGNOHECDC*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFNAHGHNICL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAHGHNICL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEmpty_b__14_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + GFNAHGHNICL___C__ISEMPTY_B__14_0_OFFSET))(this, a1);
		}

	};

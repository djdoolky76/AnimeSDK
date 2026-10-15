#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GCIKFCGCOJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1597CE60)
#define GCIKFCGCOJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1597CEA0)
#define GCIKFCGCOJB___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1597CEB0)

inline static constexpr unsigned int GCIKFCGCOJB___c_TypeDefinitionIndex = 52610;

	class GCIKFCGCOJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53EF0);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCIKFCGCOJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIKFCGCOJB___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCIKFCGCOJB___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
		}

	};

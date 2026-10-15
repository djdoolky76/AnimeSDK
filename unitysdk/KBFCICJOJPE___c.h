#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBFCICJOJPE;
namespace System { class Object; }

#define KBFCICJOJPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C14E0)
#define KBFCICJOJPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1520)
#define KBFCICJOJPE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7C1530)

inline static constexpr unsigned int KBFCICJOJPE___c_TypeDefinitionIndex = 28446;

	class KBFCICJOJPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBFCICJOJPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE___C_CTOR_OFFSET))(this);
		}

		::KBFCICJOJPE* __cctor_b__28_0()
		{
			return ((::KBFCICJOJPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

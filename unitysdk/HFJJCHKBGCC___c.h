#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AILLDGBCBGE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HFJJCHKBGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C7A770)
#define HFJJCHKBGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7A7A0)
#define HFJJCHKBGCC___C__REGISTERCOMPONENTADAPTERS_B__178_0_OFFSET UNITYSDK_OFFSET(0x15C7A7B0)

inline static constexpr unsigned int HFJJCHKBGCC___c_TypeDefinitionIndex = 49280;

	class HFJJCHKBGCC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::AILLDGBCBGE*>** StaticGet___9__178_0()
		{
			return (::System::Func_2<::System::Object*, ::AILLDGBCBGE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x131D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x131D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C_CTOR_OFFSET))(this);
		}

		::AILLDGBCBGE* _RegisterComponentAdapters_b__178_0(::System::Object* a1)
		{
			return ((::AILLDGBCBGE*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__REGISTERCOMPONENTADAPTERS_B__178_0_OFFSET))(this, a1);
		}

	};

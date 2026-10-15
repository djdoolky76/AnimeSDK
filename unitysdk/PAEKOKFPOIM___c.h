#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHCNPDALBB;
class PHCMIJEDENP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PAEKOKFPOIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFBF8B0)
#define PAEKOKFPOIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBF8F0)
#define PAEKOKFPOIM___C__ENTERCRAFT_B__7_0_OFFSET UNITYSDK_OFFSET(0xBFBF900)
#define PAEKOKFPOIM___C__ENTERCRAFT_B__7_1_OFFSET UNITYSDK_OFFSET(0xBFBF920)

inline static constexpr unsigned int PAEKOKFPOIM___c_TypeDefinitionIndex = 79692;

	class PAEKOKFPOIM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x681F0);
		}

		static ::System::Func_2<::PHCMIJEDENP*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::PHCMIJEDENP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x681F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _EnterCraft_b__7_0(::PHCMIJEDENP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C__ENTERCRAFT_B__7_0_OFFSET))(this, a1);
		}

		::KNHCNPDALBB* _EnterCraft_b__7_1(::PHCMIJEDENP* a1)
		{
			return ((::KNHCNPDALBB*(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C__ENTERCRAFT_B__7_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIIHMEHAHDN;
namespace System { class Object; }

#define LIIHMEHAHDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC8FB60)
#define LIIHMEHAHDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8FBA0)
#define LIIHMEHAHDN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC8FBB0)

inline static constexpr unsigned int LIIHMEHAHDN___c_TypeDefinitionIndex = 28785;

	class LIIHMEHAHDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIHMEHAHDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN___C_CTOR_OFFSET))(this);
		}

		::LIIHMEHAHDN* __cctor_b__38_0()
		{
			return ((::LIIHMEHAHDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

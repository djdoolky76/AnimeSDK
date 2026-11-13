#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JLHPJLGBCLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B54350)
#define JLHPJLGBCLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17B54390)
#define JLHPJLGBCLD___C___ONCE_B__27_0_OFFSET UNITYSDK_OFFSET(0x17B543A0)

inline static constexpr unsigned int JLHPJLGBCLD___c_TypeDefinitionIndex = 77028;

	class JLHPJLGBCLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18B70);
		}

		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C_CTOR_OFFSET))(this);
		}

		::System::Void __Once_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C___ONCE_B__27_0_OFFSET))(this);
		}

	};

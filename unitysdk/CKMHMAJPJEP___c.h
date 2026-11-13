#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKMHMAJPJEP;
namespace System { class Object; }

#define CKMHMAJPJEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20599D60)
#define CKMHMAJPJEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20599DA0)
#define CKMHMAJPJEP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20599DB0)

inline static constexpr unsigned int CKMHMAJPJEP___c_TypeDefinitionIndex = 26515;

	class CKMHMAJPJEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKMHMAJPJEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP___C_CTOR_OFFSET))(this);
		}

		::CKMHMAJPJEP* __cctor_b__18_0()
		{
			return ((::CKMHMAJPJEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

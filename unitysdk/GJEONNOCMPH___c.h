#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEONNOCMPH;
namespace System { class Object; }

#define GJEONNOCMPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47A1B0)
#define GJEONNOCMPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47A1E0)
#define GJEONNOCMPH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E47A1F0)

inline static constexpr unsigned int GJEONNOCMPH___c_TypeDefinitionIndex = 33999;

	class GJEONNOCMPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH___C_CTOR_OFFSET))(this);
		}

		::GJEONNOCMPH* __cctor_b__18_0()
		{
			return ((::GJEONNOCMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

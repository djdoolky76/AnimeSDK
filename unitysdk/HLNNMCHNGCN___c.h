#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNNMCHNGCN;
namespace System { class Object; }

#define HLNNMCHNGCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E597FB0)
#define HLNNMCHNGCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E597FF0)
#define HLNNMCHNGCN___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E598000)

inline static constexpr unsigned int HLNNMCHNGCN___c_TypeDefinitionIndex = 34585;

	class HLNNMCHNGCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x382C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNNMCHNGCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNMCHNGCN___C_CTOR_OFFSET))(this);
		}

		::HLNNMCHNGCN* __cctor_b__58_0()
		{
			return ((::HLNNMCHNGCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNMCHNGCN___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};

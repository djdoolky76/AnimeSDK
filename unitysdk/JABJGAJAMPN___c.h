#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABJGAJAMPN;
namespace System { class Object; }

#define JABJGAJAMPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEEC3E0)
#define JABJGAJAMPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEC420)
#define JABJGAJAMPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FEEC430)

inline static constexpr unsigned int JABJGAJAMPN___c_TypeDefinitionIndex = 30024;

	class JABJGAJAMPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABJGAJAMPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN___C_CTOR_OFFSET))(this);
		}

		::JABJGAJAMPN* __cctor_b__33_0()
		{
			return ((::JABJGAJAMPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

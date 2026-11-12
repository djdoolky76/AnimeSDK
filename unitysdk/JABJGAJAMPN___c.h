#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABJGAJAMPN;
namespace System { class Object; }

#define JABJGAJAMPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F5AA0)
#define JABJGAJAMPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F5AE0)
#define JABJGAJAMPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F9F5AF0)

inline static constexpr unsigned int JABJGAJAMPN___c_TypeDefinitionIndex = 30024;

	class JABJGAJAMPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A710);
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

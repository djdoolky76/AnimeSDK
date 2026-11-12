#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHAKJMKLJFC;
namespace System { class Object; }

#define IHAKJMKLJFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F978010)
#define IHAKJMKLJFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F978050)
#define IHAKJMKLJFC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F978060)

inline static constexpr unsigned int IHAKJMKLJFC___c_TypeDefinitionIndex = 35250;

	class IHAKJMKLJFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHAKJMKLJFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC___C_CTOR_OFFSET))(this);
		}

		::IHAKJMKLJFC* __cctor_b__38_0()
		{
			return ((::IHAKJMKLJFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

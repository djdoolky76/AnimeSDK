#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDABILELOFN;
namespace System { class Object; }

#define LDABILELOFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F0930)
#define LDABILELOFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F0960)
#define LDABILELOFN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8F0970)

inline static constexpr unsigned int LDABILELOFN___c_TypeDefinitionIndex = 27871;

	class LDABILELOFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x332F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDABILELOFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABILELOFN___C_CTOR_OFFSET))(this);
		}

		::LDABILELOFN* __cctor_b__33_0()
		{
			return ((::LDABILELOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABILELOFN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

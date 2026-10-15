#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDJBPIOCMC;
namespace System { class Object; }

#define HDDJBPIOCMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5491F0)
#define HDDJBPIOCMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E549220)
#define HDDJBPIOCMC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E549230)

inline static constexpr unsigned int HDDJBPIOCMC___c_TypeDefinitionIndex = 33287;

	class HDDJBPIOCMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C_CTOR_OFFSET))(this);
		}

		::HDDJBPIOCMC* __cctor_b__43_0()
		{
			return ((::HDDJBPIOCMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

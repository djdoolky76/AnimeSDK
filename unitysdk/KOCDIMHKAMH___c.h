#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCDIMHKAMH;
namespace System { class Object; }

#define KOCDIMHKAMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205AC960)
#define KOCDIMHKAMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205AC9A0)
#define KOCDIMHKAMH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205AC9B0)

inline static constexpr unsigned int KOCDIMHKAMH___c_TypeDefinitionIndex = 25999;

	class KOCDIMHKAMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCDIMHKAMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH___C_CTOR_OFFSET))(this);
		}

		::KOCDIMHKAMH* __cctor_b__33_0()
		{
			return ((::KOCDIMHKAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKIMHBEOGP;
namespace System { class Object; }

#define AEKIMHBEOGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0B10)
#define AEKIMHBEOGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0B50)
#define AEKIMHBEOGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDC0B60)

inline static constexpr unsigned int AEKIMHBEOGP___c_TypeDefinitionIndex = 26735;

	class AEKIMHBEOGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEKIMHBEOGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP___C_CTOR_OFFSET))(this);
		}

		::AEKIMHBEOGP* __cctor_b__33_0()
		{
			return ((::AEKIMHBEOGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

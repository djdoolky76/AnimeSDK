#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDJDKPMKDJD;
namespace System { class Object; }

#define NDJDKPMKDJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE29560)
#define NDJDKPMKDJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE295A0)
#define NDJDKPMKDJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE295B0)

inline static constexpr unsigned int NDJDKPMKDJD___c_TypeDefinitionIndex = 27094;

	class NDJDKPMKDJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C_CTOR_OFFSET))(this);
		}

		::NDJDKPMKDJD* __cctor_b__33_0()
		{
			return ((::NDJDKPMKDJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

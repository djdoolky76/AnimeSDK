#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLMGJFEEJHD;
namespace System { class Object; }

#define GLMGJFEEJHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7B9870)
#define GLMGJFEEJHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B98B0)
#define GLMGJFEEJHD___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1F7B98C0)

inline static constexpr unsigned int GLMGJFEEJHD___c_TypeDefinitionIndex = 32025;

	class GLMGJFEEJHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMGJFEEJHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGJFEEJHD___C_CTOR_OFFSET))(this);
		}

		::GLMGJFEEJHD* __cctor_b__51_0()
		{
			return ((::GLMGJFEEJHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGJFEEJHD___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};

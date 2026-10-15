#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLMGJFEEJHD;
namespace System { class Object; }

#define GLMGJFEEJHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C6F00)
#define GLMGJFEEJHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C6F40)
#define GLMGJFEEJHD___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E4C6F50)

inline static constexpr unsigned int GLMGJFEEJHD___c_TypeDefinitionIndex = 31112;

	class GLMGJFEEJHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF70);
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

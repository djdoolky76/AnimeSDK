#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGCJFPABLJL;
namespace System { class Object; }

#define LGCJFPABLJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB7B80)
#define LGCJFPABLJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB7BC0)
#define LGCJFPABLJL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FAB7BD0)

inline static constexpr unsigned int LGCJFPABLJL___c_TypeDefinitionIndex = 31139;

	class LGCJFPABLJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCJFPABLJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL___C_CTOR_OFFSET))(this);
		}

		::LGCJFPABLJL* __cctor_b__33_0()
		{
			return ((::LGCJFPABLJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

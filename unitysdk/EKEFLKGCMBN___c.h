#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKEFLKGCMBN;
namespace System { class Object; }

#define EKEFLKGCMBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BF7F0)
#define EKEFLKGCMBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BF830)
#define EKEFLKGCMBN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2BF840)

inline static constexpr unsigned int EKEFLKGCMBN___c_TypeDefinitionIndex = 30179;

	class EKEFLKGCMBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKEFLKGCMBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN___C_CTOR_OFFSET))(this);
		}

		::EKEFLKGCMBN* __cctor_b__33_0()
		{
			return ((::EKEFLKGCMBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

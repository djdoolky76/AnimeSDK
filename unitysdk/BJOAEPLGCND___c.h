#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJOAEPLGCND;
namespace System { class Object; }

#define BJOAEPLGCND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EB00)
#define BJOAEPLGCND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EB30)
#define BJOAEPLGCND___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF1EB40)

inline static constexpr unsigned int BJOAEPLGCND___c_TypeDefinitionIndex = 29772;

	class BJOAEPLGCND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJOAEPLGCND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND___C_CTOR_OFFSET))(this);
		}

		::BJOAEPLGCND* __cctor_b__18_0()
		{
			return ((::BJOAEPLGCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

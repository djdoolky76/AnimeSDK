#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDOMEIGDIAK;
namespace System { class Object; }

#define LDOMEIGDIAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D3F70)
#define LDOMEIGDIAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D3FB0)
#define LDOMEIGDIAK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8D3FC0)

inline static constexpr unsigned int LDOMEIGDIAK___c_TypeDefinitionIndex = 31874;

	class LDOMEIGDIAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDOMEIGDIAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK___C_CTOR_OFFSET))(this);
		}

		::LDOMEIGDIAK* __cctor_b__23_0()
		{
			return ((::LDOMEIGDIAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

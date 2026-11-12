#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCKEBEHCMJ;
namespace System { class Object; }

#define HGCKEBEHCMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F86FB70)
#define HGCKEBEHCMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F86FBB0)
#define HGCKEBEHCMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F86FBC0)

inline static constexpr unsigned int HGCKEBEHCMJ___c_TypeDefinitionIndex = 26924;

	class HGCKEBEHCMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCKEBEHCMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ___C_CTOR_OFFSET))(this);
		}

		::HGCKEBEHCMJ* __cctor_b__23_0()
		{
			return ((::HGCKEBEHCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

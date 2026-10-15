#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBJLGFHLHM;
namespace System { class Object; }

#define BHBJLGFHLHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3E10)
#define BHBJLGFHLHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3E50)
#define BHBJLGFHLHM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDF3E60)

	class BHBJLGFHLHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x458E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBJLGFHLHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM___C_CTOR_OFFSET))(this);
		}

		::BHBJLGFHLHM* __cctor_b__38_0()
		{
			return ((::BHBJLGFHLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

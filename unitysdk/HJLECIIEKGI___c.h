#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJLECIIEKGI;
namespace System { class Object; }

#define HJLECIIEKGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB3B0)
#define HJLECIIEKGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB3F0)
#define HJLECIIEKGI___C___CCTOR_B__41_0_OFFSET UNITYSDK_OFFSET(0x1E5AB400)

inline static constexpr unsigned int HJLECIIEKGI___c_TypeDefinitionIndex = 34785;

	class HJLECIIEKGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJLECIIEKGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLECIIEKGI___C_CTOR_OFFSET))(this);
		}

		::HJLECIIEKGI* __cctor_b__41_0()
		{
			return ((::HJLECIIEKGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLECIIEKGI___C___CCTOR_B__41_0_OFFSET))(this);
		}

	};

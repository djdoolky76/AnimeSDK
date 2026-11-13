#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJACHMJFEAH;
namespace System { class Object; }

#define HJACHMJFEAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2052BED0)
#define HJACHMJFEAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2052BF00)
#define HJACHMJFEAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2052BF10)

inline static constexpr unsigned int HJACHMJFEAH___c_TypeDefinitionIndex = 26370;

	class HJACHMJFEAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJACHMJFEAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH___C_CTOR_OFFSET))(this);
		}

		::HJACHMJFEAH* __cctor_b__28_0()
		{
			return ((::HJACHMJFEAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

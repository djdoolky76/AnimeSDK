#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLGFDCAPOOH;
namespace System { class Object; }

#define BLGFDCAPOOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF61200)
#define BLGFDCAPOOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF61240)
#define BLGFDCAPOOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF61250)

inline static constexpr unsigned int BLGFDCAPOOH___c_TypeDefinitionIndex = 27865;

	class BLGFDCAPOOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLGFDCAPOOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH___C_CTOR_OFFSET))(this);
		}

		::BLGFDCAPOOH* __cctor_b__33_0()
		{
			return ((::BLGFDCAPOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

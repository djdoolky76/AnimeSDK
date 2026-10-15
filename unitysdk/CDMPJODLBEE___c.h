#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDMPJODLBEE;
namespace System { class Object; }

#define CDMPJODLBEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08A910)
#define CDMPJODLBEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08A940)
#define CDMPJODLBEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E08A950)

inline static constexpr unsigned int CDMPJODLBEE___c_TypeDefinitionIndex = 25658;

	class CDMPJODLBEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMPJODLBEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE___C_CTOR_OFFSET))(this);
		}

		::CDMPJODLBEE* __cctor_b__33_0()
		{
			return ((::CDMPJODLBEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

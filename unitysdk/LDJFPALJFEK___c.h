#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJFPALJFEK;
namespace System { class Object; }

#define LDJFPALJFEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FAB30)
#define LDJFPALJFEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FAB70)
#define LDJFPALJFEK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8FAB80)

	class LDJFPALJFEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJFPALJFEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK___C_CTOR_OFFSET))(this);
		}

		::LDJFPALJFEK* __cctor_b__33_0()
		{
			return ((::LDJFPALJFEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }

#define HCIOPLELMID_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x15C12F70)
#define HCIOPLELMID_IHIHFINNDAJ_OFFSET UNITYSDK_OFFSET(0x15C12F90)
#define HCIOPLELMID_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x15C12F80)

inline static constexpr unsigned int HCIOPLELMID_TypeDefinitionIndex = 56559;

	class HCIOPLELMID : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsEnabled_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCIOPLELMID")->GetStaticField(0x1BC0);
		}

		static ::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIOPLELMID_GET_ISENABLED_OFFSET))();
		}

		static ::System::Void set_IsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIOPLELMID_SET_ISENABLED_OFFSET))(a1);
		}

		static ::System::Void IHIHFINNDAJ(::System::String* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HCIOPLELMID_IHIHFINNDAJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};

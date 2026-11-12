#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"
class APKJLMDEMLI;
class JAHEBNMBGPI;
class OJOCPEMKKDA;

#define KMALCPNMFHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89D8D0)
#define KMALCPNMFHH_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1D89D8B0)
#define KMALCPNMFHH_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x1D89D890)
#define KMALCPNMFHH_JJFLMPDGGDA_OFFSET UNITYSDK_OFFSET(0x1D89D8E0)
#define KMALCPNMFHH_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1D89D8C0)
#define KMALCPNMFHH_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x1D89D8A0)

inline static constexpr unsigned int KMALCPNMFHH_TypeDefinitionIndex = 38225;

	class KMALCPNMFHH : public ::System::Object
	{
	public:
		::OJOCPEMKKDA* _Handler_k__BackingField; // 0x10
		::JAHEBNMBGPI* _Filter_k__BackingField; // 0x18
		::System::Void _ctor(::OJOCPEMKKDA* a1, ::JAHEBNMBGPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OJOCPEMKKDA*, ::JAHEBNMBGPI*))((::PBYTE)hIl2Cpp + KMALCPNMFHH_CTOR_OFFSET))(this, a1, a2);
		}

		::OJOCPEMKKDA* get_Handler()
		{
			return ((::OJOCPEMKKDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMALCPNMFHH_GET_HANDLER_OFFSET))(this);
		}

		::System::Void set_Handler(::OJOCPEMKKDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOCPEMKKDA*))((::PBYTE)hIl2Cpp + KMALCPNMFHH_SET_HANDLER_OFFSET))(this, a1);
		}

		::JAHEBNMBGPI* get_Filter()
		{
			return ((::JAHEBNMBGPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMALCPNMFHH_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_Filter(::JAHEBNMBGPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAHEBNMBGPI*))((::PBYTE)hIl2Cpp + KMALCPNMFHH_SET_FILTER_OFFSET))(this, a1);
		}

		::System::Boolean JJFLMPDGGDA(::RPG::GameCore::CakeRaceCoreEventType a1, ::APKJLMDEMLI* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + KMALCPNMFHH_JJFLMPDGGDA_OFFSET))(this, a1, a2);
		}

	};

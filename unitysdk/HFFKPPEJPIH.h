#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class OnControlEraFlipperLightDeviceListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HFFKPPEJPIH_CTOR_OFFSET UNITYSDK_OFFSET(0x16BBF3F0)
#define HFFKPPEJPIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BBF790)
#define HFFKPPEJPIH_KGJDLLOBEBO_OFFSET UNITYSDK_OFFSET(0x16BBFE10)
#define HFFKPPEJPIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BBF550)
#define HFFKPPEJPIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16BBF680)
#define HFFKPPEJPIH_PIJIAKLEJPN_OFFSET UNITYSDK_OFFSET(0x16BBFAA0)
#define HFFKPPEJPIH_TICK_OFFSET UNITYSDK_OFFSET(0x16BBFFF0)

inline static constexpr unsigned int HFFKPPEJPIH_TypeDefinitionIndex = 53911;

	class HFFKPPEJPIH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::OnControlEraFlipperLightDeviceListener* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* JGGJMMFGGLD; // 0x28
		::KFELGAIGHAP* ENDDMKOHKAI; // 0x30
		::KFELGAIGHAP* GIFCBACDIOC; // 0x38
		::System::Boolean HPPIMDBIDKA; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_DISPOSE_OFFSET))(this);
		}

		::System::Void PIJIAKLEJPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_PIJIAKLEJPN_OFFSET))(this, a1);
		}

		::System::Void KGJDLLOBEBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_KGJDLLOBEBO_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFFKPPEJPIH_TICK_OFFSET))(this, a1);
		}

	};

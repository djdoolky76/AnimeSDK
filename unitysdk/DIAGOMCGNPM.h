#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityAtmosphereThread/ECityAtmosphereThreadType.h"
#include "unitysdk/System/Object.h"
class ADJIMOCODJO;
class DIAGOMCGNPM;
class KGGNDGKIHLD;

#define DIAGOMCGNPM_CTOR_OFFSET UNITYSDK_OFFSET(0xF961260)
#define DIAGOMCGNPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF961390)
#define DIAGOMCGNPM_EGEOBFCGCIC_OFFSET UNITYSDK_OFFSET(0xF961410)
#define DIAGOMCGNPM_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xF961070)
#define DIAGOMCGNPM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xF960EC0)
#define DIAGOMCGNPM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xF9611D0)
#define DIAGOMCGNPM_JFDJPACEPEG_OFFSET UNITYSDK_OFFSET(0xF960EE0)
#define DIAGOMCGNPM_JMIBHMICFOG_OFFSET UNITYSDK_OFFSET(0xF960F40)
#define DIAGOMCGNPM_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xF961120)
#define DIAGOMCGNPM_MMLEFGGOADO_OFFSET UNITYSDK_OFFSET(0xF960FD0)
#define DIAGOMCGNPM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xF960ED0)

inline static constexpr unsigned int DIAGOMCGNPM_TypeDefinitionIndex = 85040;

	class DIAGOMCGNPM : public ::System::Object
	{
	public:
		::Il2CppArray<::ADJIMOCODJO*>* EPBBEPGBONO; // 0x10
		::KGGNDGKIHLD* HFBMEAGHJLH; // 0x18
		static ::DIAGOMCGNPM** StaticGet__Instance_k__BackingField()
		{
			return (::DIAGOMCGNPM**)UnitySDK::FromName("", "DIAGOMCGNPM")->GetStaticField(0x65A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_CTOR_OFFSET))(this);
		}

		static ::DIAGOMCGNPM* get_Instance()
		{
			return ((::DIAGOMCGNPM*(*)())((::PBYTE)hIl2Cpp + DIAGOMCGNPM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::DIAGOMCGNPM* a1)
		{
			return ((::System::Void(*)(::DIAGOMCGNPM*))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_SET_INSTANCE_OFFSET))(a1);
		}

		static ::KGGNDGKIHLD* JFDJPACEPEG()
		{
			return ((::KGGNDGKIHLD*(*)())((::PBYTE)hIl2Cpp + DIAGOMCGNPM_JFDJPACEPEG_OFFSET))();
		}

		static ::System::Void JMIBHMICFOG(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_JMIBHMICFOG_OFFSET))(a1, a2);
		}

		static ::System::Void MMLEFGGOADO(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_MMLEFGGOADO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAGOMCGNPM_EHFLDBMLBPM_OFFSET))();
		}

		static ::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAGOMCGNPM_KHNCMBEFIKI_OFFSET))();
		}

		static ::System::Void HKKFFCBJOKM(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_HKKFFCBJOKM_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_DISPOSE_OFFSET))(this);
		}

		::KGGNDGKIHLD* EGEOBFCGCIC()
		{
			return ((::KGGNDGKIHLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGOMCGNPM_EGEOBFCGCIC_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;

#define BLLEONBDOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA74C10)
#define BLLEONBDOMJ_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xBA75870)
#define BLLEONBDOMJ_GET_CATENTITY_OFFSET UNITYSDK_OFFSET(0xBA75760)
#define BLLEONBDOMJ_GET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xBA757A0)
#define BLLEONBDOMJ_GET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xBA75780)
#define BLLEONBDOMJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBA757C0)
#define BLLEONBDOMJ_SET_CATENTITY_OFFSET UNITYSDK_OFFSET(0xBA75770)
#define BLLEONBDOMJ_SET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xBA757B0)
#define BLLEONBDOMJ_SET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xBA75790)

inline static constexpr unsigned int BLLEONBDOMJ_TypeDefinitionIndex = 77984;

	class BLLEONBDOMJ : public ::System::Object
	{
	public:
		::AGCPAMNLCGN* _CatEntity_k__BackingField; // 0x10
		::System::Int64 _StartTimeMs_k__BackingField; // 0x18
		::System::Int64 _EndTimeMs_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_CTOR_OFFSET))(this);
		}

		::AGCPAMNLCGN* get_CatEntity()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_GET_CATENTITY_OFFSET))(this);
		}

		::System::Void set_CatEntity(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_SET_CATENTITY_OFFSET))(this, a1);
		}

		::System::Int64 get_StartTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_GET_STARTTIMEMS_OFFSET))(this);
		}

		::System::Void set_StartTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_SET_STARTTIMEMS_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_GET_ENDTIMEMS_OFFSET))(this);
		}

		::System::Void set_EndTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_SET_ENDTIMEMS_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLEONBDOMJ_GAILDDCMCHP_OFFSET))(this);
		}

	};

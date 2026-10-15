#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJMGAAHIMOJ;
class ILEICNLJLEF;
namespace System { class Object; }

#define HDPEJIGDNJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C340C0)
#define HDPEJIGDNJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C33A10)
#define HDPEJIGDNJB_FHAFKAOAHMC_OFFSET UNITYSDK_OFFSET(0x15C33C20)
#define HDPEJIGDNJB_GET_ATTACKDATA_OFFSET UNITYSDK_OFFSET(0x15C34080)
#define HDPEJIGDNJB_GET_ENHANCEDDATA_OFFSET UNITYSDK_OFFSET(0x15C340A0)
#define HDPEJIGDNJB_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x15C33A60)
#define HDPEJIGDNJB_IMBAIDPPLOP_OFFSET UNITYSDK_OFFSET(0x15C33E00)
#define HDPEJIGDNJB_JCNMBNPEECB_OFFSET UNITYSDK_OFFSET(0x15C33E80)
#define HDPEJIGDNJB_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0x15C33B40)
#define HDPEJIGDNJB_MKFHPBGGGLL_OFFSET UNITYSDK_OFFSET(0x15C34000)
#define HDPEJIGDNJB_SET_ATTACKDATA_OFFSET UNITYSDK_OFFSET(0x15C34090)
#define HDPEJIGDNJB_SET_ENHANCEDDATA_OFFSET UNITYSDK_OFFSET(0x15C340B0)

inline static constexpr unsigned int HDPEJIGDNJB_TypeDefinitionIndex = 71459;

	class HDPEJIGDNJB : public ::System::Object
	{
	public:
		::ILEICNLJLEF* _AttackData_k__BackingField; // 0x10
		::DJMGAAHIMOJ* _EnhancedData_k__BackingField; // 0x18
		::System::Boolean EMJHNHGEFKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void FHAFKAOAHMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_FHAFKAOAHMC_OFFSET))(this, a1);
		}

		::System::Void IMBAIDPPLOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_IMBAIDPPLOP_OFFSET))(this);
		}

		::System::Void JCNMBNPEECB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_JCNMBNPEECB_OFFSET))(this, a1);
		}

		::System::Void MKFHPBGGGLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_MKFHPBGGGLL_OFFSET))(this);
		}

		::ILEICNLJLEF* get_AttackData()
		{
			return ((::ILEICNLJLEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_GET_ATTACKDATA_OFFSET))(this);
		}

		::System::Void set_AttackData(::ILEICNLJLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILEICNLJLEF*))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_SET_ATTACKDATA_OFFSET))(this, a1);
		}

		::DJMGAAHIMOJ* get_EnhancedData()
		{
			return ((::DJMGAAHIMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_GET_ENHANCEDDATA_OFFSET))(this);
		}

		::System::Void set_EnhancedData(::DJMGAAHIMOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJMGAAHIMOJ*))((::PBYTE)hIl2Cpp + HDPEJIGDNJB_SET_ENHANCEDDATA_OFFSET))(this, a1);
		}

	};

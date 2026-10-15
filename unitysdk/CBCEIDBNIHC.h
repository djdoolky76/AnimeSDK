#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLGHEHJOCC;

#define CBCEIDBNIHC_CTOR_OFFSET UNITYSDK_OFFSET(0xC49F200)
#define CBCEIDBNIHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC49F3D0)
#define CBCEIDBNIHC_HCFCGNDFDCG_OFFSET UNITYSDK_OFFSET(0xC49F290)
#define CBCEIDBNIHC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC49F2D0)

	class CBCEIDBNIHC : public ::System::Object
	{
	public:
		::DNLGHEHJOCC* ABCNDHBFNBC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCEIDBNIHC_CTOR_OFFSET))(this);
		}

		::System::Void HCFCGNDFDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCEIDBNIHC_HCFCGNDFDCG_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCEIDBNIHC_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCEIDBNIHC_DISPOSE_OFFSET))(this);
		}

	};

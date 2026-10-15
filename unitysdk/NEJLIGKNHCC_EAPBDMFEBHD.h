#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NEJLIGKNHCC_BAIGKBAJFJE;
class NEJLIGKNHCC_GONOHDPNHKO;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class Object; }

#define NEJLIGKNHCC_EAPBDMFEBHD_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBB5F170)
#define NEJLIGKNHCC_EAPBDMFEBHD_AGDLFBIPEIP_OFFSET UNITYSDK_OFFSET(0xBB5CA50)
#define NEJLIGKNHCC_EAPBDMFEBHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB60C90)
#define NEJLIGKNHCC_EAPBDMFEBHD_DAALMLAPAMJ_OFFSET UNITYSDK_OFFSET(0xBB60660)

inline static constexpr unsigned int NEJLIGKNHCC_EAPBDMFEBHD_TypeDefinitionIndex = 69288;

	class NEJLIGKNHCC_EAPBDMFEBHD : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::System::Object*>* LBOEBHOGBOD; // 0x10
		::Collections::Pooled::PooledDictionary_2<::JOGBIBJLPJB, ::System::Byte>* LFLJEGHMEGC; // 0x18
		::Collections::Pooled::PooledDictionary_2<::System::Int64, ::System::Object*>* MNJECHNPHAK; // 0x20
		::Collections::Pooled::PooledList_1<::System::Object*>* OPEAFKKJKMN; // 0x28
		::NEJLIGKNHCC_GONOHDPNHKO* JDIIEBLDKDH; // 0x30
		::NEJLIGKNHCC_BAIGKBAJFJE* JBNLICMBCKH; // 0x38
		::Collections::Pooled::PooledDictionary_2<::JOGBIBJLPJB, ::System::Byte>* EMBOIJGLEDC; // 0x40
		::Collections::Pooled::PooledList_1<::JOGBIBJLPJB>* FBPHIMNIMJD; // 0x48
		::Collections::Pooled::PooledDictionary_2<::System::Int64, ::UnityEngine::Vector3>* IJAFBEGHKLP; // 0x50
		::Collections::Pooled::PooledList_1<::System::Object*>* JMNBALPGILH; // 0x58
		::NEJLIGKNHCC_BAIGKBAJFJE* FACGBNAEFNH; // 0x60
		::Collections::Pooled::PooledList_1<::JOGBIBJLPJB>* NDGFIHNIHCO; // 0x68
		::Collections::Pooled::PooledList_1<::System::Object*>* HLFEABKPKDM; // 0x70
		::NEJLIGKNHCC_GONOHDPNHKO* OMECMPAHBOM; // 0x78
		::System::Boolean CEAHAJKOKFJ; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_EAPBDMFEBHD_CTOR_OFFSET))(this);
		}

		::System::Boolean AGDLFBIPEIP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_EAPBDMFEBHD_AGDLFBIPEIP_OFFSET))(this, a1);
		}

		::System::Void DAALMLAPAMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_EAPBDMFEBHD_DAALMLAPAMJ_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_EAPBDMFEBHD_ABKBOGIGAEH_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCLPPIOKLH;
namespace System { class Object; }

#define COMLBAOIJEA_CFGNJCANOBG_OFFSET UNITYSDK_OFFSET(0xDCB87F0)
#define COMLBAOIJEA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB8390)
#define COMLBAOIJEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB8490)
#define COMLBAOIJEA_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0xDCB8A10)
#define COMLBAOIJEA_HAGACKJBENB_OFFSET UNITYSDK_OFFSET(0xDCB85E0)
#define COMLBAOIJEA_HDMEGPOCJFH_OFFSET UNITYSDK_OFFSET(0xDCB8990)
#define COMLBAOIJEA_JPJOFLKDMHJ_OFFSET UNITYSDK_OFFSET(0xDCB8630)
#define COMLBAOIJEA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDCB88C0)
#define COMLBAOIJEA_LJBEEFNMFKD_OFFSET UNITYSDK_OFFSET(0xDCB87A0)
#define COMLBAOIJEA_LKKEKPDJOLI_OFFSET UNITYSDK_OFFSET(0xDCB8910)

inline static constexpr unsigned int COMLBAOIJEA_TypeDefinitionIndex = 81860;

	class COMLBAOIJEA : public ::System::Object
	{
	public:
		::ALCLPPIOKLH* NHJIMBADBEN; // 0x10
		::System::Boolean AJFKDFFOGOK; // 0x18
		::System::Boolean GOCADLOGNNC; // 0x19
		::System::Boolean PAHKGPMKGAI; // 0x1A
		::System::Boolean BHKKJEDOEDA; // 0x1B
		// static const ::System::String* LCINKEOIFDH; // 0x0
		::System::Void _ctor(::ALCLPPIOKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCLPPIOKLH*))((::PBYTE)hIl2Cpp + COMLBAOIJEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_DISPOSE_OFFSET))(this);
		}

		::System::Void HAGACKJBENB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_HAGACKJBENB_OFFSET))(this);
		}

		::System::Void LJBEEFNMFKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_LJBEEFNMFKD_OFFSET))(this);
		}

		::System::Void CFGNJCANOBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_CFGNJCANOBG_OFFSET))(this);
		}

		::System::Void JPJOFLKDMHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_JPJOFLKDMHJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMLBAOIJEA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LKKEKPDJOLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COMLBAOIJEA_LKKEKPDJOLI_OFFSET))(this, a1);
		}

		::System::Void HDMEGPOCJFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COMLBAOIJEA_HDMEGPOCJFH_OFFSET))(this, a1);
		}

		::System::Void FKEBMDNHDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COMLBAOIJEA_FKEBMDNHDFK_OFFSET))(this, a1);
		}

	};

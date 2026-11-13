#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define JJDOKNONBDH_AHMPMJHGIAB_OFFSET UNITYSDK_OFFSET(0x1742AE90)
#define JJDOKNONBDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1742AFC0)
#define JJDOKNONBDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1742AEE0)
#define JJDOKNONBDH_JPEHEODHHAG_OFFSET UNITYSDK_OFFSET(0x1742B140)
#define JJDOKNONBDH_KGPHELNAMNL_OFFSET UNITYSDK_OFFSET(0x1742AE40)
#define JJDOKNONBDH_LCFLBFOHHFE_OFFSET UNITYSDK_OFFSET(0x1742ADB0)
#define JJDOKNONBDH_LMEDOJHAKEP_OFFSET UNITYSDK_OFFSET(0x1742BBA0)
#define JJDOKNONBDH_MIFPPJNHEDA_OFFSET UNITYSDK_OFFSET(0x1742B330)

inline static constexpr unsigned int JJDOKNONBDH_TypeDefinitionIndex = 61352;

	class JJDOKNONBDH : public ::System::Object
	{
	public:
		::System::Boolean COKNFDGNAIA; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Rect LACJAACNDCC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDOKNONBDH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect LCFLBFOHHFE()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDOKNONBDH_LCFLBFOHHFE_OFFSET))(this);
		}

		::System::Int32 KGPHELNAMNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDOKNONBDH_KGPHELNAMNL_OFFSET))(this);
		}

		::System::Int32 AHMPMJHGIAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDOKNONBDH_AHMPMJHGIAB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDOKNONBDH_DISPOSE_OFFSET))(this);
		}

		::System::Void JPEHEODHHAG(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + JJDOKNONBDH_JPEHEODHHAG_OFFSET))(this, a1);
		}

		::System::Void LMEDOJHAKEP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJDOKNONBDH_LMEDOJHAKEP_OFFSET))(this, a1);
		}

		::System::Void MIFPPJNHEDA(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + JJDOKNONBDH_MIFPPJNHEDA_OFFSET))(this, a1);
		}

	};

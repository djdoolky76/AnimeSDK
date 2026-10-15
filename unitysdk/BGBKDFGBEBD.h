#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BGBKDFGBEBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEFC30)
#define BGBKDFGBEBD_DCMGJCOPBMD_OFFSET UNITYSDK_OFFSET(0x1EBEFC80)
#define BGBKDFGBEBD_FOMLNDICLBK_OFFSET UNITYSDK_OFFSET(0x1EBEFC50)
#define BGBKDFGBEBD_JLKPECDDHEH_OFFSET UNITYSDK_OFFSET(0x1EBEFC70)
#define BGBKDFGBEBD_KNKEPFDIFPG_OFFSET UNITYSDK_OFFSET(0x1EBEFC60)
#define BGBKDFGBEBD_NAILNOEMNJC_OFFSET UNITYSDK_OFFSET(0x1EBEFC40)
#define BGBKDFGBEBD_ONEBKMMIIFI_OFFSET UNITYSDK_OFFSET(0x1EBEFC90)

inline static constexpr unsigned int BGBKDFGBEBD_TypeDefinitionIndex = 35272;

	class BGBKDFGBEBD : public ::System::Object
	{
	public:
		::System::String* PHHHPJOFNFK; // 0x10
		::System::String* OGJLMMFNEHA; // 0x18
		::System::Boolean HHIAPPMMOKC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_CTOR_OFFSET))(this);
		}

		::System::String* NAILNOEMNJC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_NAILNOEMNJC_OFFSET))(this);
		}

		::System::Void FOMLNDICLBK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_FOMLNDICLBK_OFFSET))(this, a1);
		}

		::System::String* KNKEPFDIFPG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_KNKEPFDIFPG_OFFSET))(this);
		}

		::System::Void JLKPECDDHEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_JLKPECDDHEH_OFFSET))(this, a1);
		}

		::System::Boolean DCMGJCOPBMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_DCMGJCOPBMD_OFFSET))(this);
		}

		::System::Void ONEBKMMIIFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGBKDFGBEBD_ONEBKMMIIFI_OFFSET))(this, a1);
		}

	};

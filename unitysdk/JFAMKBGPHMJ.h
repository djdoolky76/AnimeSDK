#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define JFAMKBGPHMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16643D60)
#define JFAMKBGPHMJ_EODEGLBKGEN_OFFSET UNITYSDK_OFFSET(0x166438A0)
#define JFAMKBGPHMJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x166437F0)
#define JFAMKBGPHMJ_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x16643A10)
#define JFAMKBGPHMJ_JHCJALOEFAI_OFFSET UNITYSDK_OFFSET(0x16643D20)
#define JFAMKBGPHMJ_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x16643960)
#define JFAMKBGPHMJ_LAIKHNHMMCL_OFFSET UNITYSDK_OFFSET(0x16643B00)
#define JFAMKBGPHMJ_PODBDMJEMJP_OFFSET UNITYSDK_OFFSET(0x16643850)

	class JFAMKBGPHMJ : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* EAFMEEFNGMM; // 0x10
		::System::String* FGMKCOANOOK; // 0x18
		::System::UInt32 EKGKOBNEHCA; // 0x20
		::System::UInt32 EBGKKHCNKMO; // 0x24
		// static const ::System::String* KMDIKFJPOEO; // 0x0
		// static const ::System::Object PAGMNHCDHKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean PODBDMJEMJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_PODBDMJEMJP_OFFSET))(this);
		}

		::System::Void EODEGLBKGEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_EODEGLBKGEN_OFFSET))(this, a1);
		}

		::System::Void KLAJGAKAFCP(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::String* JHCJALOEFAI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_JHCJALOEFAI_OFFSET))(this);
		}

		::System::Boolean HFKFNFKIEON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void LAIKHNHMMCL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JFAMKBGPHMJ_LAIKHNHMMCL_OFFSET))(this, a1);
		}

	};

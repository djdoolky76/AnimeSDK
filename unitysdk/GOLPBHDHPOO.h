#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define GOLPBHDHPOO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B39BE0)
#define GOLPBHDHPOO_ECAFPCNLOFC_OFFSET UNITYSDK_OFFSET(0x15B39770)
#define GOLPBHDHPOO_JKJOBKHJBEH_OFFSET UNITYSDK_OFFSET(0x15B398D0)
#define GOLPBHDHPOO_KNGMBBEIKPF_OFFSET UNITYSDK_OFFSET(0x15B39980)
#define GOLPBHDHPOO_NGCMBKFFGJK_OFFSET UNITYSDK_OFFSET(0x15B395D0)
#define GOLPBHDHPOO_OGFFGHMOPMG_OFFSET UNITYSDK_OFFSET(0x15B39B20)

inline static constexpr unsigned int GOLPBHDHPOO_TypeDefinitionIndex = 61077;

	class GOLPBHDHPOO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_CTOR_OFFSET))(this);
		}

		::System::Void NGCMBKFFGJK(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_NGCMBKFFGJK_OFFSET))(this, a1, a2);
		}

		::System::Void ECAFPCNLOFC(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_ECAFPCNLOFC_OFFSET))(this, a1);
		}

		::System::Void JKJOBKHJBEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_JKJOBKHJBEH_OFFSET))(this, a1);
		}

		::System::Void KNGMBBEIKPF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_KNGMBBEIKPF_OFFSET))(this, a1, a2);
		}

		::System::Void OGFFGHMOPMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOLPBHDHPOO_OGFFGHMOPMG_OFFSET))(this, a1);
		}

	};

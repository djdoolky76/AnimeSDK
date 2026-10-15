#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
namespace System { class String; }

#define PLEIHLCDBEP_AEBANJEAAOL_OFFSET UNITYSDK_OFFSET(0xC2E8970)
#define PLEIHLCDBEP_ALCOMJAAIJI_OFFSET UNITYSDK_OFFSET(0xC2E86C0)
#define PLEIHLCDBEP_BLOMJLIEAKM_OFFSET UNITYSDK_OFFSET(0xC2E8260)
#define PLEIHLCDBEP_CPGINJMLPOO_OFFSET UNITYSDK_OFFSET(0xC2E8390)
#define PLEIHLCDBEP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E81E0)
#define PLEIHLCDBEP_EFAAAKOHPGD_OFFSET UNITYSDK_OFFSET(0xC2E82C0)
#define PLEIHLCDBEP_JBCHPNJJBLE_OFFSET UNITYSDK_OFFSET(0xC2E88C0)
#define PLEIHLCDBEP_NPFFPEPPHEK_OFFSET UNITYSDK_OFFSET(0xC2E8430)
#define PLEIHLCDBEP_OCGHACHIHHD_OFFSET UNITYSDK_OFFSET(0xC2E8610)

inline static constexpr unsigned int PLEIHLCDBEP_TypeDefinitionIndex = 59361;

	class PLEIHLCDBEP : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BLOMJLIEAKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_BLOMJLIEAKM_OFFSET))(this);
		}

		::System::Void EFAAAKOHPGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_EFAAAKOHPGD_OFFSET))(this, a1);
		}

		::System::Int32 NPFFPEPPHEK(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_NPFFPEPPHEK_OFFSET))(this, a1);
		}

		::System::Void OCGHACHIHHD(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_OCGHACHIHHD_OFFSET))(this, a1, a2);
		}

		::System::Int32 ALCOMJAAIJI(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_ALCOMJAAIJI_OFFSET))(this, a1);
		}

		::System::Void JBCHPNJJBLE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_JBCHPNJJBLE_OFFSET))(this, a1, a2);
		}

		::System::Void AEBANJEAAOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_AEBANJEAAOL_OFFSET))(this);
		}

		::System::Void CPGINJMLPOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIHLCDBEP_CPGINJMLPOO_OFFSET))(this);
		}

	};

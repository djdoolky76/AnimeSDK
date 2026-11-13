#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
namespace System { class String; }

#define PLEIHLCDBEP_AEBANJEAAOL_OFFSET UNITYSDK_OFFSET(0x188752D0)
#define PLEIHLCDBEP_ALCOMJAAIJI_OFFSET UNITYSDK_OFFSET(0x18875020)
#define PLEIHLCDBEP_BLOMJLIEAKM_OFFSET UNITYSDK_OFFSET(0x18874BC0)
#define PLEIHLCDBEP_CPGINJMLPOO_OFFSET UNITYSDK_OFFSET(0x18874CF0)
#define PLEIHLCDBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x18874B40)
#define PLEIHLCDBEP_EFAAAKOHPGD_OFFSET UNITYSDK_OFFSET(0x18874C20)
#define PLEIHLCDBEP_JBCHPNJJBLE_OFFSET UNITYSDK_OFFSET(0x18875220)
#define PLEIHLCDBEP_NPFFPEPPHEK_OFFSET UNITYSDK_OFFSET(0x18874D90)
#define PLEIHLCDBEP_OCGHACHIHHD_OFFSET UNITYSDK_OFFSET(0x18874F70)

inline static constexpr unsigned int PLEIHLCDBEP_TypeDefinitionIndex = 60638;

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

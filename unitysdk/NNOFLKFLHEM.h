#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NNOFLKFLHEM_BLJADIEFEKN_OFFSET UNITYSDK_OFFSET(0x17A19290)
#define NNOFLKFLHEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A194D0)
#define NNOFLKFLHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x17A18FE0)
#define NNOFLKFLHEM_DELOBJGNOBE_OFFSET UNITYSDK_OFFSET(0x17A190E0)
#define NNOFLKFLHEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A19010)
#define NNOFLKFLHEM_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x17A19450)
#define NNOFLKFLHEM_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x17A19470)
#define NNOFLKFLHEM_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x17A194B0)
#define NNOFLKFLHEM_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x17A19490)
#define NNOFLKFLHEM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x17A19050)
#define NNOFLKFLHEM_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x17A19460)
#define NNOFLKFLHEM_SET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x17A19480)
#define NNOFLKFLHEM_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x17A194C0)
#define NNOFLKFLHEM_SET_STATENAME_OFFSET UNITYSDK_OFFSET(0x17A194A0)

inline static constexpr unsigned int NNOFLKFLHEM_TypeDefinitionIndex = 61462;

	class NNOFLKFLHEM : public ::System::Object
	{
	public:
		::System::String* _LayerName_k__BackingField; // 0x10
		::System::String* _EntityName_k__BackingField; // 0x18
		::System::String* _ParamName_k__BackingField; // 0x20
		::System::String* _StateName_k__BackingField; // 0x28
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30
		::System::Boolean HDKGPLIBNDM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Single PGMIOKKLHIE; // 0x40
		static ::System::Single* StaticGet_MKKHOFHDJOP()
		{
			return (::System::Single*)UnitySDK::FromName("", "NNOFLKFLHEM")->GetStaticField(0x131F0);
		}

		::System::Void _ctor(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOFLKFLHEM_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void DELOBJGNOBE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_DELOBJGNOBE_OFFSET))(this, a1);
		}

		::System::Void BLJADIEFEKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_BLJADIEFEKN_OFFSET))(this, a1);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_GET_ENTITYNAME_OFFSET))(this);
		}

		::System::Void set_EntityName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_SET_ENTITYNAME_OFFSET))(this, a1);
		}

		::System::String* get_LayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_GET_LAYERNAME_OFFSET))(this);
		}

		::System::Void set_LayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_SET_LAYERNAME_OFFSET))(this, a1);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_GET_STATENAME_OFFSET))(this);
		}

		::System::Void set_StateName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_SET_STATENAME_OFFSET))(this, a1);
		}

		::System::String* get_ParamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_GET_PARAMNAME_OFFSET))(this);
		}

		::System::Void set_ParamName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNOFLKFLHEM_SET_PARAMNAME_OFFSET))(this, a1);
		}

	};

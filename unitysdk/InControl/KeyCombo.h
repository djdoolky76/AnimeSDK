#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3E5B2F0)
#define INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x3E5B2F0)
#define INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3E5B290)
#define INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET UNITYSDK_OFFSET(0x3E5B290)
#define INCONTROL_KEYCOMBO_ADD_OFFSET UNITYSDK_OFFSET(0x3E5B290)
#define INCONTROL_KEYCOMBO_ANDNOT_OFFSET UNITYSDK_OFFSET(0x3E5B350)
#define INCONTROL_KEYCOMBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB89280)
#define INCONTROL_KEYCOMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x3E5B3D0)
#define INCONTROL_KEYCOMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x3E5B180)
#define INCONTROL_KEYCOMBO_DETECT_OFFSET UNITYSDK_OFFSET(0x1CB85F30)
#define INCONTROL_KEYCOMBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E5B410)
#define INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3E5B320)
#define INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET UNITYSDK_OFFSET(0x3E5B340)
#define INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E5B440)
#define INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3E5B2C0)
#define INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET UNITYSDK_OFFSET(0x3E5B2E0)
#define INCONTROL_KEYCOMBO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE600)
#define INCONTROL_KEYCOMBO_GET_EXCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0x3260)
#define INCONTROL_KEYCOMBO_GET_INCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0xE600)
#define INCONTROL_KEYCOMBO_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x3E5B3F0)
#define INCONTROL_KEYCOMBO_GET_OFFSET UNITYSDK_OFFSET(0x3E5B2E0)
#define INCONTROL_KEYCOMBO_LOAD_OFFSET UNITYSDK_OFFSET(0x3E5B470)
#define INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CB88560)
#define INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CB89230)
#define INCONTROL_KEYCOMBO_SAVE_OFFSET UNITYSDK_OFFSET(0x3E5B480)
#define INCONTROL_KEYCOMBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E5B400)
#define INCONTROL_KEYCOMBO_WITH_OFFSET UNITYSDK_OFFSET(0x1CB89080)

namespace InControl
{
	inline static constexpr unsigned int KeyCombo_TypeDefinitionIndex = 41777;

	struct alignas(4) KeyCombo
	{
		::System::Int32 includeSize; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 includeData; // 0x18
		::System::Int32 excludeSize; // 0x20
		::System::Byte _padding1[0x4];
		::System::UInt64 excludeData; // 0x28
		static ::System::Text::StringBuilder** StaticGet_cachedStringBuilder()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("InControl", "KeyCombo")->GetStaticField(0x69690);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_cachedStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)UnitySDK::FromName("InControl", "KeyCombo")->GetStaticField(0x69698);
		}

		static ::InControl::KeyCombo* StaticGet_Empty()
		{
			return (::InControl::KeyCombo*)UnitySDK::FromName("InControl", "KeyCombo")->GetStaticField(0x15290);
		}

		::System::Void _ctor(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_CCTOR_OFFSET))();
		}

		::System::Void AddIncludeInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET))(this, a1);
		}

		::System::Int32 GetIncludeInt(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET))(this, a1);
		}

		::System::Void Add(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADD_OFFSET))(this, a1);
		}

		::InControl::Key Get(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_OFFSET))(this, a1);
		}

		::System::Void AddInclude(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET))(this, a1);
		}

		::InControl::Key GetInclude(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET))(this, a1);
		}

		::System::Void AddExcludeInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET))(this, a1);
		}

		::System::Int32 GetExcludeInt(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET))(this, a1);
		}

		::System::Void AddExclude(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET))(this, a1);
		}

		::InControl::Key GetExclude(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET))(this, a1);
		}

		/*
		static ::InControl::KeyCombo With(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::InControl::KeyCombo(*)(::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_WITH_OFFSET))(a1);
		}
		*/

		/*
		::InControl::KeyCombo AndNot(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::InControl::KeyCombo(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ANDNOT_OFFSET))(this, a1);
		}
		*/

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_IncludeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_INCLUDECOUNT_OFFSET))(this);
		}

		::System::Int32 get_ExcludeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_EXCLUDECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_ISPRESSED_OFFSET))(this);
		}

		/*
		static ::InControl::KeyCombo Detect(::System::Boolean a1)
		{
			return ((::InControl::KeyCombo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_DETECT_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::InControl::KeyCombo a1, ::InControl::KeyCombo a2)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::InControl::KeyCombo a1, ::InControl::KeyCombo a2)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_SAVE_OFFSET))(this, a1);
		}

	};
}

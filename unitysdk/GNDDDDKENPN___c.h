#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Comparison_1; }

#define GNDDDDKENPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBEE050)
#define GNDDDDKENPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEE090)
#define GNDDDDKENPN___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1EBEE0A0)
#define GNDDDDKENPN___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET UNITYSDK_OFFSET(0x1EBEE0B0)
#define GNDDDDKENPN___C__SORTFILEBYNAME_B__103_0_OFFSET UNITYSDK_OFFSET(0x1EBEE0C0)

inline static constexpr unsigned int GNDDDDKENPN___c_TypeDefinitionIndex = 35307;

	class GNDDDDKENPN___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_0()
		{
			return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520C0);
		}

		static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_1()
		{
			return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520C8);
		}

		static ::System::Comparison_1<::System::String*>** StaticGet___9__103_0()
		{
			return (::System::Comparison_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNDDDDKENPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C_CTOR_OFFSET))(this);
		}

		::System::Void _RemoveDirectoryReadOnlyAttr_b__70_0(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveDirectoryReadOnlyAttr_b__70_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _SortFileByName_b__103_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C__SORTFILEBYNAME_B__103_0_OFFSET))(this, a1, a2);
		}

	};

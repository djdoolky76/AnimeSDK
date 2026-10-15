#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHIHPODNPMO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MHIHPODNPMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB943040)
#define MHIHPODNPMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB943080)
#define MHIHPODNPMO___C___LISTENGUIDEHINTLEVELVAR_B__69_0_OFFSET UNITYSDK_OFFSET(0xB9430C0)
#define MHIHPODNPMO___C___LISTENLEVELVAR_B__59_0_OFFSET UNITYSDK_OFFSET(0xB943090)

inline static constexpr unsigned int MHIHPODNPMO___c_TypeDefinitionIndex = 76778;

	class MHIHPODNPMO___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__69_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FB80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FB88);
		}

		static ::System::Action** StaticGet___9__59_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHIHPODNPMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO___C_CTOR_OFFSET))(this);
		}

		::System::Void __ListenLevelVar_b__59_0(::MHIHPODNPMO* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MHIHPODNPMO*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO___C___LISTENLEVELVAR_B__59_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __ListenGuideHintLevelVar_b__69_0(::MHIHPODNPMO* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MHIHPODNPMO*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO___C___LISTENGUIDEHINTLEVELVAR_B__69_0_OFFSET))(this, a1, a2, a3);
		}

	};

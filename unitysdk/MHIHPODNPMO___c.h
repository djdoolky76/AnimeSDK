#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHIHPODNPMO;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MHIHPODNPMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB93CFF0)
#define MHIHPODNPMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB93D030)
#define MHIHPODNPMO___C___LISTENGUIDEHINTLEVELVAR_B__69_0_OFFSET UNITYSDK_OFFSET(0xB93D070)
#define MHIHPODNPMO___C___LISTENLEVELVAR_B__59_0_OFFSET UNITYSDK_OFFSET(0xB93D040)

inline static constexpr unsigned int MHIHPODNPMO___c_TypeDefinitionIndex = 76777;

	class MHIHPODNPMO___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::MHIHPODNPMO*, ::System::Int32, ::System::String*>** StaticGet___9__69_0()
		{
			return (::System::Action_3<::MHIHPODNPMO*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68DB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68DB8);
		}

		static ::System::Action_3<::MHIHPODNPMO*, ::System::Int32, ::System::String*>** StaticGet___9__59_0()
		{
			return (::System::Action_3<::MHIHPODNPMO*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68DC0);
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

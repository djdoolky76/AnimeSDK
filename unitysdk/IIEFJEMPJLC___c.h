#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
namespace System { class Action; }
namespace System { class Object; }

#define IIEFJEMPJLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16439900)
#define IIEFJEMPJLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16439940)
#define IIEFJEMPJLC___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x16439950)

inline static constexpr unsigned int IIEFJEMPJLC___c_TypeDefinitionIndex = 53897;

	class IIEFJEMPJLC___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIEFJEMPJLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEFJEMPJLC___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + IIEFJEMPJLC___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
		}

	};

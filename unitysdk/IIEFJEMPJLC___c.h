#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IIEFJEMPJLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x193CC840)
#define IIEFJEMPJLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x193CC880)
#define IIEFJEMPJLC___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x193CC890)

inline static constexpr unsigned int IIEFJEMPJLC___c_TypeDefinitionIndex = 55061;

	class IIEFJEMPJLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x660E0);
		}

		static ::System::Action_1<::HIOAMIPNLIN*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::HIOAMIPNLIN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x660E8);
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

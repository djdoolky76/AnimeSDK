#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define JCHNMBOAIJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16955CB0)
#define JCHNMBOAIJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16955CF0)
#define JCHNMBOAIJM___C__ADDNOTIFY_B__7_0_OFFSET UNITYSDK_OFFSET(0x16955D00)

inline static constexpr unsigned int JCHNMBOAIJM___c_TypeDefinitionIndex = 62444;

	class JCHNMBOAIJM___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66010);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCHNMBOAIJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHNMBOAIJM___C_CTOR_OFFSET))(this);
		}

		::System::Void _AddNotify_b__7_0(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM___C__ADDNOTIFY_B__7_0_OFFSET))(this, a1, a2);
		}

	};

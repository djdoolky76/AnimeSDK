#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMNMMKNDPGN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MMNMMKNDPGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18907E70)
#define MMNMMKNDPGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18907EB0)
#define MMNMMKNDPGN___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET UNITYSDK_OFFSET(0x18907F50)
#define MMNMMKNDPGN___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET UNITYSDK_OFFSET(0x18907EC0)

inline static constexpr unsigned int MMNMMKNDPGN___c_TypeDefinitionIndex = 79260;

	class MMNMMKNDPGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAAE0);
		}

		static ::System::Action_1<::MMNMMKNDPGN*>** StaticGet___9__38_0()
		{
			return (::System::Action_1<::MMNMMKNDPGN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAAE8);
		}

		static ::System::Action_1<::MMNMMKNDPGN*>** StaticGet___9__40_0()
		{
			return (::System::Action_1<::MMNMMKNDPGN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__OnPlayerCreateAction_b__38_0(::MMNMMKNDPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNMMKNDPGN*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET))(this, a1);
		}

		::System::Void _get__FixedUpdateAction_b__40_0(::MMNMMKNDPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNMMKNDPGN*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET))(this, a1);
		}

	};

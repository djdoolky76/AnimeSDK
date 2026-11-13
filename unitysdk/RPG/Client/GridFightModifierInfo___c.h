#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLCOAJAODFE;
namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC36980)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC369C0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__GETRICHTEXTMODIFIERS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CC369D0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__GETRICHTEXTMODIFIERS_B__23_1_OFFSET UNITYSDK_OFFSET(0x1CC36A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c_TypeDefinitionIndex = 66663;

	class GridFightModifierInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::BLCOAJAODFE*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameModifier*, ::BLCOAJAODFE*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72280);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72288);
		}

		static ::System::Predicate_1<::RPG::Client::GridFightGameModifier*>** StaticGet___9__23_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameModifier*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRichTextModifiers_b__23_0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__GETRICHTEXTMODIFIERS_B__23_0_OFFSET))(this, a1);
		}

		::BLCOAJAODFE* _GetRichTextModifiers_b__23_1(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::BLCOAJAODFE*(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__GETRICHTEXTMODIFIERS_B__23_1_OFFSET))(this, a1);
		}

	};
}
